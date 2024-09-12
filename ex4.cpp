//ex4

#include <stdio.h>

int main(){
	int contador = 0;
	int soma = 0;
	int num;
	
	int amp;
	
	printf("quantas somas: ");
	scanf("%d", &amp);
	
	while (contador < amp){
		printf("numero: ");
		scanf("%d", &num);
		contador ++;
		
//+= faz com que a varivael acumule o historico
		soma+= num;
		
	}
	
	printf("Resultado: %d\n", soma);
	
	return 0;
}
