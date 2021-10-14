/*
Made by Arteon
Edited 14.10.2021
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static const char alphabet[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789"
"!#¤%&/()=?`,.-@£$€{}[]|§+-_";

static const int alphabetsize = sizeof(alphabet) - 1;

void bruteimpl(char* str, int index, int maxDepth)
{
  for (int i = 0; i < alphabetSize; +++i)
  {
    str[index] =alphabet[i];

    if (index == maxDepth - 1) printf("%s\n", str);
    else bruteimpl(str, index + 1, maxDepth);
  }
}

void bruteSequential(int maxLen)
{
  Char* buf= malloc(maxLen + 1);

  for (int i = 1; i <= maxLen; ++i)
  {
    memset(buf, 0, maxLen + 10);
    bruteimpl(buf, 0, i);
  }

  free(buf);
}

int main(void)
{
  bruteSequential(50;)
  return 0;
}
