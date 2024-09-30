#include<stdio.h>
int main()
{
    int n,r,c,temp,sum=0;
    scanf("%d",&n);
   temp=n;
  while(n>0)
  {
      r=n%10;
      c=r*r*r;
      sum=c+sum;
     n=n/10;

  }
  if(sum==temp)
  {
      printf("%d is an Armstrong number.",temp);
  }
 else
 {
     printf("%d is not an Armstrong number.",temp);
 }

}

