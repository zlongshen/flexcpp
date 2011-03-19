#include "generator.ih"

void Generator::outFinAc(FinAcInfo const &finac, ostream &out, size_t &idx)
{
    out << 
        "     {" << setw(2) << finac.rule() << ',';

    switch (int final = finac.final())
    {
        case FinAcInfo::NOT_FINAL:
            out << "-2," << setw(2) << finac.accept() << ',' <<
                                       setw(2) << finac.inc();
        break;

        case FinAcInfo::FINAL:
            out << " 0,-1, 0";
        break;

        default:
            if (finac.inc())
                out << "-1," << setw(2) << finac.accept() << ", 1";
            else
                out << setw(2) << final << ",-1, 0";
        break;
    }
    
    out << "},  // " << idx++ << '\n';

}


