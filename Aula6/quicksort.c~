#include <stdio.h>

void troca(int v[], int i, int j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}

int particiona(int v[], int inicio, int fim, int pivo){
	int div, i;
	troca(v, pivo, fim);
	div = inicio;
	for(i = inicio; i < fim; i++){
		if (v[i] < v[fim]){
			troca(v, div, i);
			div++;		
		}
	}
	troca(v, div, fim);
	return div;
}

void quicksort_r(int v[], int inicio, int fim){
	int pivo, div;
	if(inicio >= fim) return;
	pivo = inicio;
	div = particiona(v, inicio, fim, pivo);
	quicksort_r(v, inicio, div-1);
	quicksort_r(v, div+1, fim);
}

void quicksort(int v[], int n){
	quicksort_r(v, 0, n-1);
}

int main(){
	int i;
        int v[] = {2, 9, 7, 4, 1, 10, 1, 2, 4, 8};
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        quicksort(v, 10);
        printf("Após o sorteio: \n");
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        return 0;
}
