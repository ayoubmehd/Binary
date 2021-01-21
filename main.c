#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rest=0;
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
int Sum(int a, int b, int k){   

    int r=0;
    rest=0;
    if(a+b+k==1)
    {
        r=1;
    }

    if(a+b+k==2)
        {
           rest=1;
           r=0;
        }else if(a+b+k==3)
        {
           rest=1;
           r=1;
        }

    return r;
}


int main(){

	int i =	6;
	//int a[]={1,0,0,0,1};
	int p[i + 1];
	functBinary(p, 64);
	
	while(i >= 0)
	printf("%d",p[i--]);
	
	int size = 4;
	
	int bin[] = { 1, 1, 1, 0};
	
	printf("\n%d\n",binaryToInt(bin, size));

    int a[3] = {1,0,1}, b[3] = {1,0,0}, c[4];


    for (i = 2;i >= 0;i--){
        c[i+1]=Sum(a[i],b[i], rest);
    }
    
    if(rest==1){
        c[0]=rest;
    }
    
    if(rest==1){
        printf("%d",c[0]);
    }
    
    for (i = 1 ; i <4; i++){

        printf("%d",c[i]);
    }


    return 0;
}
