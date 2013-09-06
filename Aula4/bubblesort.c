#include <stdio.h>

void troca(int v[], int i, int j){
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void bubble_sort(int v[], int n){
	int i, j;
	for(i = n-1; i > 0; i--){
		for(j = 1; j <=i; j++){
			if(v[j-1] > v[j]){
				troca(v, j-1, j);
			}
		}
	}
}

int main(){
	int i;
	int v[] = {2, 9, 7, 4, 1, 10, 1, 2, 4, 8};
	for(i = 0; i < 10; i++){
		printf("%d ", v[i]);
		if(i==9)printf("\n");
	}
	bubble_sort(v, 10);
	printf("Após o sorteio: \n");
	for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
	return 0;
}


