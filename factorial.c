#include <stdio.h>
#include <stdlib.h>


/*
int main()
{
  int fact=1,num;
    printf("enter the number\n");
    scanf("%d",&num);

for(int i=1;i<=num;i++)
   fact *= i;

    printf("factorial of %d is %d\n",num,fact);

	return 0;
}
*/

  // using recursion

int fact(int);

int main()
{
    int num,ans;
    printf("enter the number\n");
    scanf("%d",&num);
    ans=fact(num);
    printf("factorial of %d is %d\n",num,ans);
    return 0;
}

int fact(int x)
{ int f;
if(x==0)
{
    return 1;
}
else
{
f=x*fact(x-1);
return f;
}
}
