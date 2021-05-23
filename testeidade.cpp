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


 printf ("Minha idade é = %d\n""Mãe idade é = %d\n""Pai Idade é = %d\n""Idade irmão é = %d\n"
 ,minhaidade, maeidade, paiidade,irmaoidade);
 
 printf ("Idade total é = %i\n",idadetotal);



return 0;

}

