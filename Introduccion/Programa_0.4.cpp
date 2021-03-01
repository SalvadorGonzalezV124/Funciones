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
	int max= Max(Max(N1, N2), N3);
	cout<<"El mayor de los tres numeros es: "<<max<<endl;
	system("PAUSE");
	return 0;
}

int Max(int a, int b)
{
	int c;
	if(a>b){return a;}
	else{return b;}
}
