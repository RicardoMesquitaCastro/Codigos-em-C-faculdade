#include <stdio.h>                
#include<stdlib.h>       //  BIBLIOTECAS  DE COMANDO
#include <math.h>
#include <locale.h>  
                                

int main()  // ONDE É ARMAZENADO O MEU PROGRAMA
{
	
	float cap,taxa,acumulado,montante,meses;   // COMO IREI USAR NÚMEROS COM VIRGULA O TIPO SERA FLOAT E APÓS DECLAREI AS VARIÁVEIS;
	setlocale(LC_ALL,"Portuguese_brazil");    //  DEFINIR O IDIOMA DO PROGRAMA COMO PORTUGUÊS, ACEITANDO PONTUAÇÕES DE PALAVRAS EM PRINTF;
	
	
	printf("Insira o capital: ");   // COMANDO ENTRADA DE DADOS, MENSAGEM USUARIO;
		scanf("%f",&cap);               // COMANDO DE ARMAZENAMENTO DE DADOS ;
	printf("Insira a taxa de juros: ");
		scanf("%f",&taxa);
	printf("Insira o número de meses: ");
		scanf("%f",&meses);
	
	acumulado = (1+taxa/100), montante = pow(acumulado,meses)*cap;  // A PARTIR DAS PRIORIDADES DE OPERAÇÕES ( ^ ,*,/,+,-), FOI REALIZADO ESTA FORMULA
//	acumulado = cap* pow(1+taxa/100,meses);
	
	printf("O Montante será de: %.2f ",montante); // COMANDO DE SAIDA, MOSTRARÁ A RESPOSTA AO USUARIO.
	
	system("pause");
	return 0;		
	
	
}

