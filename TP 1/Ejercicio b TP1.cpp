#include <iostream>
using namespace std;

int main(){
	float m1,m2,b1,b2,m,b,x,y;
	
	cout<<"Ingrese la pendiente de la primera recta: "<<endl;
	cin>>m1;
	cout<<"Ingrese la ordenada de la primera recta: "<<endl;
	cin>>b1;
	cout<<"Ingrese la pendiente de la segunda recta: "<<endl;
	cin>>m2;
	cout<<"Ingrese la ordenada de la segunda recta: "<<endl;
	cin>>b2;
	if (m1==m2 && b1==b2){
		cout<<"Es la misma recta, por lo tanto tiene infinitos puntos de interseccion."<<endl;
	}
	else{
		if(m1==m2){
			cout<<"Las rectas son paralelas"<<endl;
		}
		else{
			m= m1-m2;
			b= b1-b2;
			x= m/b;
			y= m1*x+b1;
			cout<<"Las rectas se intersectan en X="<<x<<" e Y="<<y<<endl;
		}
	}
return 0;
}
