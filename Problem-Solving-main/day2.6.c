#include <stdio.h>
void main()
{
  int i,j,space,row;
  printf("enter the no. of lines to be print\n" );
  scanf("%d",&row);
  for(i=1;i<=row;i++)
  {
    for(space=1;space<=row-i;space++)
    {
      printf(" ");
    }
    for(j=i;j>=1;j--)
    {
      printf("%d",j );
    }
    for(j=2;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }

}
