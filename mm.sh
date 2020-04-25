#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic src/*.c -o build/sherly -g

cp -r src/rsrc build/
