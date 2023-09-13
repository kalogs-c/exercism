#include "isogram.h"
#include <ctype.h>
#include <stdio.h>

bool is_isogram(const char phrase[]) {
  if (phrase == NULL) {
    return false;
  }

  int letters[256] = {0};

  for (int i = 0; phrase[i] != '\0'; i++) {
    if (phrase[i] == ' ' || phrase[i] == '-') {
      continue;
    }

    int c = (int)(tolower(phrase[i]));
    int repeats = letters[c];
    letters[c]++;

    if (repeats > 0) {
      return false;
    }
  }

  return true;
}
