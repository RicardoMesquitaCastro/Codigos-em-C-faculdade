#include <stdio.h>
#include <locale.h>

int main()
{
	
float dp,cg,cm;
	setlocale(LC_ALL,"Portuguese_brazil");

	printf("Digite a distancia percorrida:\n ");
		scanf("%f",&dp);
	printf("Digite o combustivel gasto:\n ");
		scanf("%f",&cg);
	cm = dp/cg;
	printf("O consumo médio foi de:%.2f\n ",cm);
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
