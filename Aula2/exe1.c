#include <stdio.h>

int pot(int x, int y){
	if(y == 0) return 1;
	else return x*pot(x, y-1);
}

int main(){
	int x, y, result;
	printf("Digite a base o expoente:");
	scanf("%d%d", &x, &y);
	result = pot(x, y);
	printf("%d\n", result);
	return 0;
}
