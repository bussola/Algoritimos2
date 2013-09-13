#include <stdio.h>

void troca(int v[], int i, int j){
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void bubble_sort_rec(int v[], int n){
	int i;
	if(n == 1)return;
	else{
		for(i = 1;i <= n - 1; i++){
			if(v[i-1] > v[i]){
				troca(v, i-1, i);
			}
		}
		bubble_sort_rec(v, n-1);
	}
}

int main(){
	int i;
	int v[] = {2, 9, 7, 4, 1, 10, 1, 2, 4, 8};
	for(i = 0; i < 10; i++){
		printf("%d ", v[i]);
		if(i==9)printf("\n");
	}
	bubble_sort_rec(v, 10);
	printf("Após o sorteio: \n");
	for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
	return 0;
}


