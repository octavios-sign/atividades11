#include <stdio.h>
//switch-case e do while
int main(){
	int op;
	
	do{
	
	printf("MENU\n");
	printf("1 op1\n");
	printf("2 op2\n");
	printf("3 sair\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("op1 Seja bem vindo");
			break;
		case 2:
			printf("op1 Seja bem vindo");
			break;
		case 3:
			printf("op1 Seja bem vindo");
			break;
		default:
			printf("invalido");
	} 
} while(op!=3);
	
}
