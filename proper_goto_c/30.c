#include <stdio.h>
#include <...>

int main()
{
    int* buf = NULL;
    size_t pos = 0;
    size_t sz = 8; // or whatever initial size

    goto alloc;
    while (checkQuit()) {
        if (pos > sz) { // resize array
            sz <<= 1;
alloc:
            buf = reallocarray(sz, pos, ...);
            // check for errors
        }

        // do something with buf
    }

    return 0;
}
