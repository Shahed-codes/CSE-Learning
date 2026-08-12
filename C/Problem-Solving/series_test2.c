#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        if (i%2==0){
           sum=sum-i;
        }
        else sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;

}