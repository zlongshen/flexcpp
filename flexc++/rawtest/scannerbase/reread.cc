#include "scannerbase.ih"

void ScannerBase::reRead()
{
    if (plainChar())
        d_deque.push_front(d_char);
}

