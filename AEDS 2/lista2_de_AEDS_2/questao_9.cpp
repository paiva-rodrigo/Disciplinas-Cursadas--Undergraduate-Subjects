#include<iostream>
using namespace std;
struct fila{
 string nome;
 fila *seg;
};
void insere(string  nn, fila **es, fila **et){
 fila *nova = new fila;
 nova -> nome =nn;
 nova -> seg = NULL;
  if (*et== NULL ) *et = *es = nova;
  else{
  (*et)->seg = nova;
  *et = nova;
  }
}
string remove(fila  **es, fila **et){
  fila *p;
  string x;
  p = *es;
  x = p->nome;
  *es = p->seg;
   if(*es == NULL) *et = NULL;
 return x;
}
int main(){
 fila *s, *t;
 s = t = NULL; 
 int r;
 cout<<"A fila ainda esta vazia, voce deseja colocar alguem nela?(1)SIM ,(2) NAO:   ";
 cin>>r;
  while(r!=0){
   cout<<"\nDigite a opcao que deseja:\n1)Colocar alguem no final da fila\n2)Retirar quem esta no comeco da fila"\
   "\n0)Sair:   ";
   cin>>r;
    if(r==1){
     cout<<"Digite o nome da pessoa: ";
     string name;
     cin>>name;
     insere(name,&s,&t);
      if(t==NULL)cout<<" A fila esta vazia! ";
   }
   if(r==2){
     string d = remove(&s,&t);
     cout <<"O(a) " << d<<" foi removido(a) da fila\n"; 
      if(t==NULL){
       cout<<"\nFILA VAZIA!\n";
   }
   }
  }
}
