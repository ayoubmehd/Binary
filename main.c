#include <stdio.h>
#include <stdlib.h>





// function convert int to binary 
// return binary 




int *functBinary(int a){
	int i = 0,j=0,b[4],bin;
	while(a !=0){
		b[j]=a%2;
		bin=a*i;
		a=a/2;
		i=i*10;
		j++;
		
	}
return b;
	
	 
}




int main() {
	int i=4;
	//int a[]={1,0,0,0,1};
	int *p;
	p = functBinary(16);
	
	while(i >= 0)
	printf("%d",p[i--]);
	
	
	
	return 0;
}
