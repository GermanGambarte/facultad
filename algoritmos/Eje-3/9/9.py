def calc_incremento(recarga):
  importe = 0
  if recarga >= 500 and recarga < 700: return recarga * .2
  if recarga >= 700 and recarga < 900: return recarga * .5
  if recarga >= 900: return recarga * 1
  return importe

def info_recarga(nro,recarga):
  incremento = calc_incremento(recarga)
  print(f"Se realizó una recarga de ${recarga} al número {nro}")
  print(f"El total a pagar es ${recarga + incremento}")

nro = input("Ingrese el número de celular que desea recargar")
recarga = int(input("Ingrese el monto de la recarga"))
info_recarga(nro,recarga)
