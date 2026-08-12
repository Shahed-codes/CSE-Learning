#include <stdio.h>
#include <math.h>
int main()
{
    char item;
    int amount;
    printf("Please enter the first letter of your desired product\nm=Mango\na=Apple\nb=Berry\nc=Cherry\n");
        scanf("%c",&item);
        printf("How many KGs do you want?\n");
        scanf("%d",&amount);
        switch(item)
        {
            case 'm':
            {
                printf("Price:500\n");
                int per_kg_mango=500;
                printf("Total price:%d\n",per_kg_mango*amount);
            }   
            break;

            case 'a':
            {
            printf("Price:250\n");   
            int per_kg_apple=250; 
            printf("Total price:%d\n",per_kg_apple*amount);
            }
            
            break;

            case 'b':
            {
            printf("Price:130\n");
            int per_kg_berry=130;
            printf("Total price:%d\n",per_kg_berry*amount);
            }
            break; 

            
            case 'c':
            {
            printf("Price:270\n");
            int per_kg_cherry=270;
            printf("Total price:%d\n",per_kg_cherry*amount);
            }    
            
            break;

            default:printf("Please enter a valid character\n");
           
            break;
            

        }
        return 0;
}