#include <stdio.h>


int main()
{ 
	int loo,c,num,no,sace;
	printf("enter the no: of lines : ");
    scanf("%d",&no);
    sace=no;
    printf("\n");
    
	for(loo=1;loo<=no;loo++)
	{
		num=loo;
		for(c=1;c<=sace;c++)
			{
				printf(" ");
			}
	 sace--;
		
	 for(c=1;c<=loo;c++)
	 {
		 printf("%d",num);
		 num++;
	 }
	 num--;
	 num--;
		
	 for(c=1;c<loo;c++)
	 {
		 printf("%d",num);
		 num--;
	 }
		
	 printf("\n");
	}
		 printf("\n");

 return 0;
	
}