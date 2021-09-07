#include <iostream>
 using namespace std;
  int main(){
   int rjp1,rjp2,rjp3=0,rjp4=0,r=0;

  cout<<"Para saber a quantidade de pessoas com idade entre 0 e 18 anos, juntamente com a quantia de pessoas com idade maior que 65 anos digite:";
  cout<<"\n O  numero de pessoas que teram as idades expostas:\n";
  cin>>rjp1;
   while(r<rjp1){
    cout<<"A idade da pessoa de ordem "<<r+1<<" :\n";
    cin>>rjp2;
        if(rjp2>=120 || rjp2<0 ){
            cout<<"Essa idade e invalida!!!\n";
        }
        else{
            if(rjp2<18 && rjp2>0 ){
                rjp3+=1;
            }
            else if(rjp2>65){
                rjp4+=1;
            }
        }
        r++;
        }
  cout<<"\n O numero de pessoas com idades entre 1 e 18 anos e :"<<rjp3;
  cout<<"\n O numero de pessoas com idades maiores que 65 anos e :"<<rjp4;
   return 0;
  }
