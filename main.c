/* 
 * This program reads 10 int from user, then it print this numbers sorted
*/
#include <stdio.h>

int main(){
	int i,k=0;
	int N=10;
	int array[N];	
	//TODO: Read 10 numbers from user
	for (i=0; i<10; i++){
		scanf ("%d", &array[i]);
	}

	//TODO: Sort them 
	//
	//
	//TODO: Print them
	printf("impresion\n");
	for (k=0; k<10; k++){
	printf("%d\n",array[k]);
	}

}
