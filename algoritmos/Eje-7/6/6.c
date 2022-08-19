#include <stdio.h>
const int N = 3;
const int C = 2;
struct empresa
{
  int empresas;
  int empleados;
};

void inicializa(struct empresa l[C]){
  for (int i = 0; i < C; i++)
  {
    l[i].empresas = 0;
    l[i].empleados = 0;
  }
}

void carga(struct empresa l[C]){
  int loc, cant;
  for (int i = 0; i < N; i++){
    printf("ingrese la localidad de la empresa \n");
    scanf("%d", &loc);
    printf("ingrese la cantidad de empleados \n");
    scanf("%d", &cant);
    l[loc-1].empresas = l[loc-1].empresas + 1;
    l[loc-1].empleados = l[loc-1].empleados + cant;
  }
}

void mostrar(struct empresa l[C]){
  for (int i = 0; i < C; i++)
  {
    printf("La localidad %d tiene %d empresas \n", i + 1, l[i].empresas);
    printf("Y tiene un promedio de %d empleados \n", l[i].empleados / l[i].empresas);
  }
}

int main(){
  struct empresa localidad[C];
  inicializa(localidad);
  carga(localidad);
  mostrar(localidad);
}