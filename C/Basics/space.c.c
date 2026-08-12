#include <stdio.h>
int main()
{
    int a;
    printf("Please enter a number:\n");
    scanf("%d",&a);
    int d=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++){
            
            printf("*");
           
        }
      printf("\n");
    }
    return 0;
}