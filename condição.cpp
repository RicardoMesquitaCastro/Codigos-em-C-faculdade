#include <stdio.h>
#include<locale.h>

int main ()
{
		
 int idade;
 
 setlocale(LC_ALL,"portuguese_brazil");
 printf ("Favor informar idade:\n");
 
 scanf("%i", &idade);
 
 if(idade <18){
 	printf("Bebidas alc�olicas n�o est�o liberadas.\n");
 	
 } else {
 	printf ("Bedidas alc�olicas est�o liberadas.\n");
 }
	
	
	return 0;
}
