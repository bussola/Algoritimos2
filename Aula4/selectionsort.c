#include <stdio.h>

void troca(int v[], int i, int j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}


void selection_sort(int v[], int n){
        int i, min, j;
        for(i = 0; i < n-1; i++){
                min = i;
                for(j = i + 1; j < n; j++){
                        if(v[min] > v[j]){
                                min = j;
                        }
                }
		troca(v, min, i);
        }
}

int main(){
        int i;
        int v[] = {2, 9, 7, 4, 1, 10, 1, 2, 4, 8};
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        selection_sort(v, 10);
        printf("Após o sorteio: \n");
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        return 0;
}

