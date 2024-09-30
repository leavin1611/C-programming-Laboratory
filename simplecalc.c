#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    scanf("%d%d",&a,&b);
    scanf(" %c",&ch);
    
    switch(ch)
    {
        case '+':
        c=a+b;
        break;
        
        case '-':
        c=a-b;
        break;
        
        case '/':
        c=a/b;
        break;
        
        case '*':
        c=a*b;
        break;
        
        case '%':
        c=a%b;
        break;
    }
    printf("%d",c);
    
}

