Completar para que el algoritmo resuelva el siguiente problema:

Se cuenta con las temperaturas máximas registradas durante cada día del mes de enero de 2019 en la ciudad de San
Juan.

1.  Mostrar la temperatura promedio mensual.
2.  Indicar la cantidad de días en el mes que no fueron inferiores a la temperatura promedio mensual.
3.  Mostrar el/los números de día cuya temperatura máxima varió entre dos valores ingresados por teclado, sin
    superar los 42°C.
4.  Una vez completado el algoritmo realizar el seguimiento, indicando pre y post condiciones.

```
Algoritmo Temperaturas_enero

.... carga (............)
Comienzo
  entero i
  Para i Desde 0 Hasta N-1
    Leer  .........
  FinPara
  retorna()
Fin

..... promedio (..........)
Comienzo
  entero i
  real s, prom s =.....
  Para i Desde 0 Hasta .........
    s=s + ......
  FinPara
  prom= s/N
  retorna (......)
Fin

...... cantidad (entero t[N]), entero xp)
Comienzo
  entero i, ct
  ct = ......
  Para i Desde 0 Hasta N-1
    Si (t*i+ ……xp)
      entonces ct = …+1
    Finsi
  FinPara
  Escribir “La cantidad.............son:”, ........
  retorna (......)
Fin

...... muestra (......)
comienzo
  entero i, temp1, temp2
  Para i Desde 0 Hasta N-1
    Leer temp1
    Leer temp2
    Si (temp2 > temp1) Y (temp2 <=42)
      entonces
        Si ((.... >temp1) Y (a[i] .... temp2))
          entonces
            Escribir “el día”,.....,“varió su temperatura entre”,  temp1, “°C y ”, temp2, “°C”
          sino Escribir “temperatura superior a 42°C”
        FinSi
    FinSi
  FinPara
  retorna ()
Fin

/*---Algoritmo principal--*/

Comienzo
  constante N=....
  entero temp *N+, .......
  carga (.....)
  p = promedio (.....)
  Escribir “el promedio mensual de temperaturas de enero de 2019 es “......
  cantidad (...., p)
  muestra(temp)
Fin
```

Para cada uno de los siguientes ejercicios construya un algoritmo que invoque un subprograma para resolver cada uno de los ítems pedidos,procurando en los casos que sea posible, que sus resultados se muestren en el Algoritmo Principal.
