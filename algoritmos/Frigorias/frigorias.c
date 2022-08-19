#include<stdio.h>

// Subprograma Volumen //
float volumen(float an, float la, float al){
    float xtotal;
    xtotal = an*la*al;
    return(xtotal);
}

// Subprograma Frigorias //
int frigorias(float xtotal) {
    int xfrigorias;
    xfrigorias = xtotal*50; 
    return(xfrigorias);
}

// Algoritmo Principal //
int main() {
    float ancho,largo,alto,total;
    printf("Ingrese el ancho de la habitacion \n");
    scanf("%f", &ancho);
    printf("Ingrese el largo de la habitacion \n");
    scanf("%f", &largo);
    printf("Ingrese el alto de la habitacion \n");
    scanf("%f", &alto);
    total = volumen(ancho,largo,alto);
    printf("Para una habitacion de: %f m3 se necesita un aire acondicionado de %d frigorias \n",total,frigorias(total));
}
