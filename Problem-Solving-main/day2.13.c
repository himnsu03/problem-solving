#include <stdio.h>
int fun(int num)
{
  if(num>=0)
   return(num-5);
   else if (num<0)
     return(num+5);
}
void main()
{
  int n,i,t,c=0;
  printf("enter the no,");
  scanf("%d",&n);
  for(i=1;i<=9999;i++)
{  n=fun(n);
  if(t==n)
  c++;
  if(c==1)
  break;
  printf("%d ",n );

}
}
