
#include <stdio.h>

int main() {
int a,b,temp;
printf("Enter Two Numbers:");
scanf("%d%d",&a,&b);
printf("Before swap a=%d,b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swap a=%d,b=%d",a,b);


    return 0;
}