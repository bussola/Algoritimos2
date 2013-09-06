#include <stdio.h>

fat(int x){
	if (x == 1)return 1;
	return x*fat(x-1);
}

int coeficienteBinomial(int n, int k){
	return (fat(n)/(fat(k)*(fat(n-k))));	
}

int main(){
	printf("%d", coeficienteBinomial(8, 4));
	return 0;
}
