#pragma once

#include <stddef.h>
#include "nutility.h"

void	reverse_array(int* p, size_t size);
void	copy_array(int* pdest, const int* psource, size_t n);
void	print_array(const int* p, size_t size);
void	set_random_array(int* p, size_t size);
void	set_random_array_range(int* p, size_t size, int low, int high);
double* set_double_array(double* pa, size_t size);
void	sort_array(int* p, size_t size);
int*	get_array_max(const int* p, size_t size);
int*	get_array_min(const int* p, size_t size);
void	reverse_copy(int* pdest, const int* psource, size_t n);
int*	search_val(const int* pa, size_t size, int val);
int		get_median(const int* ptr, size_t size);

