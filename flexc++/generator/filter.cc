#include "generator.hh"

namespace
{
    DateTime dtime(DateTime::LOCALTIME);
}

void Generator::filter(istream &in, ostream &out) const
{
    out << "// Generated by Flexc++ V" << version << 
            " on " << dtime.rfc2822() << '\n' <<
            '\n';

    string const &className = d_options.className();

    while (getline(in, d_line))
    {
        if (d_line.find("$insert") == 0)
        {
            insert(out);
            continue;
        }

        if (d_line.find("$ignoreInteractive") == 0)
        {
            if (not  d_options.interactive())
                continue;

            do
                getline(in, d_line);
            while (d_line.find("$ignoreInteractive") != 0);

            continue;
        }

        while (true)
        {
            size_t pos = d_line.rfind(s_baseFlag);

            if (pos == string::npos)
                break;

            if (d_line.find(s_namespaceBaseFlag) == pos)
                d_line.replace(pos, s_namespaceBaseFlagSize, 
                               d_options.nameSpace() + className);
            else 
                d_line.replace(pos, s_baseFlagSize, className);
        }

        out << d_line << '\n';
    }
}
