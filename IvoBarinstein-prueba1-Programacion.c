/*
 ============================================================================
 Name        : IvoBarinstein-prueba1-Programacion.c
 Author      : Ivo Barinstein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int aplicarAumento(float precioProducto, float* aumentoPrecio);
int main(void)
{
	  setbuf (stdout, NULL);
	  float precio = 320.3;
	  float aumento;
	  aplicarAumento(precio, &aumento);
	  printf("%.2f", aumento);
	  return EXIT_SUCCESS;
}

int aplicarAumento(float precioProducto, float* aumentoPrecio)
{
	int aumento;
	if (precioProducto > 0)
	{
		aumento = (float) precioProducto + (precioProducto * 5 / 100);
	}
	*aumentoPrecio = aumento;
	return aumento;
}

