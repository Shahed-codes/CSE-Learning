#include<stdio.h>
int main()
{
    int i;
    do{
        printf("please enter an integer:\n");
        scanf("%d",&i);

    }while(i !=0);
    printf("You are out of the loop\n");
}