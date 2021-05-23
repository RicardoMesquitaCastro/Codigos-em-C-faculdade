#include<stdio.h>
#include<locale.h>
int main()
{
	char nome[40], sx;
	float alt, ps;
	setlocale(LC_ALL,"Portuguese");
	printf("\n\tDigite seu nome: ");
	gets (nome);//scanf ("%s",&nome);
	printf("\n\tDigite sua Altura: ");
	scanf("%f",&alt);
	printf("\n\tDigite seu Sexo: Digite F para Feminino ou M para Masculino - ");
	scanf("%s",&sx);
	if (sx == 'M'||sx == 'm')
	{
		ps = 72.7 * alt - 58;
		printf("Sexo Masculino o peso ideal é %.2f",ps);
	}
	else if (sx == 'F'||sx == 'f')
	{
		ps = 62.1 * alt - 44.7;
			printf("Sexo Feminino o peso ideal é %.2f",ps);
		}
	else
		printf("\n\tDados Inválidos. Tente Novamente!");
	
	
	
	return 0 ;
	
}
