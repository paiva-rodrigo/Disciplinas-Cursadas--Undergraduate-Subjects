#include <iostream>

using namespace std;

int main()
{
    int rjp1;
    float rjp2=0.0,rjp3;
    cout<<"Para saber o valor da expressao 1+1/2+1/3+[...]+1/n:\n";
    cout << "Digite o valor de n, sendo esse inteiro:" << endl;
    cin>>rjp1;
      for(int r=1;r<rjp1+1;r++){
        rjp3==1/(r);
        rjp2+=rjp3;
      }
    cout<<"O  resultado da expressao e:\n"<<rjp2;

    return 0;
}
