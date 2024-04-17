#include <stdio.h>

int media(int *a0, int a1);
int covariancia(int *a0, int *a1, int a2);

int main()
{
  int a0[10] = {1, 2, 3, 4};
  int a1[10] = {1, 10, 50, 100};
  int a2 = 4;

  printf("covariancia: %d\n", covariancia(a0, a1, a2));

  return 0;
} // gcc covariancia.c -o main

int media(int *a0, int a1)
{
  int sum = 0;
  for (int i = 0; i < a1; i++)
    sum += a0[i];
  return sum / a1;
}

int covariancia(int *a0, int *a1, int a2)
{
  int s0 = media(a0, a2);
  int s1 = media(a1, a2);

  int s2 = 0;
  for (int t0 = 0; t0 < a2; t0++)
  {
    int t1 = a0[t0] - s0;
    int t2 = a1[t0] - s1;
    s2 += ((t1) * (t2));
  }
  return s2 / (a2 - 1);
}