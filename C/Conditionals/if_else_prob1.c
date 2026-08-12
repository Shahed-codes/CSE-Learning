#include<stdio.h>

#include<math.h>
int main()
{
    int pas_weight,max_weight_limit;
    max_weight_limit=800;
    printf("Please enter total weight of passengers:\n");
    scanf("%d",&pas_weight);
    if(pas_weight<=max_weight_limit)
    {
        printf("Elevator is safe.Moving up.\n");
    }
    else if(pas_weight>max_weight_limit)printf("Danger!Elevator overloade.Please step out.\n");
    return 0;
}