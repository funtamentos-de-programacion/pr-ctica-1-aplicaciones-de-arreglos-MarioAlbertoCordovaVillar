#include <stdio.h>

int main() {
    /*(a) Define un arreglo de 5 enteros y asigna valores iniciales.
    (b) Recorre el arreglo con un for e imprime la direccion de cada elemento.
    (c) Analiza si las direcciones son consecutivas y determina la diferencia entre ellas.*/

    int i;
    //(a)Definimos un arreglo de 5 enteros 
    int arr[5] = {1, 2, 3, 4, 5}; 
    int *ptr;
    ptr = arr;
    //(b) recorremos el arreglo e imprimimos las dirreciones de memoria
	for(i=0;i<5;i++){
		printf("La direccion de memoria de la posicion (%d) es:%x\n",i,(ptr+i));
	}

	return 0;
}
