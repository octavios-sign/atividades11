#include <stdio.h>

int main(){
	int contador = 0;
	float soma = 0;
	float num;
	float amp;
	
	printf("qtd: ");
	scanf("%f", &amp);
	
	while (contador < amp){
		
		
		printf("numero: ");
		scanf("%f", &num);
		contador ++;
		soma+= num;
		(soma = soma / amp);
	}
		printf("Resultado: %f\n", soma);
	
	
		
}
