#include<stdio.h>

int main()
{
    int a,b,c;
    //printf("Enter 3 angles if it can form Triangle");
    printf("\nEnter an angle:");
    scanf("%d",&a);
    printf("\nEnter an angle:");
    scanf("%d",&b);
    printf("\nEnter an angle:");
    scanf("%d",&c);
    
    if(a+b+c==180)
    { printf("Valid!, Out of these angles you can make Triangle!");
    }
    else
         printf("Invalid, you can't form a Traingle with these angles!");
    
    return 0;
}