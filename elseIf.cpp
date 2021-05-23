#include <stdio.h>
#include<locale.h>

int main ()
{
		
 int idade;
 setlocale(LC_ALL,"Portuguese_Brazil");
 
 printf("Informar idade:\n");
 scanf("%i",&idade);
 
 	if(idade <=5)
 		printf("bebê\n");
 	else if (idade > 5 && idade <=10)
	 	printf("criança\n");
	else if (idade >10 && idade <=18)
		printf("adolescente\n");
	else if (idade >18 && idade <=50)
		printf("Adulto\n");
	//{else if (idade >50)  dessa forma
		//printf("Idoso\n");	dessa forma ou}
		
	else
					 	
 		printf("idoso\n");
 
	
	
	return 0;
}
