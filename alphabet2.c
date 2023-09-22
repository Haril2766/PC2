#include<stdio.h>
//Check whether character is an alphabet or not using conditional operator.

void main(){
	char ch;
	printf("Enter a Ch. : ");
	scanf("%c",&ch);
	
	  ch>='a'&&ch<='z'?printf("Alphabet"):printf("Not Alphabet");
	  ch>='A'&&ch<='Z'?printf("Alphabet"):printf("Not Alphabet");
}
