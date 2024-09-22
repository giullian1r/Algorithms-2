/*1. Escreva um algoritmo recursivo para resolver o problema de calcular
o fatorial1 de um inteiro n dado, isto e, uma solucao para o seguinte
problema computacional:*/

#include<stdio.h>

int fat(int n){
	if(n == 0){
		return 1;
	}
	return n * fat(n - 1);
}

int main(){
	int n;
	printf("testar fatorial de: ");
	scanf("%d", &n);
	printf("o fatorial de %d é %d ",n,fat(n));	

}
