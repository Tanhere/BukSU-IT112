
#include <stdio.h>

 main()
{
   int i,j,l,rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   l=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=l;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("%d ",t++);
	printf("\n");
    l--;
   }
  return 0;
}

