/* 3. Considere problema computacional de reverter um vetor. */

#include<stdio.h>

void troca(int v[], int a, int b){
	int aux;
	aux = v[a];
	v[a] = v[b];
	v[b] = aux;
}

void rev(int v[], int a, int b){
	if(a == b){
		return;
	}
	troca(v,a,b);
	rev(v,a + 1, b - 1);
	return;
}

int main(){
	int v[9] = {1,2,3,4,5,6,7,8,9};
	rev(v,0,8);

	for(int i = 0; i < 9; i++){
		printf("%d ", v[i]);
	}
}
