
#include <stdio.h>
void pal(int n);
int main() {
    int n,r=0,temp;
    scanf("%d",&n);
   pal(n);
    return 0;
}
void pal(int n)
{
     int r=0,temp=n;
    while(n>0)
    {
        r=(n%10)+(r*10);
        n=n/10;
    }
    if(temp==r)
    printf("\nIt Is Palindrome");
    
    else
    printf("\nIt Is Not a Palindrome");
}
