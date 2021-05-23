#include <stdio.h>
#include<locale.h>
int main ()
{


char conceito;
float nota;
int numero;

setlocale(LC_ALL,"Portuguese_Brazil");
printf("Informe o conceito aluno: ");
	scanf("%c", &conceito);

printf("informe a nota do aluno: ");
	scanf("%f" ,&nota);
	
printf("Informe o número do aluno: ");
	scanf("%i" ,&numero);
	
printf("\n Conceito: %c\n ",conceito);
printf("Nota: %.1f\n ", nota);
printf("Número do aluno: %i\n ",numero); // formatando %.1f que significa impressAo com numero de casas decimais			











return 0;
}
