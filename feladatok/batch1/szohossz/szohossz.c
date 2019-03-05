#include <stdio.h>
int
main (void)
{
  int h = 0;
  int n = 0x01;
  do
    ++h;
  while (n <<= 1);
  printf ("A szohossz ezen a gepen: %d bites\n", h);
  return 0;
}
