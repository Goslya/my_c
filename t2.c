#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 10

int main()
{
  int a[M][N];
  int i, j, mini, minj, maxi, maxj;
  int min = 101;
  int max = 0;

  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
          a[i][j] = rand()%100;

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%3d", a[i][j]);
      printf("\n");
  }

  for(i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
if(min < a[i][j]) {
    min = a[i][j];
    mini = i;
    minj = j;
}
if (max > a[i][j]) {
  max = a[i][j];
     maxi = i;
     maxj = j;
}
a[mini][minj] = max;
a[maxi][maxj] = min;
  }
  max = 0;
  min = 101;
  }

  printf("\n\n");

    for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%3d", a[i][j]);
      printf("\n");
  }

  return 0;
}
