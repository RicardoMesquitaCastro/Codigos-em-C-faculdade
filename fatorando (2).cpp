#include <stdio.h>
#include<locale.h>

int main ()
{
		
  int fatorial = 5;
  
  int resposta =1;
	setlocale(LC_ALL,"portuguese_brazil");
	for ( ;fatorial >= 1; --fatorial){
		resposta *= fatorial;
	}
	
	printf ("O fatorial é' %i\n", resposta);

	
	
	
	
	
	
	return 0;
}
