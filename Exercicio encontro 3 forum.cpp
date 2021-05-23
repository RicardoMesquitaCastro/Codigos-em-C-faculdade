#include <stdio.h>
#include <locale.h>
int main (){
	
	float preco,desconto,npreco;
	setlocale(LC_ALL,"Portuguese_brazil");
	
	printf("\nDigite o Preço do produto- ");
		scanf("%f", &preco);
	
	printf("\nDigite o desconto a ser oferecido- ");
		scanf("%f", &desconto);
	
	npreco = preco*(1-desconto/100);
	
	printf("\n\tPreço do produto =R$%.2f",preco);
	printf("\n\tCom desconto = R$%.2f",npreco);
	
	return 0;		
}
