#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool is_armstrong_number(int candidate) {
  int sum = 0;
  int n_length = floor(log10(abs(candidate))) + 1;

  if (n_length == 1 || candidate == 0) {
    return true;
  }

  for (int i = candidate; i != 0; i /= 10) {
    sum += pow(i % 10, n_length);
  }

  if (sum == candidate) {
    return true;
  }

  return false;
}
