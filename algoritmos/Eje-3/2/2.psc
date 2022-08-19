Algoritmo bancosxalumnos
/*---Subprograma---*/
void bancosfaltantes(entero xbancos, entero xalumnos)
Comienzo
	entero faltantes
	faltantes = xalumnos - xbancos
	Escribir "Faltan", faltantes, "bancos"
	retorna()
Fin
	
/*---algoritmo principal---*/
 Comienzo
 	entero bancos, alumnos
 	Escribir "Introduzca la cantidad de alumnos incriptos"
 	Leer alumnos
 	Escribir "Introduzca la cantidad de bancos en el aulas"
 	Leer bancos
 	Si(bancos >= alumnos)
 		entonces Escribir "La cantidad de bancos disponibles es suficiente"
 		sino bancosfaltantes(bancos, alumnos)
 	FinSi
 Fin