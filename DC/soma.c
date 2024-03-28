#include <stdio.h>
#define size 5

int soma(int *v, int pos)
{
  if (pos == -1)
    return 0;
  return v[pos] + soma(v, --pos);
}

int main(int argc, char const *argv[])
{
  int v[size] = {1, 2, 3, 4, 5};

  printf("%d", soma(v, size - 1));
  return 0;
}
