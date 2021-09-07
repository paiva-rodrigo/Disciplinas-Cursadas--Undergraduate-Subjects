#include<iostream>
using namespace std;
struct triangulo{
     float base;
     float alt;
};
float calculaArea(float a,float b){
  return  (a*b)/2;
}
int main(){
 triangulo t1,t2,t3;
 cout<<"Digite a altura do 1o triangulo: ";
 cin>>t1.alt;
 cout<<"Digite a base do 1o triangulo: ";
 cin>>t1.base;
 cout<<"Digite a altura do 2o triangulo: ";
 cin>>t2.alt;
 cout<<"Digite a base do 2o triangulo: ";
 cin>>t2.base;
 cout<<"Digite a altura do 3o triangulo: ";
 cin>>t3.alt;
 cout<<"Digite a base do 3o triangulo: ";
 cin>>t3.base;
 cout<<"\nA area do triangulo 1 vale :"<<calculaArea(t1.base,t1.alt);
 cout<<"\nA area do triangulo 2 vale :"<<calculaArea(t2.base,t2.alt);
 cout<<"\nA area do triangulo 3 vale :"<<calculaArea(t3.base,t3.alt);
}
