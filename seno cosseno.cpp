#include  <stdio.h>    //biblioteca padrão
#include  <stdlib.h>  //ainda falaremos dela
#include  <math.h>   //biblioteca ideal para funções matemáticas
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
float num; 
printf("Digite um número float: ");
scanf("%f",&num);
printf("Seno de %.2f é %.2f\n", num, sin(num));
printf("Cosseno de %.2f é %.2f\n", num, cos(num));
printf("Tangente de %.2f é %.2f\n", num, tan(num));
printf("Log na base 2 de %.2f é %.2f\n", num, log(num));
printf("Log na base 10 de %.2f é %.2f\n", num, log10(num));
return 0;
}
