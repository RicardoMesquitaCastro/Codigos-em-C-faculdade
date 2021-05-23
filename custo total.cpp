#include <stdio.h>
#include <locale.h>

int main()
{
	float comp,larg,preco;
		setlocale(LC_ALL,"Portuguese_brazil");
	
	printf("Digite o comprimento da sala:");
		scanf("%f",&comp);
	printf("Digite a largura da sala:");
		scanf("%f",&larg);
	printf("Digite o preço do metro quadrado:");
		scanf("%f",&preco);	
	
	preco=(comp*larg)*preco;
	
	printf("O custo total sera de:%.2f",preco);
	
	return 0;		
	
	
	
}
