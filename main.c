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
		
		sum += binary[i] * ((int)pow(2, j));
		j--;
	
	}
	
//	printf("sum : %d, size : %d\n", sum, size);
	
	return sum;
}

// function convert int to binary 
// return binary 


void functBinary(int *b, int a){

	int i = 0,j=0,bin;
	while(a !=0){
		b[j]=a%2;
		bin=a*i;
		a=a/2;
		i=i*10;
		j++;
	}
	
}


//Somme des deux valeur binaire
int Sum(){
	
	
}


int main() {
	int i =	6;
	//int a[]={1,0,0,0,1};
	int p[i + 1];
	functBinary(p, 64);
	
	while(i >= 0)
	printf("%d",p[i--]);
	
	int size = 4;
	
	int bin[] = { 1, 1, 1, 0};
	
	printf("\n%d",binaryToInt(bin, size));

	return 0;	
}
