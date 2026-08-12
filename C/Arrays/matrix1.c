#include<stdio.h>
int main()
{
    int A[3][5],n;
    int i,j;
    printf("Enter the elements: \n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter n: \n");
    scanf("%d",&n);
    printf ("resultant matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d\t",n*A[i][j]);
        }
        printf("\n");
    }
   return 0;
}