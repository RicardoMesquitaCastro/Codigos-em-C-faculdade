#include <stdio.h>
#include <math.h>
#include <iostream>
#include <math.h>

int main(int argc, char** argv)

{
	float peso,alt,imc;
	
	printf("Digite o peso: ");
		scanf("%f",&peso);
	
	printf("Digite a altura: ");
		scanf("%f",&alt);
	
	imc=peso/(alt*alt);
	
	printf("O IMC e:%.2f ",imc);
	
	system("pause");
	return 0;		
	
	
	
}

