#include<iostream>
using namespace std;
struct contato{
 string nome;
 long telefone;
 contato *seg;
};
void BuscaeRemove (string no, contato *lst){
contato *p, *q;
p = lst;
q = lst->seg;
while (q != NULL && q->nome  != no) {
p = q;
q = q->seg;
}
if (q != NULL) {
p->seg = q->seg;
}
}
void insere(string name,long n,contato *lst){
 contato *novo;
 novo=new contato;
 novo->nome= name;
 novo->telefone=n;
 novo->seg=lst->seg;
 lst->seg=novo;
}
void imprime(contato *lst){
 contato * p;
 for(p=lst->seg; p!=NULL; p=p->seg){
   cout << "\nnome: " << p->nome;
   cout << "\nnumero: " << p->telefone ;
 }
}
contato *Busca (string  nom, contato *lst) {
contato *p;
p = lst->seg;
while (p != NULL && p->nome != nom){
 p = p->seg;
 return p;
}
}
int main(){
 contato cont;
 contato *dado;
 dado=&cont;
 cont.seg=NULL;
 while(1){
  cout<<"\nDeseja inserir um novo contato(1), listar todos os nomes e telefones(2) "\
  "buscar um contato pelo nome e remove-lo (3)  "<<" PARA PARAR DIGITE (0):    ";
  int r;
  cin>>r;
  if(r==0) break;
  if(r==1){
   cout<<"Digite o nome do contato: ";
   string name;
   cin>>name;
   cout<<"Digite o numero do contato:";
   int n;
   cin>>n;
   insere(name,n,dado);
  }
  if(r==2){
   imprime(dado);
  }
  if(r==3){
   string nn;
   cout<<"Digite o nome: ";
   cin>>nn;
   contato *bu=Busca(nn,dado);
   if(bu==NULL){
    cout<<"Contato nao encontrado! ";
   }
   else{
    cout<<"Contato "<<nn<<" encontrado!";
    cout<<"\nDeseja remover esse contato da lista? (1)sim;(0) nao ";
    int w;
    cin>>w;
    if(w==1){
     BuscaeRemove(nn,dado);
     cout<<"O contato foi removido com sucesso!";
    } 
   }
  }
 }
 cout<<"A lista de contatos e :";
 imprime(dado);
}
