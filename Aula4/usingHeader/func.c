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
