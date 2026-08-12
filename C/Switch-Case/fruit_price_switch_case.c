#include <stdio.h>
#include <math.h>
int main()
{
    char item;
    printf("Please enter the first letter of your desired product\nm=Mango\na=Apple\nb=Berry\nc=Cherry\n");
        scanf("%c",&item);
        
        switch(item)
        {
            case 'm':printf("Price:500\n");
            break;

            case 'a':printf("Price:250\n");
            break;

            case 'b':printf("Price:130\n");
            break;

            case 'c':printf("Price:270\n");
            break;

            default:printf("Please enter a valid character\n");
            break;
            

        }
        return 0;
}