#include <stdio.h>

//Estudar condição ternária

int buscaBinRec(int v[], int inicio, int fim, int q){
	int meio = (fim+inicio)/2;
	if(v[meio] == q) return meio;
	if(v[meio] > q)	return buscaBinRec(v, inicio, meio, q);
	else return buscaBinRec(v, meio, fim, q);
}

int main(){
	int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int index = buscaBinRec(v, 0, 9, 6);
	printf("O inice é %d\n", index);
}