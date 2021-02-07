#include<stdio.h>


int main()
{
    int num,count=1,sum=0;
    printf("Enter a number range:");
    scanf("%d",&num);
  
        while(count<=num)
        { 
            if(count%2==0)
            {
                printf("%d    \n",count);
            sum=sum+count;
            }
            
           count++;
        }
    
    printf("\n%d",sum);
    return 0;
}