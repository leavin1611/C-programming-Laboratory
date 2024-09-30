#include<stdio.h>
int main()
{int n;
printf("Enter a Number");
scanf("%d",&n);
if(n==2 || n==3)
{
    printf("\nIt is a prime number");
}
else if(n==0||n==1||n%2==0 || n%3==0||n%5==0)
{
    printf("\nIt is Not a Prime Number");
}

else
{
    printf("it Is a prime Number");
}

return 0;
}