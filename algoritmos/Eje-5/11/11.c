#include <stdio.h>
#include <string.h>

const int N = 5;

void carga(int t[N]){
  int dia;
  for (int i = 0; i < N; i++) {
    printf("Ingrese el dia a cargar\n");
    scanf("%d", &dia);
    printf("Ingrese la temperatura correspondiente\n");
    scanf("%d", &t[dia-1]);
  }
}

void impar(int t[N]){
  printf("------IMPARES------\n");
  for (int i = 0; i < N; i++) {
     if (i%2==0) {
       printf("La temperatura del dia %d fue de %dC\n",i+1, t[i]);
    }
  } 
  // printf("-------------------\n");
}
float minTemp(int t[N]){
  float min = 99;
  for (int i = 0; i < N; i++) {
    if (t[i] < min) {
      min = t[i];
    }
  }
  return(min);
}
float maxTemp(int t[N]){
  float max = -99;
  for (int i = 0; i < N; i++) {
    if (t[i] < max) {
      max = t[i];
    }
  }
  return(max);
}
void mostrar(int t[N]){
  int diaMin,diaMax;
  printf("------MIN-MAX------\n");
  for(int i = 0; i < N-1; i++){
    if(minTemp(t[N])== t[i]){
      printf("El dia con menor temperatura fue el dia %d\n", i+1);
    }
    if(maxTemp(t[N])== t[i]){
      printf("El/los dia/s con mayor temperatura fueron el/los dia/s %d\n", i+1);
    }
  }
  printf("-------------------\n");
}


void intercambio(int t[N]){
  int dia1, dia2, valorDia;
  printf("Ingrese una fecha a intercabiar\n");
  scanf("%d", &dia1);
  printf("Ingrese una segunda fecha a intercabiar\n");
  scanf("%d", &dia2);
  valorDia=t[dia2-1];
  t[dia2-1]=t[dia1-1];
  t[dia1-1] = valorDia;
  printf("----INTERCAMBIO----\n");
  for (int i = 0; i < N; i++){
    printf("%d: %dC\n", i+1, t[i]);
  }
  printf("-------------------\n");
  
}

int main (){
  int temperatura[N];
    carga(temperatura);
    impar(temperatura);
    mostrar(temperatura);
    intercambio(temperatura);
  return 0;
}