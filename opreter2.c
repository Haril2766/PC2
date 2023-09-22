#include<stdio.h>
void main(){
	float a,b;
	char c;
	
	printf("Enter a choise(+,-,*,/) : ");
	scanf("%c",&c);
	
	printf("Enter a value : ");
	scanf("%f",&a);
	
	printf("Enter a value : ");
	scanf("%f",&b);
	

		switch(c)
		{
		case '+':
		printf("Answer is : %f",a+b);
		break;
		
		case '-':
		printf("Answer is : %f",a-b);
		break;
		
		case '*':
		printf("Answer is : %f",a*b);
		break;
		
		case '/':
		printf("Answer is : %f",a/b);
		break;
		
		default:
			printf("Enter a valid opartion");
		}
	}
