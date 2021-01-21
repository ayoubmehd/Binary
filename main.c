#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * return int integer 10 base
 * Params (int binary)
 *
 **/

int binaryToInt(int binary[], int size) {
	
	int i, j = size - 1, sum = 0;
	
	for (i = 0; i < size; i++) {
		
//		printf("%d ) val: %d - res : %d - pow : %d\n", j, binary[i], binary[i] * ((int)pow(2, j)), ((int)pow(2, j)));
		

		sum += binary[i] * ((int)pow(2, j));
		j--;
	}
	
	printf("sum : %d, size : %d\n", sum, size);
	
	return sum;
}

// function convert int to binary 
// return binary 

int functBinary(int a, int b) {
	
}

//Somme des deux valeur binaire
int Sum(){
	
	
}

int main() {
	int size = 4;
	
	int bin[] = { 1, 1, 1, 0};
	
	printf("%d",binaryToInt(bin, size));
		
	return 0;
}