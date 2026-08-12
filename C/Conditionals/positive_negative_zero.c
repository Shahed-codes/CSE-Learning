#include <stdio.h>
int main()
{
double number;
printf("Please enter a number:\n");
scanf("%lf",&number);

if (number>0) 
{
    printf("The number is Positive.\n");
}
else if (number<0)
{
    printf("The number is Negative.\n");
}
else if (number==0) 
{
    printf("The number is Zero.\n");
}
return 0;
}