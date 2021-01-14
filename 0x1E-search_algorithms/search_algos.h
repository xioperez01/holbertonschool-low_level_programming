#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Libraries */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r); /** Auxiliar **/
int jump_search(int *array, size_t size, int value); /** Advanced **/
int interpolation_search(int *array, size_t size, int value); /** Advanced **/
#endif