#include<iostream>
using namespace std;
struct viagem{
     float distancia;
     float consumo;
};
float kmlitro(float c,float d){
 return (d)/c;
}
int main(){
 viagem casos[100];
 for(int i=0;i<99;i++){
   cout<<"Digite a distancia do "<<i+1<<"o caso de viagem em km :";
   cin>>casos[i].distancia;
   cout<<"Digite o consumo do "<<i+1<<"o caso de viagem em litros :";
   cin>>casos[i].consumo;  
 }
 for(int i=0;i<99;i++){
   cout<<" caso "<<i+1<<":"<<endl;
   cout<<"distancia= " <<casos[i].distancia<<" km "<<endl;
   cout<<"consumo ="<<casos[i].consumo<<" litros "<<endl;
   cout<<"media de consumo da distancia em relacao ao combustivel ="<<kmlitro(casos[i].consumo,casos[i].distancia)<<" "\
   "km/litro"<<endl;
 }
}
