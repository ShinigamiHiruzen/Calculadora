#include <stdio.h>
#include <stdlib.h>

/*copyright © 2022 todos os direitos reservados a Eduardo de Andrade do Bomfim Junior*/

//CALCULADORA EM C

//Cabecalhos
void cabecalho_adicao(){
	
	system("cls");
	printf("------------------------------------------------\n");
	printf("                    ADICAO\n");
	printf("------------------------------------------------\n");
}

void cabecalho_subtracao(){
	
	system("cls");
	printf("------------------------------------------------\n");
	printf("                     SUBTRACAO\n");
	printf("------------------------------------------------\n");
}

void cabecalho_multiplicacao(){
	
	system("cls");
	printf("------------------------------------------------\n");
	printf("                    Multiplicacao\n");
	printf("------------------------------------------------\n");
}

void cabecalho_divisao(){
	
	system("cls");
	printf("------------------------------------------------\n");
	printf("                    Divisao\n");
	printf("------------------------------------------------\n");
}

void cabecalho_segundograu(){
	
	system("cls");
	printf("------------------------------------------------\n");
	printf("             Equacao do Segundo Grau\n");
	printf("------------------------------------------------\n");
}

void cabecalho_raizquadrada(){
	
	system("cls");
	printf("------------------------------------------------\n");
	printf("                 Raiz Quadrada\n");
	printf("------------------------------------------------\n");
}

//Operacoes
void adicao(){
	
	float adicao1, adicao2, soma;
		
	cabecalho_adicao();
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &adicao1);
	printf("Digite o segundo valor: ");
	scanf("%f", &adicao2);
	
	soma = adicao1 + adicao2;
	
	printf("\nO valor da soma: %.2f\n", soma);
}

void subtracao(){
	
	float subtracao1, subtracao2, subtracao;
	
	cabecalho_subtracao();
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &subtracao1);
	printf("Digite o segundo valor: ");
	scanf("%f", &subtracao2);
	
	subtracao = subtracao1 - subtracao2;
	
	printf("\nO valor da subtracao: %.2f\n", subtracao);
}

void multiplicacao(){
	
	float multiplicacao1, multiplicacao2, multiplicacao;
	
	cabecalho_multiplicacao();
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &multiplicacao1);
	printf("Digite o segundo valor: ");
	scanf("%f", &multiplicacao2);
	
	multiplicacao = multiplicacao1 * multiplicacao2;
	
	printf("\nO valor da multiplicao: %.2f\n", multiplicacao);
}

void divisao(){
	
	float divisao1, divisao2, divisao;
	
	cabecalho_divisao();
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &divisao1);
	printf("Digite o segundo valor: ");
	scanf("%f", &divisao2);
	
	divisao = divisao1/divisao2;
	
	printf("\nO valor da divisao: %.2f\n", divisao);
}

void equacao_segundograu(){
	
	float a, b, c, delta, x1, x2;
	
	cabecalho_segundograu();
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	if(a!=0 && b!=0 && c!=0){
		
		printf("\nEh uma Equacao do Segundo Grau!\n");
		
		delta = ((-b * -b)-4*a*c);
		
		printf("Delta: %.2f\n", delta);
		if(delta>=0){
		
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		
		printf("O valor de x1: %.2f\n", x1);
		printf("O valor de x2: %.2f\n", x2);
		}else{
		printf("Delta eh negativo\n");
		}
	}else if(b == 0 || c ==0){
		
		printf("\nEquacao Incompleta\n");
	}else {
		
		printf("\nNao eh uma equacao do segundo grau\n");
	}
}

void raiz_quadrada(){
	
	float valor, raiz;
	
	cabecalho_raizquadrada();
	
	printf("Digite o valor que deseja calcular: ");
	scanf("%f", &valor);
	
	raiz = sqrt(valor);
	
	printf("A raiz quadrada: %f\n", raiz);
}

//Funcao principal
int main(){
	
	int opcao;
	
	do{
	system("cls");
	printf("------------------------------------------------\n");
	printf("    SEJA BEM-VINDO A CALCULADORA OPERACIONAL\n");
	printf("------------------------------------------------\n");
	printf("Selecione uma das opcoes abaixo: \n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Equacao Segundo Grau\n");
	printf("6 - Raiz Quadrada\n");
	printf("7 - Encerrar\n");
	printf("------------------------------------------------\n");
	printf("R: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		
		case 1: //Adicao
			
			adicao();
			system("pause");
			break;
			
		case 2: //Subtracao
			
			subtracao();
			system("pause");
			break;
			
		case 3: //Multiplicacao
			
			multiplicacao();
			system("pause");
			break;
			
		case 4: //Divisao
			
			divisao();
			system("pause");
			break;
			
		case 5: //Equacao do Segundo Grau
			
			equacao_segundograu();
			system("pause");
			break;
			
		case 6: //Raiz Quadrada
		
			raiz_quadrada();
			system("pause");
			break;
		
		case 7: //Encerrar
		
			printf("Encerrando...\n");
			sleep(1);
			break;
			
		default:
			
			printf("Opcao invalida!\n");
			system("pause");
	}
}while(opcao!=7);
	
	return 0;
}
