//ex switch case

#include <stdio.h>

int main(){
	
	int op;
	int num1, num2, result;
	
	printf("Operacao: \n");
	printf("1 - adicao \n");
	printf("2 - subtracao \n");
	printf("escolha sua opcao (1 ou 2): \n");
	scanf("%d", &op);
	
	printf("Numero 1: ");
	scanf("%d", &num1);
	
	printf("Numero 2: ");
	scanf("%d", &num2);
	
	switch (op) {
		case 1:
			result = num1 + num2;
			printf("resultado: %d\n", result);
			break;	
		case 2:
			result = num1 - num2;
			printf("resultado: %d\n", result);
			break;
	}
		
			
	
	
	
	
	
	
	
	return 0;
}
