#include <stdio.h>
int main()
{	double a,b;
	char c;
	printf("Please enter two number:");
	scanf("%lf %lf",&a,&b);
	printf("Enter an operator:");
	scanf(" %c",&c);
	switch(c){
		case'+':
			printf("Result:%0.2lf",a+b);
			break;
		case'-':
			printf("Result:%0.2lf",a-b);
			break;
		case'*':
			printf("Result:%0.2lf",a*b);
			break;
		case'/':
			if (b=!0)
			printf("Result:%0.2lf",a/b);
			else
			printf("Result:0");
			break;
			
		default:
	printf("Invlid operator");
		}	
		return 0;
		}
