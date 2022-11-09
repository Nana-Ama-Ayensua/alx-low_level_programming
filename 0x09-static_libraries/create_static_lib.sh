#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -rc liball.a *.c
ar rcs liball.a *.o
