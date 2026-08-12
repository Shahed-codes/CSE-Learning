#include <stdio.h>
void array(int size,int a[])
{

for(int i=0; i<size ; i++)
    {
        if(i==0){printf("Input: \n");}
        scanf("%d",&a[i]);
    }
    for (int i=size-1; i>=0 ; i--){
     if(i==size-1){printf("Output: \n");}   
    printf("%d\n",a[i]);
    }
}
int main()
{
    int a[]={2,4,6,8,10};
    printf("%d\n",a[3]);
    int n;
    
    printf("Please enter the value of n: \n");
    scanf("%d",&n);
    int b[n];
    for(int i=0; i<n ; i++)
    {
        if(i==0){printf("Input: \n");}
        scanf("%d",&b[i]);
    }
    for (int i=n-1; i>=0 ; i--){
     if(i==n-1){printf("Output: \n");}   
    printf("%d\n",b[i]);
    }
    int size2;
     printf("Please enter the value of size2: \n");
    scanf("%d",&size2);
    int c[size2];
    array(size2,c);
    
    return 0;
}