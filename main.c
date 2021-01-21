#include<stdio.h>
#include <stdlib.h>

/*
 * return int integer 10 base
 * Params (int binary)
 *
 **/

int binaryToInt() {
	
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
	
	
	

//int main(){
		
//master
	//return 0;
}
