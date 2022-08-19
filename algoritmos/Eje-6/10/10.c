#include <stdio.h>

const int N = 5;

void carga(int t[N],int e[N]){
  for(int i = 0; i < N; i++){
    printf("Ingrese el edad del corredor %d\n", i + 1);
    scanf("%d", &e[i]);
    printf("Ingrese el tiempo de carrera del corredor %d\n", i + 1);
    scanf("%d", &t[i]);
  }
}

void promedio(int t[N],int e[N], int tdp[N]){
  int sum=0, prom;
  for(int i = 0; i < N; i++){
    sum = sum + e[i]; 
  }
  prom = sum / N;

  printf("----EDAD PROMEDIO----\n");
  printf("La edad promedio es: %d\n", prom);
  for(int i = 0; i < N; i++){
  if(e[i] > prom){
    tdp[i] = t[i];
    printf("El corredor %d supera la edad promedio\n",i+1);
  }else{
    tdp[i] = 0;
  }
  }
  printf("---------------------\n");
}

void mostrar(int tdp[N]){
  printf("----TIEMPO EDAD +50----\n");
  for(int i = 0; i < N; i++){
    if(tdp[i] != 0){
      printf("Corredor %d: %d minutos\n",i+1,tdp[i]);
    }
  }
  printf("-----------------------\n");
}

int main(){
  int tiempo[N], edad[N], tiempoDePromedio[N];
  carga(tiempo, edad);
  promedio(tiempo,edad, tiempoDePromedio);
  mostrar(tiempoDePromedio);
}
