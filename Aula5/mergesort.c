#include <stdio.h>

void merge(int v[], int inicio, int meio, int fim){
	int i, j, k, b[fim - inicio + 1];
	i = inicio;
	j = meio + 1;
	for(k = 0; k < fim - inicio + 1; k++){
		if(i > meio){
			b[k] = v[j];
			j++;		
		}
		else{
			if(j > fim){
				b[k] = v[i];
				i++;
			}
			else{
				if(v[i] < v[j]){
					b[k] = v[i];
					i++;
				}
				else{
					b[k] = v[j];
					j++; 
				}
			}		
		}
		
	}
	for(k = 0; k < fim - inicio + 1; k++){
		v[inicio + k] = b[k];
	}
}

void merge_sort_rec(int v[], int inicio, int fim){
	int meio;
	if(inicio==fim){
		return;	
	}
	meio = (inicio + fim)/2;
	merge_sort_rec(v, inicio, meio);
	merge_sort_rec(v, meio+1, fim);
	merge(v, inicio, meio, fim);
}

int main(){
	int i;
        int v[] = {2, 9, 7, 4, 1, 10, 1, 2, 4, 8};
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        merge_sort_rec(v, 0, 9);
        printf("Após a ordenação: \n");
        for(i = 0; i < 10; i++){
                printf("%d ", v[i]);
                if(i==9)printf("\n");
        }
        return 0;
}

