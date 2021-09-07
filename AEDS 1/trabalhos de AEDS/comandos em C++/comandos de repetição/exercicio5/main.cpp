#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int rjp1,rjp2,rjp3=0;
    srand(time(NULL));
    rjp1=1+rand()%100;

    cout << "O computador sorteou um numero entre 0 e 100!\n";
     for(int r=10;r>0;r--){
        cout << "Digite o numero que voce acha que foi o sorteado:\n(voce tem mais "<<r<<" tentativas)" << endl;
        cin>>rjp2;
           if(rjp2>rjp1){
            cout<<"Esse valor e maior que o sorteado!";
           }
           else if(rjp1>rjp2){
            cout<<"Esse valor e menor que o sorteado!";
           }
           else{
            rjp3+=1;
           }
     }
          if(rjp3!=0){
            cout<<"\nVoce acertou o numero sorteado\n Sendo ele igual a:"<<rjp1;
          }
          else{
            cout<<"\nVoce nao acertou o numero sorteado!"<<"\n Sendo ele igual a:"<<rjp1;
          }
    return 0;
}
