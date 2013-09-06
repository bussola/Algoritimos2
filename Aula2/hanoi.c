#include <stdio.h>
#include <time.h>

void hanoi(int n,char origem,char destino,char auxiliar){
	if(n==1){ 
		printf("\nMova o disco 1 da base %c para a base %c",origem ,destino);
		return;
	}
	/*Mover o n-1 disco de A para B, usando C de auxiliar*/
	hanoi(n-1,origem,auxiliar,destino);
	/* Mover os discos restantes de A para C*/
	printf("\nMova o disco %d da base %c para a base %c",n,origem,destino);
	/*Mover os n-1 discos de B para C usando A como auxiliar*/
	hanoi(n-1,auxiliar,destino,origem);
}

main(){
	clock_t inicio, fim;

	int n;
	float deltaT;
	printf("Digite o numero de discos : ");
	scanf("%d",&n);
	printf("Para resolver a torre de Hanois faça :\n\n");
	inicio = clock();
	hanoi(n,'A','C','B');
	fim = clock();
	deltaT = fim - inicio;
	
	printf("\nDemorou %f sherols\n", deltaT);
	return 0;
}
