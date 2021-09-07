#include<iostream>
using namespace std;
struct livro{
 string nome;
 livro *seg;
};
void remove(livro *dado){
 livro *p,*q;
 p=dado->seg;
 q=p->seg;
 dado->seg=q;
}
void insere(string n,livro *pt){
 livro *dado;
 dado =new livro;
 dado->nome=n;
 dado->seg=pt->seg;
 pt->seg=dado;
}
string topo(livro *dado){
 livro *d;
 d=dado->seg;
 string tp=d->nome;
 return tp;
}
int main(){
 livro *dado;
 livro liv;
 dado=&liv;
 dado->seg=NULL;
 int n1=1;
   while(n1!=0){
   cout<<"Selecione o que deseja fazer:\n1-Colocar um novo livro\n2-retirar o livro que"\
   " esta no topo da lista\n0-sair:  ";
   cin >>n1; 
   if(n1==1){
     cout<<"Digite o nome do livro que ira para o topo da pilha de livros: ";
     string txt;
     cin>>txt;
     insere(txt,dado);
      if(dado->seg==NULL) cout<<"Pilha vazia! ";
      else cout<<"livro no topo: "<<topo(dado)<<endl;  
   }
   if(n1==2){
     remove(dado);
      if(dado->seg==NULL) cout<<"Pilha vazia!\n ";
      else cout<<"livro no topo: "<<topo(dado)<<endl; 
    }
   }
 }
 
