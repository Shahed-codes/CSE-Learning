#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        int rem=n%10;
        printf("%d\n",rem);
        
    }
    return 0 ;
}