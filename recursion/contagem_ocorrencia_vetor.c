/* 2. Proponha um algoritmo recursivo para contar o numero de ocorrencias
de um valor dado em um vetor, isto e, uma solucao para o seguinte
problema computacional: */

#include<stdio.h>

int cov(int v[], int a, int b, int x){
	int c = 0;
	if(a == b){
		return c; 
	}
	c = cov(v,a + 1,b,x);
	if(v[a] == x){
		c = c + 1;	
	}
	return c;
}

int main(){
	int v[9] = {1,2,3,2,1,1,2,2,2};
	int resposta = cov(v,0,9,2);
	printf("o numero 2 aparece : %d vezes", resposta);
}
