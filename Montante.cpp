#include <stdio.h>                
#include<stdlib.h>       //  BIBLIOTECAS  DE COMANDO
#include <math.h>
#include <locale.h>  
                                

int main()  // ONDE � ARMAZENADO O MEU PROGRAMA
{
	
	float cap,taxa,acumulado,montante,meses;   // COMO IREI USAR N�MEROS COM VIRGULA O TIPO SERA FLOAT E AP�S DECLAREI AS VARI�VEIS;
	setlocale(LC_ALL,"Portuguese_brazil");    //  DEFINIR O IDIOMA DO PROGRAMA COMO PORTUGU�S, ACEITANDO PONTUA��ES DE PALAVRAS EM PRINTF;
	
	
	printf("Insira o capital: ");   // COMANDO ENTRADA DE DADOS, MENSAGEM USUARIO;
		scanf("%f",&cap);               // COMANDO DE ARMAZENAMENTO DE DADOS ;
	printf("Insira a taxa de juros: ");
		scanf("%f",&taxa);
	printf("Insira o n�mero de meses: ");
		scanf("%f",&meses);
	
	acumulado = (1+taxa/100), montante = pow(acumulado,meses)*cap;  // A PARTIR DAS PRIORIDADES DE OPERA��ES ( ^ ,*,/,+,-), FOI REALIZADO ESTA FORMULA
//	acumulado = cap* pow(1+taxa/100,meses);
	
	printf("O Montante ser� de: %.2f ",montante); // COMANDO DE SAIDA, MOSTRAR� A RESPOSTA AO USUARIO.
	
	system("pause");
	return 0;		
	
	
}

