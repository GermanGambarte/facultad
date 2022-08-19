#include<stdio.h>
void bancosFaltantes(int bancos, int alumnos)
{
  int faltantes = alumnos - bancos;
  if(faltantes == 1)
    printf("Falta 1 banco");
  else
  printf("Faltan %d bancos",faltantes);
  return;
}

int main()
{
  int bancos, alumnos;
  printf("Introduzca la cantidad de alumnos inscriptos: \n");
  scanf("%d", &alumnos);
  printf("Introduzca la cantidad de bancos en el aula: \n");
  scanf("%d", &bancos);
  if(bancos >= alumnos)
    printf("La cantidad de bancos disponibles es suficiente");
  else
    bancosFaltantes(bancos, alumnos);
}