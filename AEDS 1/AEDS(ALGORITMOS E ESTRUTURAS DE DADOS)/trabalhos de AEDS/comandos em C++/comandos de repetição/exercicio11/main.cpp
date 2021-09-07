#include <iostream>

using namespace std;

int main()
{
    int rjp1,rjp2,rjrj=0,rjrj1=0;
    cout << "Para saber a diferenca em meses e dias entre dois respectivos anos informe:" << endl;
    cout << "O primeiro ano (usando  4 digitos):" << endl;
    cin>>rjp1;
    cout << "O segundo ano (usando  4 digitos):" << endl;
    cin>>rjp2;
    if(rjp1>rjp2){
      for(int rjp=1;rjp<(rjp1-rjp2)*365;rjp++){
        rjrj+=1;
         if(rjrj%30==0){
            rjrj1+=1;
         }
      }
    }
    else{
        for(int rjp=1;rjp<(rjp2-rjp1)*365;rjp++){
          rjrj+=1;
            if(rjrj%30==0){
              rjrj1+=1;
            }
        }
    }

    cout<<"A diferenca entre esses dois anos em meses e dias e:\n";
    cout<<rjrj1<<" meses e ";
    cout<<rjrj-(30*rjrj1) <<" dias";

    return 0;
}
