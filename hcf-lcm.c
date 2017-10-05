/*  hcf = 26 and 60
60-24=36  divide smaller no from higher number
36-24=12  divide smaller no from higher number
24-12=12
12-12=0  so the hcf is 12 (when both no becom equal) 

lcm=n1*n2/hcf

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1,n2,x,y,gcd,lcm;// gcd=hcf	
	printf("enter two integers\n");
	scanf("%d %d",&n1,&n2);
	x=n1;
	y=n2;
		
	// finding lcm
	while(n1!=n2)
	{
	  if(n1>n2)	
		{
				n1=n1-n2;
		}
			else
			{
					n2=n2-n1;
			}
	}
	printf("gcd or hcf is : %d \n",n1);
		
		// now finding the lcm
		gcd=n1;
		
		lcm=x*y/gcd;
			printf("lcm is : %d\n",lcm);

}