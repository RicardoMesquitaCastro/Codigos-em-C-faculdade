#include <stdio.h>
#include<locale.h>
int main (void)
{
	
int num1, num2;

setlocale(LC_ALL,"Portuguese_Brazil");
	printf("Digite dois n�meros inteiros\n");
	scanf("%i %i", &num1 , &num2);
	
	if (num2 ==0)
		printf("divis�o por 0 n�o permitido.\n");
	else{
		if(num1 % num2 ==0)
			printf("%i e divisivel por %i.\n", num1,num2);
		else
			printf("%i n�o e divisivel por %i.\n", num1,num2);
			
						
	}		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

