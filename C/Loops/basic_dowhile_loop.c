#include<stdio.h>
int main()
{
    int i;
    printf("Please enter an integer:\n");
    scanf("%d",&i);
    do{
        printf("%d\n",i);
        i--;
    }
    while(i>0);
}