#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    double rjp1;

    cout << "Para saber o valor da raiz quadrada de um numero multiplicada pelos numeros naturais de 1 a 5 digite:" << endl;
    cout<<"O valor desse numero:\n";
    cin>>rjp1;
     if(rjp1<=0){
        cout<<"Numeros menores ou iguais a 0 sao invalidos!!!";
     }
     else{
        for(int r=1;r<6;r++){
            cout<<"O valor da raiz desse numero multiplicado por "<<r<<" e:\n";
            cout<<sqrt(rjp1)*r<<endl;
        }
     }
    return 0;
}
