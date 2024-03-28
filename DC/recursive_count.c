#include <stdio.h>
#define size 5

int count(int *v, int pos)
{
  if (pos == -1)
    return 0;
  return 1 + count(v, --pos);
}

int max(int *v, int pos)
{
  if (pos == -1)
    return 0;
  if (max(v, --pos) > v[pos])
  {
    return v[--pos];
  }

  return v[pos];
}

int main(int argc, char const *argv[])
{
  int v[size] = {1, 2, 3, 10, 5};

  printf("%d", max(v, size));
  return 0;
}
