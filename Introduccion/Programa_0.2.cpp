#include<iostream>

using namespace std;

void Max(int a, int b);

int main(){
	int N1, N2, N3;
	cout<<"Introduzca el primer valor: "<<endl;
	cin>>N1;
	cout<<"Introduzca el segundo valor valor: "<<endl;
	cin>>N2;
	Max(N1,N2);
	
	system("PAUSE");
	return 0;
	
}

void Max(int a, int b)
{
	if(a>b){
		cout<<"El mayor es: "<<a<<endl;
	}
	else if(a<b){
		cout<<"El mayor es: "<<b<<endl;
	}
	
}
