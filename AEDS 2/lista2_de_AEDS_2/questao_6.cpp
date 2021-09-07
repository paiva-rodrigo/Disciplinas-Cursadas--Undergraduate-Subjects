#include<iostream>
using namespace std;
struct navio{
   string nome;
   float carga;
   navio *seg;
};
void imprime(navio *pt){
 navio *nav;
 cout<<"Os dados dos navios sao:";
  for(nav=pt->seg;nav!=NULL;nav=nav->seg){
   cout<<"\nNavio: "<<nav->nome;
   cout<<"\nCarga: "<<nav->carga;
  }
}
navio *Busca(string name,navio *pt){
 navio *nav;
 nav=pt->seg;
  while(nav!=NULL && nav->nome!=name)
     nav=nav->seg;
 return nav;
}
void BuscaeRemove(string name,navio *pt){
  navio *p, *q;
  p = pt;
  q =pt->seg;
   while (q != NULL && q->nome != name) {
   p = q;
   q = q->seg;
    if (q != NULL) {
       p->seg = q->seg;
    }
   }
   }
void insere(string name,float number,navio *pt){
 navio *nav;
 nav=new navio;
 nav->nome=name;
 nav->carga=number;
 nav->seg=pt->seg;
 pt->seg=nav;
}
string  achanome(string ne,navio *dado){
 navio *ac;
 ac=dado->seg;
  while(ac!=NULL){
   ac=ac->seg;
   if(ac->nome==ne){
    string c=ac->nome;
    return c;
   }
  }
}
float  achacarga(string  ne,navio *dado){
 navio *ac;
 ac=dado->seg;
  while(ac!=NULL){
   ac=ac->seg;
   if(ac->nome==ne){
    float b=ac->carga;
    return b;
   }
  }
}
int main(){
 navio *dado;
 navio  cabeca;
 cabeca.seg=NULL;
 dado=&cabeca;
  int t=1;
   while(t!=0){
     cout<<"\nDigite o que deseja fazer:\n(1)Anotar dados de um novo navio\n(2)mostrar dados de todos os navios"\
     "\n(3) buscar e excluir um navio\n(0)sair:\n";
     cin>>t;
     if(t==1){
      cout<<"Digite o nome do navio: ";
      string s;
      cin>>s;
      cout<<"Digite a carga do navio: ";
      float j;
      cin>>j;
      insere(s,j,dado);
     }
     if(t==2) imprime(dado);
     if(t==3) {
      cout<<"Digite o nome do navio que quer buscar: ";
      string n;
      cin>>n;
      navio *bu=Busca(n,dado);
      if(bu==NULL) cout<<"O navio "<<n<<" nao foi encontrado";
      else{
       cout<<"O navio "<<n<<" foi encontrado";
       cout<<"\nDados do navio sao: "; 
       string n1=achanome(n,dado);
       float n2=achacarga(n,dado);
       cout<<"\nNome: "<<n1;
       cout<<"\nNumero: "<<n2;
       cout<<"\nDeseja remove-lo?(1)sim (2) nao\n";
       int x;
       cin>>x;
        if(x==1){
         BuscaeRemove(n,dado);
         cout<<"o navio "<<n<<" foi removido com sucesso!";
        }
    }
   }
 if(t==0){
  cout<<"Os navios e suas cargas ficaram sendo:\n";
  imprime(dado);
 } 
}
}
