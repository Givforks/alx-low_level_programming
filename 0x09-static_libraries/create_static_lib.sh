#!/bin/bash
gcc -wall -peddantic -werror -wextra -c *.c
ar rc liball.a *.o
