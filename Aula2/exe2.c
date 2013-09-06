#include <stdio.h>

fat(int x){
	if (x == 1)return 1;
	return x*fat(x-1);
}

int main(){
	int x = fat(4);
	printf("%d", x);
	return 0;
}
