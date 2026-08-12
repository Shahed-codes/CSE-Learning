#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        int r;
        r=n/1000;
        printf("1000 taka notes : %d \n",r);
        n=n%1000;
        r=n/500;
        printf("500 taka notes : %d \n",r);
        n=n%500;
        r=n/100;
        printf("100 taka notes : %d \n",r);
        n=n%100;
        r=n/50;
        printf("50 taka notes : %d \n",r);
        n=n%50;
        r=n/20;
        printf("20 taka notes : %d \n",r);
        n=n%20;
        r=n/10;
        printf("10 taka notes : %d \n",r);
        n=n%10;
        r=n/5;
        printf("5 taka notes : %d \n",r);
        n=n%5;
       
        printf("Amount left: %d \n",n);
        break;
    }
    return 0;
}
