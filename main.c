/* 
 * This program reads 10 int from user, then it print this numbers sorted
*/
#include <stdio.h>

#define N 10

int main(){
	int i,k,l,y=0;
	int aux =0;
	int array[N]={0};	
	//TODO: Read N numbers from user
	for (i=0; i<N; i++){
		scanf ("%d", &array[i]);
	}

	//TODO: Sort them 
	for (l=0; l<N-1; l++){
	for (y=0; y<N-1; y++){
	if (array[y]>array[y+1]){
		aux = array[y];
		array[y]= array[y+1];
		array[y+1]= aux;
	}
	}
	}
	//TODO: Print them
	printf("impresion\n");
	for (k=0; k<N; k++){
	printf("%d\n",array[k]);
	}

}
