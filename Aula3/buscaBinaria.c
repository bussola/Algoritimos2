#include <stdio.h>

int buscaBinaria(int v[], int n, int q){
	int inicio, fim, meio;
	inicio = 0;
	fim = n-1;
	while(inicio <= fim){
		meio = (inicio + fim)/2;
		if(v[meio] == q) return meio;
		if(v[meio] < q){
			inicio = meio + 1;
		}
		else{
			fim = meio - 1;
		}
	}
	return -1;
}

int main(){
	int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int index =	buscaBinaria(v, 10, 6);
	printf("O indíce é : %d\n", index);
	return 0;
}
