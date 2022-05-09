#!/bin/bash
gcc -Wall -fPIC -pedantic -Werror -Wextra -shared -c *.c && gcc -shared -o liball.so *.o
