Algoritmo dolares

/*---Subprograma---*/
real valorcomision(real ximporte)
Comienzo
	retorna(ximporte * 1.05)
Fin

/*---Subprograma---*/
void importefinal(real xcompra, real xventa)
Comienzo
	real total, comision
	total = xcompra * xventa
	comision = 0
	Si (xcompra > 5000)
		entonces comision = valorcomision(total)
	FinSi
	Escribir "Se compraron", xcompra,"dolares"
	Escribir "A un valor de", xventa, "por dolar"
	Escribir "El valor de la comisión administrativa es de:", comision
	Escribir "El monto total a abonar es de", total + comision
Fin
		
/*---Algoritmo Principal---*/
Comienzo
	real compra, venta
	Escribir "Indique la cantidad de dolares que desea comprar"
	Leer compra
	Escribir "Indique el valor de venta del dolar"
	Leer venta
	importefinal(compra, venta)
Fin