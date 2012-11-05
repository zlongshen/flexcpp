#include "flexc++.ih"

    // Cf bisonc++'s usage.cc for an example of how to write usage().

void usage(string const &program_name)
{
    cout << 
    "\n" <<
    program_name << " by Frank B. Brokken (f.b.brokken@rug.nl)\n"
    "                 and Jean-Paul van Oosten (j.p.van.oosten@rug.nl)\n"
    "\n"
    "Lexical Scanner Generator V "  << version << "\n"
    "Copyright (c) GPL " << year << ". NO WARRANTY.\n"
    "\n"
    "Usage: " << program_name << " [options] infile\n"
    "Where:\n"
    "  [options] - zero or more optional arguments, where [options] are:\n"
    "   --baseclass-header=<filename> (-b):\n"
    "           filename for the base class definition.\n"
    "   --baseclass-skeleton=<path> (-B):\n"
    "           location of the baseclass header skeleton.\n"
    "   --case-insensitive:\n"
    "           regexes disregard letter casing.\n"
    "   --class-header=<filename> (-c):\n"
    "           filename for the class definition.\n"
    "   --class-name=<classname> (-c):\n"
    "           class name of the generated scanner class.\n"
    "   --class-skeleton=<path> (-C):\n"
    "            location of the class header skeleton.\n"
    "   --construction (-K):\n"
    "           write information about the rules and DFA-creation on\n"
    "           'infile'.output\n"
    "   --debug (-d):\n"
    "           generates debug output statements in the lex function\n"
    "   --filenames=<basename> (-f):\n"
    "           use 'basename' instead of 'Scanner' for generated files\n"
    "   --force-class-header:\n"
    "           overwrite an existing class header file.\n"
    "   --force-implementation-header:\n"
    "           overwrite an existing implementation header file.\n"
    "   --help (-h):\n"
    "           display this help-message.\n"
    "   --implementation-header=<filename> (-i):\n"
    "           filename for the implementation header.\n"
    "   --implementation-skeleton=<path> (-I):\n"
    "            location of the implementation header skeleton.\n"
    "   --lex-function-name=<path>:\n"
    "            name of the public lex-function.\n"
    "   --lex-skeleton=<path> (-P):\n"
    "            location of the lex function's skeleton.\n"
    "   --lex-source=<filename> (-l):\n"
    "            filename for the lex function's source.\n"
    "   --matched-rules (-R):\n"
    "            show the numbers of matched rules on stdout\n"
    "            (implied by --debug)\n"
    "   --max-depth=<maxDepth> (-m):\n"
    "            set the max. scanner specification file inclusion depth.\n"
    "   --namespace=<namespace> (-n):\n"
    "            define a namespace.\n"
    "   --no-baseclass-header:\n"
    "            the baseclass header is not rewritten.\n"
    "   --no-lex-source:\n"
    "            the source containing lex() is not rewritten.\n"
    "   --no-lines:\n"
    "            do not add #line preprocessor directives to the lex "
                                                            "function.\n"
    "   --own-tokens (-t):\n"
    "           flexc++ displays the tokens and their corresponding\n"
    "           matched text it received from its own lexcial scanner.\n"
    "   --print-tokens (-t):\n"
    "           the print() member of the generated parser class displays\n"
    "           the tokens and their corresponding matched text.\n"
    "   --regex-calls:\n"
    "           show function call order when parsing regexes\n"
    "   --show-filenames (-F):\n"
    "            display the names of generated files.\n"
    "   --skeleton-directory=<path> (-S):\n"
    "            location of the skeleton directory.\n"
    "   --target-directory=<path>:\n"
    "            target directory for generated files.\n"
    "   --usage (-h):\n"
    "           display this help-message.\n"
    "   --verbose (-V):\n"
    "           provide additional info on stdout\n"
    "   --version (-v):\n"
    "           display " << program_name << "'s version and terminate.\n"
    "\n"
    "  `infile' - name of the file containing the scanner specifications\n"

    << '\n';
}



