/* 
 * This program reads 10 int from user, then it print this numbers sorted
*/
#include <stdio.h>

int main(){
	int i,k,l,y=0;
	int N=10;
	int aux =0;
	int array[N];	
	//TODO: Read 10 numbers from user
	printf("Add 10 numbers, introduce a enter between numbers.\n");
	for (i=0; i<10; i++){
		scanf ("%d", &array[i]);
	}

	//TODO: Sort them 
	for (l=0; l<10; l++){
	for (y=0; y<10; y++){
	if (array[y]>array[y+1]){
		aux = array[y];
		array[y]= array[y+1];
		array[y+1]= aux;
	}
	}
	}
	//TODO: Print them
	printf("Sorted numbers:\n");
	for (k=0; k<10; k++){
	printf("%d\n",array[k]);
	}

}
