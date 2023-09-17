#include "square_root.h"
#include <math.h>
#include <stdlib.h>

int square_root(int n) {
  if (n <= 1) {
    return n;
  }

  double guess = (double)n / 2;

  while (1) {
    double next_guess = (guess + n / guess) / 2;

    if (next_guess == guess) {
      return guess;
    }

    guess = next_guess;
  }
}
