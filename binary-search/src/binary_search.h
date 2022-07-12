#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stddef.h>

const int* binary_search(int value, const int *arr, size_t length);
const int* search_recursive (int value, const int *arr, size_t min, size_t max);

#endif
