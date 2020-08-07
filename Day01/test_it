#!/bin/bash

TEST='unit_tests'

gcc -o ${TEST} *.c tests/project.c --coverage -lcriterion
./${TEST}
gcovr -e tests/
rm -f *.gc*
rm unit_tests