#include<iostream>
using namespace std;
struct fila{
 string nome;
 int idade;
 fila *seg;
};
void insere(string name,int ida, fila**f1,fila **f2){
 fila  *nova;
 nova=new fila;
 nova->nome=name;
 nova->idade=ida;
 nova->seg=NULL;
   if(*f1==NULL) *f1=*f2=nova;
   else{
    (*f1)->seg=nova;
    *f1=nova;
   }
}
void imprime(fila *f1){
 while(f1!=NULL){
  cout<<"\nNome: "<<f1->nome<<" Idade: "<<f1->idade;
  f1=f1->seg;
 }
 cout<<"\n\n";
}
void maior(fila **f1,fila **f2,fila *f3,fila *f4){
  while(f3!=NULL){
   if(f3->idade>=18){
   fila *nova=new fila;
   nova->nome=f3->nome;
   nova->idade=f3->idade;
   nova->seg=NULL;
    if(*f1==NULL) *f1=*f2=nova;
    else{
     (*f1)->seg=nova;
     *f1=nova;
    }
   }
    f3=f3->seg;
  }
  while(f4!=NULL){
    if(f4->idade>=18){
      fila *nova=new fila;
      nova->nome=f4->nome;
      nova->idade=f4->idade;
      nova->seg=NULL;
      (*f1)->seg=nova;
      *f1=nova;
    }
   f4=f4->seg;
  }
}
int main(){
 fila *dado1,*dado2;
 dado1=dado2=NULL;
   while(1){
    cout<<"Deseja coletar mais dados das idades de alguma mulher? (1)sim (0) nao: ";
    int c;
    cin>>c;
     if(c==1){
       cout<<"Digite o nome da mulher: ";
       string name;
       cin>>name;
       cout<<"Digite a idade que ela possui: ";
       int ida;
       cin>>ida;
       insere(name,ida,&dado1,&dado2);
     }
     else{
      break;
     }  
   }
 cout<<"Dados coletados das mulheres: ";
 imprime(dado2);
 fila *dado3,*dado4;
 dado3=dado4=NULL;
   while(1){
    cout<<"Deseja coletar mais dados das idades de algum homem? (1)sim (0) nao : ";
    int c;
    cin>>c;
     if(c==1){
       cout<<"Digite o nome do homem: ";
       string name;
       cin>>name;
       cout<<"Digite a idade que ele possui: ";
       int ida;
       cin>>ida;
       insere(name,ida,&dado3,&dado4);
     }
     else{
      break;
     }  
   }
 cout<<"Dados coletadosdas homens: ";
 imprime(dado4);
 fila *dado5,*dado6;
 dado5=dado6=NULL;
 maior(&dado5,&dado6,dado2,dado4);
 cout<<"A fila com os maiores de 18 anos e: ";
 imprime(dado6);
 
}
