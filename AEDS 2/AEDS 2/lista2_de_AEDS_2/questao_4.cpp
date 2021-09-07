#include<iostream>
using namespace std;
struct produto{
    string  nome;
    float preco;
    int estoque;
};
int main(){
 int r;
 cout<<"De quantos produtos voce deseja colher os dados?  ";
 cin>>r;
  if(r==0){
     cout<<"okay";
  }
  else{
     produto vet[r];
     cout<<"Qual nome do "<<1<<"o produto: ";
     cin>>vet[0].nome;
     cout<<"Qual preco do "<<1<<"o produto: ";
     cin>>vet[0].preco;
     cout<<"Qual estoque do "<<1<<"o produto: ";
     cin>>vet[0].estoque;
     float marbarato=vet[0].preco;
     float marcaro=vet[0].preco;
     string nomecaro=vet[0].nome;;
     int estoquecaro=vet[0].estoque;
     string nomebarato=vet[0].nome;
     int estoquebarato=vet[0].estoque;
     int j=r-1;
     for(int i=1;i<r;i++){
      cout<<"Qual nome do "<<i+1<<"o produto:";
      cin>>vet[i].nome;
      cout<<"Qual preco do "<<i+1<<"o produto: ";
      cin>>vet[i].preco;
      cout<<"Qual estoque do "<<i+1<<"o produto:";
      cin>>vet[i].estoque;
       if(vet[i].preco<marbarato){
        marbarato=vet[i].preco;
        nomebarato=vet[i].nome;
        estoquebarato=vet[i].estoque;
       }
       if(vet[i].preco>marcaro){
        marcaro=vet[i].preco;
        nomecaro=vet[i].nome;
        estoquecaro=vet[i].estoque;
       }
  }
 cout<<"Produto mais caro: \n"<<"nome: "<<nomecaro<<"\npreco: "<<marcaro<<"\nestoqu"\
 "e:"<<estoquecaro;
 cout<<"\nProduto mais barato: \n"<<"nome: "<<nomebarato<<"\npreco: "<<marbarato<<"\nestoque:"<<estoquebarato;
 }
}
