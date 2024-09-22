#include<stdio.h>

int minimo(int v[], int a, int b){
	
	if(a == b){
		return a;
	}	
	int m = minimo(v,a,b - 1);
	if(v[b] <= v[m]){
		m = b;
	}
	return m;
}

int main(){
	int vec[8] = {4,6,9,2,5,8,7,9};
	int res = minimo(vec,0,7);
	printf("o menor valor é: %d", vec[res]);
}
