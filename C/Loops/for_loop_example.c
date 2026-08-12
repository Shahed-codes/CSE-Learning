#include<stdio.h>
int main()
{
    int i;
    printf("Please enter an integer:\n"); 
    scanf("%d",&i);
    for(;i!=0;)
    {
 printf("Please enter an integer:\n"); 
    scanf("%d",&i);
    }
      printf("You are out of the loop\n");
}