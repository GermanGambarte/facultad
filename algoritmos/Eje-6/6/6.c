#include<stdio.h>
#include<stdbool.h>

const int N=5;

void carga(int p[N]){
  for (int i = 0; i < N-1; i++){
    printf("Ingrese un numero positivo\n");
    scanf("%d",&p[i]);
  }
}

bool busqueda(int p[N], int v){
  int valor;
  for (int i = 0; i < N-1; i++){
    if (p[i]==v)
    {
      return true;
    }
  }
  return false;
}
bool ES_DIVISOR(int num1, int num2){
  if(num2 % num1 == 0){
    return true;
  }
  return false;
}

int CUENTA_DIVISORES(int num){
  int cont = 0;
  for (int i = 0; i < 4; i++)
  {
    if(ES_DIVISOR(i,num)){
      cont = cont + 1;
    }
  }
  return cont; 
}
void subarreglo(int p[N], int v){
  int s[N];
  for (int i = 0; i < N-1; i++)
  {
    
  }
  
}

int main(){
  int positivos[N], valor;
  bool existe;
  carga(positivos);
  printf("Ingrese el valor que desea buscar\n");
  scanf("%d", &valor);
  existe = busqueda(positivos, valor);
  if(existe){
    printf("El numero %d se encuentra en el arreglo\n", valor);
  }else
  {
    printf("El numero %d no se encuentra en el arreglo\n", valor);
  }
  subarreglo(positivos, valor);
}