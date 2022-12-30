#include <stdio.h>
void main()
{
  int i,num,rev=0,a;
  printf("enter the no.");
  scanf("%d",&num);
  while (num>0) {
    /* code */
   a=num%10;
   num=num/10;
   rev= rev*10+ a;
  }
  printf("the reverse of no. is %d\n",rev);
  if(rev==num)
  printf("pallindrome\n" );
  else
  printf("not\n" );

}
