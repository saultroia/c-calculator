#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	char op;
	
	do{
		printf("\nBem-vindo à Calculadora!\n");
		printf("\nOperações disponíveis:\n");
		printf("'+' : Soma.\n");
		printf("'-' : Subtração.\n");
		printf("'*' : Multiplicação.\n");
		printf("'/' : Divisão.\n");
		
		printf("\nDigite a expressão na seguinte forma: primeiro valor, operador, segundo valor.\n");
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
				printf("Não existe divisão por 0!\n");
				break;
			
			case '%':
				printf("%d\n", (int)a % (int)b);
				break;
			
			default:
				if(a != 0 && op != '0' && b != 0)
				printf("Operador inválido!\n");
				else
				printf("Fechando calculadora.\n");	
		}
			
	} while(a != 0 && op != '0' && b != 0);
}
