#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],row,col;
    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
        scanf("%d",&a[row][col]);
        }
    }


        for (row=0;row<3;row++)
        {
            for(col=0;col<3;col++){
                b[row][col]=a[col][row];
            }
        }
    printf("\nOriginal matrix:\n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
       printf("%d ",a[row][col]);
        }
    printf("\n");
}

printf("\nTranspose matrix:\n");
 for(row=0;row<3;row++){
        for(col=0;col<3;col++){
       printf("%d ",b[row][col]);
        }
    printf("\n");
}
return 0;
}