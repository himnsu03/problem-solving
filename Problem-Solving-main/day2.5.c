#include <stdio.h>
void main()
{
  int i,j,n;
  printf("enter the no. of lines you want to print\n" );
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(j=i;j<=n;j++)
    {
      printf("%c",j+64);

    }
    printf("\n" );
  }
}
