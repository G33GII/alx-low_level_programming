# __0x18. C - Dynamic libraries__

    ## _gcc -fPIC -shared *.c -o libnew_name.so
    ## _gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o a
    ## _nm -D --defined-only libnew_name.so
    ## _export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
    ## _ldd a
