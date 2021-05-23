#include <stdio.h>
#include<locale.h>

int main ()
{
		
 int idade;
 
 setlocale(LC_ALL,"portuguese_brazil");
 printf ("Favor informar idade:\n");
 
 scanf("%i", &idade);
 
 if(idade <18){
 	printf("Bebidas alcóolicas não estão liberadas.\n");
 	
 } else {
 	printf ("Bedidas alcóolicas estão liberadas.\n");
 }
	
	
	return 0;
}
