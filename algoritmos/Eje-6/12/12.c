#include <stdio.h>
#include <stdbool.h>

const int N = 5;

 void carga(float g[N], float imp[N]){
   int cliente;
   for (int i = 0; i < N; i++)
   {
     printf("Ingrese el numero del cliente \n");
     scanf("%d", &cliente);
     printf("Ingrese el consumo de gas \n");
     scanf("%f", &g[i]);
     printf("Ingrese el importe a abonar \n");
     scanf("%f", &imp[i]);
   }
 }

void busqueda(float g[N], float imp[N]){
  float consumo;
  bool existe = false;
  int i = 0;
  printf("Ingrese el consumo a buscar \n");
  scanf("%d", &consumo);
  while(i < N && consumo != g[i]){
    if (imp[i] > 5000){
      existe = true;
    } else {
      i = i + 1;
    }
  }
  if(existe){
    printf("El monto a pagar es de $%f \n", imp[i]);
  } else {
    printf("No se encontro el consumo ingresado \n");
  }

}

void binaria( float imp[N]){
  int inf,sup,medio;
  inf = 0;
  sup = N -1;
  medio = (inf + sup) / 2;

  while(inf <= sup && 5000 <= imp[medio]){
    if(5000 < imp[medio]){
      sup = medio - 1;
    } else {
      inf = medio + 1;
    }
    medio = (inf + sup) / 2;
  }
  if(inf <= sup){
    printf("Al menos un cliente debe abonar mas de $5000 \n");
  } else {
    printf("Ningun cliente debe abonar mas de $5000 \n");
  }

}

int subCarga(float imp[N], int sc[N]){
  int j =0,sum = 0, prom, C;
  for (int i = 0; i < N; i++){
    sum = sum + imp[i];
  }
  prom = sum / N;
  for (int i = 0; i < N; i++)
  {
    if (imp[i] > prom)
    {
      sc[j] = i + 201;
      j = j + 1;
    }
  }
  return j;
}

void subMostrar(int sc[N], int c){
  for (int i = 0; i < c; i++)
  {
    printf("%d: %d", i, sc[i]);
  }
}

int main(){
  float gas[5];
  float importe[5];
  int cliente[N];
  int subCliente[N],C;
  carga(gas, importe);
  binaria(importe);
  busqueda(gas,importe);
  C = subCarga(importe, subCliente);
}
