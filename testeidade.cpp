#include <stdio.h>
#include <locale.h>

int main ()

{
setlocale(LC_ALL,"portuguese_brazil");
 int minhaidade = 20;
 
  int paiidade = 40;
  
  int maeidade = 45;
  
  int irmaoidade = 15;

 
 int idadetotal;  

    idadetotal = minhaidade+maeidade+paiidade+irmaoidade;


 printf ("Minha idade � = %d\n""M�e idade � = %d\n""Pai Idade � = %d\n""Idade irm�o � = %d\n"
 ,minhaidade, maeidade, paiidade,irmaoidade);
 
 printf ("Idade total � = %i\n",idadetotal);



return 0;

}

