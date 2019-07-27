#include<stdio.h>

void main()
{
  float sum, prod, xi = 1.0;
  float x[3] = {1,2,3};
  float y[3] = {1,8,27};
  int j, m, n = 3;

  // Loop
  sum = 0;
  for(j = 0; j < n; j++)
  {
    prod = 1;
    for(m = 0; m < n; m++)
    {
      if (m==j)
        continue;
      else
        prod = prod* ( (xi - x[m])/ (x[j] - x[m]) );
    }
    sum = sum + y[j]* prod;
  }

  printf("Value is %f \n", sum);
}
