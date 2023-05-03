#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	char op;
	
	do{
		printf("\nBem-vindo � Calculadora!\n");
		printf("\nOpera��es dispon�veis:\n");
		printf("'+' : Soma.\n");
		printf("'-' : Subtra��o.\n");
		printf("'*' : Multiplica��o.\n");
		printf("'/' : Divis�o.\n");
		
		printf("\nDigite a express�o na seguinte forma: primeiro valor, operador, segundo valor.\n");
		printf("\nPara sair, digite: 0 0 0.\n");
		
		scanf("%f", &a);
		scanf(" %c", &op);
		scanf("%f", &b);
		
		system("cls");
		
		printf("\nCalculando: %.2f %c %.2f = ", a, op, b);
		
		switch(op){
			
			case '+':
				printf("%.2f\n", a + b);
				break;
				
			case '-':
				printf("%.2f\n", a - b);
				break;
			
			case '*':
				printf("%.2f\n", a * b);
				break;
				
			case '/':
				if(b != 0)
				printf("%.2f\n", a / b);
				else
				printf("N�o existe divis�o por 0!\n");
				break;
			
			case '%':
				printf("%d\n", (int)a % (int)b);
				break;
			
			default:
				if(a != 0 && op != '0' && b != 0)
				printf("Operador inv�lido!\n");
				else
				printf("Fechando calculadora.\n");	
		}
			
	} while(a != 0 && op != '0' && b != 0);
}
