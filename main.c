#include <stdio.h>

//Somme des deux valeur binaire
int Sum(int *a, int *b, int *sortie){
	

    int i;
 	
 	
 	//Application du ET logique
    for(i=0; i<8; i++)
    {

        if((a[i] == '0') && (b[i] == '0'))
            sortie[i] = '0';
        if((a[i] == '0') && (b[i] == '1'))
            sortie[i] = '1';
        if((a[i] == '1') && (b[i] == '0'))
            sortie[i] = '1';
        if((a[i] == '1') && (b[i] == '1'))
            sortie[i] = '0';
    
    }
    
    //Affichage
    for(i=0; i<8; i++)
    	printf ("La somme de ces 2 valeurs est:   %d", sortie[i]);
}
	
	

int main(){
	
	
	
	return 0;
}