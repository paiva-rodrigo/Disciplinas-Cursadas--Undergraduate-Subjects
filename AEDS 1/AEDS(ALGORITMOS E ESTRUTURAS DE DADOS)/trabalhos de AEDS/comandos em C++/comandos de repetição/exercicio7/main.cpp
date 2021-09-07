#include <iostream>

using namespace std;

int main()
{
    int rjp1,rjp2=0;

    cout<<"Para saber o valor da soma de todos os divisores de um numero com execao dele mesmo\n";
    cout << "Digite o valor de um numero:" << endl;
    cin>>rjp1;
    cout<<"O valor da soma dos divisores desse numero e:\n";
     for(int r=1;r<rjp1;r++){
        if(rjp1%r==0){
            cout<<"+"<<r;
            rjp2=r+rjp2;
        }
     }
     cout<<"="<<rjp2;
    return 0;
}
