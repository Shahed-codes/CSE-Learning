#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter a number:\n");
    scanf("%d",&a);
    printf("Please enter a second number:\n");
    scanf("%d",&b); 
     printf("Please enter a third number:\n");
    scanf("%d",&c); 
    if (a>=b && a>=c)
    {
        printf("The largest one is: %d\n",a);
    }
    else if (b>=a && b>=c)
    {
        printf("The largest one is: %d\n",b);
    }
     else if (c>=a && c>=b) 
    {
        printf("The largest one is: %d\n",c);
    }

    
    return 0;
}