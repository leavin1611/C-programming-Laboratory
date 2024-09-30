#include<stdio.h>
void pat(int n);
int main()
{
    int n;
    scanf("%d",&n);
    pat(n);
    return 0;
}
void pat(int n)
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
}


