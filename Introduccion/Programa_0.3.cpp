#include<iostream>

using namespace std;

int Max(int a, int b);

int main(){
	int N1, N2, N3;
	
	cout<<"Introduzca el primer valor: "<<endl;
	cin>>N1;
	cout<<"Introduzca el segundo valor valor: "<<endl;
	cin>>N2;
	cout<<"Introduzca el tercer valor valor: "<<endl;
	cin>>N3;
	int max1= Max(N1, N2);
	int Max2= Max(max1, N3);
	cout<<"El mayor de los tres numeros es: "<<Max2<<endl;
	system("PAUSE");
	return 0;
}


int Max(int a , int b)
{
	int c;
	if(a>b){ c=a; }
	else{ c=b; }
	return c;
}
