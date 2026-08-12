#include <stdio.h>
int main()
{
    int a;
    printf("Please enter a number:\n");
    scanf("%d",&a);
    int d=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if( d==10){d=0;}
            printf("%d ",d);
            d++;
        }
        printf("\n");
    }
    return 0;
}