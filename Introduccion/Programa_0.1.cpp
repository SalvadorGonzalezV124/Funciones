#include<iostream>

using namespace std;

void suma(int a, int b);

int main(){
	int N1, N2, R3;
	
	
	cout<<"Introduzca el valor del primer operando: "<<endl; 
	cin>>N1;
	cout<<"Introduzca el valor del segundo operando: "<<endl; 
	cin>>N2;
	
	suma(N1, N2);
	
	
	system("PAUSE");
	return 0;
}

void suma(int a, int b)
{
	
	int c=a+b;
	cout<<"El resultado de la suma es: "<<c<<endl;
}
