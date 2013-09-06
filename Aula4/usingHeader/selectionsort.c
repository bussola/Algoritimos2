#include <stdio.h>
#include "func.h"

 main(){
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

