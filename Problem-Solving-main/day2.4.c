#include<stdio.h>
void main()
{ int i, j,k ;
  for(i=1;i<=4;i++)
  {
    k=i;
    for(j=1;j<=i;j++)
    {printf("%c",k+64 );
    k++;
  }

  printf("\n" );
  }

}
