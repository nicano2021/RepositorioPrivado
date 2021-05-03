#include <iostream>
using namespace std;

int main(){
	float N;
    char M;

    cout<<"Ingrese una velocidad en km/hs: "<<endl;
    cin>>N;

    if (N>=0 && N!=M){
    	cout<<"La velocidad en mts/seg equivale a: "<< (N*1000)/3600 <<endl;
   }
   else {
   	cout<<"El valor ingresado es invalido."<<endl;
   }

return 0;
}
