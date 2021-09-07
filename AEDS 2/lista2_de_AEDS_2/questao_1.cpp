#include<iostream>
using namespace std;
struct retangulo{
     float larg;
     float alt;
};
int main(){
 retangulo ret1,ret2;
  cout<<"Digite a altura do um retangulo 1:\n";
  cin>>ret1.alt;
  cout<<"Digite a largurara do um retangulo 1:\n";
  cin>>ret1.larg;
  cout<<"A area do retangulo 1 vale "<<(ret1.alt)*(ret1.larg)<<endl;
  cout<<"\nDigite a altura do um retangulo 2:\n";
  cin>>ret2.alt;
  cout<<"Digite a largurara do um retangulo 2:\n";
  cin>>ret2.larg;
  cout<<"A area do retangulo 2 vale "<<(ret2.alt)*(ret2.larg);
}
