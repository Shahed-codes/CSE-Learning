#include <stdio.h>
int main()
{
    int a,b;
    printf("Please enter a number:\n");
    scanf("%d",&a);
    printf("Please enter another number:\n");
    scanf("%d",&b); 
    if (a>b)
    {
        printf("The larger one is: %d\n",a);
    }
    else if (b>a) 
    {
        printf("The larger one is: %d\n",b);
    }
    else printf("Both are equal.\n");
    return 0;
}