#include<stdio.h>
int main()
{
    int i;
    printf("The first 10 odd natural number are:\n");
    for(i=1;i<=10;i++)
        printf("%d\n",2*i-1);
    return 0;
}
