#include<stdio.h>
void main(){
	int m;
	
	printf("Enter a Month : ");
	scanf("%d",&m);
if(m>=1 && m<=12){
	switch(m)
	{
		case 2:
			printf("28days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30days");
		
		default:
		printf("31days");
	}
}
else{
	printf("Enter a valid month");
}
}
