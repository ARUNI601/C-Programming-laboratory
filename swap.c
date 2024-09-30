#include<stdio.h>
int main()
{
    int a=2,b=23;
    int c;
    c=a;
    a=b;
    b=c;
    printf("a= %d\nb=%d",a,b);
    return 0;
}
