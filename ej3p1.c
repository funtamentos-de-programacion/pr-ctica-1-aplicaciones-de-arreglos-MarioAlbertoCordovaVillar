#include <stdio.h>

int main() {
	//(a) inicializar matriz
	int mat[2][3]={{1,2,3},{1,2,3},};
	int i,j;
	//For anidados donde se muestran las dirreciones de memoria
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("La direccion de memoria de la pocision [%i][%i] con valor %i es:%x\n",i,j,mat[i][j],&mat[i][j]);
		}
	}
	//Aumenta de 4 en 4 bytes
	return 0;
}
