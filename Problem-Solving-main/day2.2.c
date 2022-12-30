#include<stdio.h>
void main()
{
  int i,j,k=0,n=4;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf( "%d ",k+j);
    }
    k++;
    printf("\n");

  }
}
