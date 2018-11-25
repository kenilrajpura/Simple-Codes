#include<stdio.h>

int main()
{
  int A[3][2], B[2][3], C[3][3], i, j, k;

  // part 1
  printf("Enter array elements of A...\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<2; j++)
    {
      scanf("%d\n", &A[i][j]);
    }
  }

  printf("Enter array elements of B...\n");
  for(j=0; j<2; j++)
  {
    for(k=0; k<3; k++)
    {
      scanf("%d\n", &B[j][k]);
    }
  }

  // part 2
  printf("Array elements of A are...\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<2; j++)
    {
      printf("%d \t", A[i][j]);
    }
    printf("\n");
  }

  printf("Array elements of B are...\n");
  for(j=0; j<2; j++)
  {
    for(k=0; k<3; k++)
    {
      printf("%d \t", B[j][k]);
    }
    printf("\n");
  }

  // part 3 === Multiplication
  int sum = 0;
  for(i=0; i<3; i++)
  {
    for(k=0; k<3; k++)
    {
      for(j=0; j<2; j++)
      {
        sum = sum +  A[i][j] * B[j][k];
      }
      C[i][k] = sum;
      sum = 0;
    }
  }

  printf("Array elements of C are...\n");
  for(i=0; i<3; i++)
  {
    for(k=0; k<3; k++)
    {
      printf("%d \t", C[i][k]);
    }
    printf("\n");
  }

}
