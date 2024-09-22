/* 4. Considere o problema de calcular o fatorial descendente. */

#include<stdio.h>

int fatorialD(int n, int k){
	if(k == 0){
		return 1;
	}

	return n * fatorialD(n -1, k -1);
}

int main(){
	int res = fatorialD(5,3);
	printf("%d ", res);
}
