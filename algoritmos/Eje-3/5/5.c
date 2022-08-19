#include<stdio.h>

float promedio(int xn1, int xn2, int xn3){
	return((xn1+xn2+xn3)/3);
}
int main() {
	int n1,n2,n3;
	float p;
	printf("ingrese nota del parcial 1\n");
	scanf("%d", &n1);
	printf("ingrese nota del parcial 2\n");
	scanf("%d", &n2);
	printf("ingrese nota del parcial 3\n");
	scanf("%d", &n3);
	p=promedio(n1,n2,n3);
	if(p < 4)
		printf("Debe recursar");
	else
		if(p <= 7)
			printf("Regularizo");
		else
			printf("Promociono");
}