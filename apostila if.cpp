#include <stdio.h>
#include <locale>

int main()
{
setlocale(LC_ALL,"portuguese_brazil");

float nt1, nt2, md; // declara��o das vari�veis nt1, nt2 e md do tipo real (float)
printf("\nNotas?\n"); 
scanf ("%f", &nt1); 
scanf ("%f", &nt2); 
md = (nt1 + nt2)/2; 
printf("\nM�dia = %.1f", md);

return 0;












}
