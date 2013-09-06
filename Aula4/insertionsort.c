#include <stdio.h>

void troca(int v[], int i, int j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}

void insertion_sort(int v[], int n){
	int i, b, valor;
	for(i = 1; i < n-1; i++){
		valor = v[i];
		b = i;
		while(b > 0 && v[b-1] > valor){
			v[b] = v[b-1];
			b--;
		}
		v[b] = valor;
	}
}

int main(){
        int i;
        int v[] = {2, 9, 7, 4, 1, 10, 1, 2, 4, 8};
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        insertion_sort(v, 10);
        printf("Após o sorteio: \n");
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        return 0;
}
