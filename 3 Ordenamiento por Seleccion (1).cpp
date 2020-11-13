//Ordenamiento por Selección

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {80,20, 100,10,5,9};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Selección
	for(i=0;i<6;i++){
		min = i;
		for(j=i+1;j<6;j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	
	
	getch();
	return 0;
     }
