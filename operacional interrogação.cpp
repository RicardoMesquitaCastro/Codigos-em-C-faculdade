#include <stdio.h>
#include <locale.h>

int main()
{
		setlocale(LC_ALL,"Portuguese_brazil");
	int num1=100;
	int num2=20;
	int resposta;
	
	num1<num2?printf("sim\n") : printf("não\n");
	
	num1<num2?resposta=10 : resposta= -10;
	
	printf("%i\n", resposta);
	
	return 0;
}
