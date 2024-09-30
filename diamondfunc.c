// Online C compiler to run C program online
#include <stdio.h>
void diamond(int n);
int main() {
    int n;
    scanf("%d",&n);
  diamond(n);
    return 0;
}
void diamond(int n)
{
     for(int i=0;i<n;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           printf(" ");
       }
       
       for(int j=0;j<2*i+1;j++)
       {
           printf("*");
       }
       for(int j=0;j<n-i-1;j++)
       {
           printf(" ");
       }printf("\n");
   }
   
   
   
   
   
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<i;j++)
       {
           printf(" ");
       }
       
       
       for(int j=0;j<(2*n)-(2*i+1);j++)
       {
           printf("*");
       }
       
       
       for(int j=0;j<i;j++)
       {
           printf(" ");
       }printf("\n");
   }
}
