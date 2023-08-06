#include<stdio.h>
int main()
{
    int i;
    printf("The first 10 odd natural number in reverse order:\n");
    for(i=10;i>=1;i--)
        printf("%d\n",2*i-1);
    return 0;
}

