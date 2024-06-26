#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* Function prototype for linear search */
int linear_search(int *array, size_t size, int value);

/* Function prototype for Binary search */
int binary_search(int *array, size_t size, int value);

/* Function prototype for Jump search */
int jump_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
