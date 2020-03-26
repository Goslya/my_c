
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 10

int main()
{
  int a[M][N];
  int i, j;
int min = 101;

  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
          a[i][j] = rand()%100;

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%3d", a[i][j]);
      printf("\n");
  }

  for(i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
        if (a[j][i] < min)
            min = a[j][i];
    }
    printf("\ncolumn %d min = %d\n",i, min );
    min = 101;
  }


  return 0;
}
