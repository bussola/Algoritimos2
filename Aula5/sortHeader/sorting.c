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

void merge_sort(int v[], int n){
	merge_sort_rec(v, 0, n-1);
}

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

