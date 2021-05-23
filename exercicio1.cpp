#include <stdio.h>
#include<locale.h>
int main (void)
{
	
int num1, num2;

setlocale(LC_ALL,"Portuguese_Brazil");
	printf("Digite dois números inteiros\n");
	scanf("%i %i", &num1 , &num2);
	
	if (num2 ==0)
		printf("divisão por 0 não permitido.\n");
	else{
		if(num1 % num2 ==0)
			printf("%i e divisivel por %i.\n", num1,num2);
		else
			printf("%i não e divisivel por %i.\n", num1,num2);
			
						
	}		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

