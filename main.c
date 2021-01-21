#include<stdio.h>
#include <stdlib.h>

int rest=0;
/*
 * return int integer 10 base
 * Params (int binary)
 *
 **/

int binaryToInt() {
	
}

// function convert int to binary 
// return binary 

int functBinary(int a, int b){
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

    int a[3], b[3], c[4], i;


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