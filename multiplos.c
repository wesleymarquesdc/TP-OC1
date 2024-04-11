#include <stdio.h>

int multiplos(int *a0, int a1, int a2);

int main()
{
  int a0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // vetor
  int a1 = 10;                                  // quantidade de elementos
  int a2 = 2;                                   // numero a ser verificado

  printf("multiplos: %d\n", multiplos(a0, a1, a2));

  return 0;
} // gcc multiplos.c -o main

int multiplos(int *a0, int a1, int a2)
{
  int sum = 0;
  for (int i = 0; i < a1; i++)
    if (a0[i] % a2 == 0)
      sum++;
  return sum;
}