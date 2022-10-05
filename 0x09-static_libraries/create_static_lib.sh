#!/bin/bash/

# bash file for creating a static libracry by

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ar -t liball.a
