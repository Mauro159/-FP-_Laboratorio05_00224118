#include <iostream>
using namespace std;


int main(int argc, char *argv[]){
	
	int total;
	cout<<"Ingrese el total de datos: ";
	cin>>total;
	float aux, suma=0;
	for (int i=0;i<total;i++){
		
		cout<<"Ingrese el dato"<<(i+1)<<" : ";
		cin>>aux;
		suma+=aux;
	}	
	
	cout<<"El valor de la media:"<<(suma/total);
		
	
	
	return 0;
}
