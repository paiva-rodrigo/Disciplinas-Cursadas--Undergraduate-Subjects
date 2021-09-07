#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

 int rjp1,rjp2,rjp3=0;

  cout<<"O computador sorteou um numero entre 0 e 10, tente adivinhalo\n";
  srand(time(NULL));
  rjp2=(1+rand()%10);
  while(rjp2!=rjp1){
      cout<<"Qual o valor do numero sorteado?\n";
      cin>>rjp1;
      rjp3++;
  }
   cout<<"Parabens voce selecionou o numero sorteado!\nSendo ele igual a "<<rjp2<<endl;
   cout<<"Foram gastas "<<rjp3<<" tentativas para se descobrir o numero sorteado!";




        return 0;
}
