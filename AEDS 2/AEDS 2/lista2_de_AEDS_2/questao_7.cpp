#include<iostream>
using namespace std;
struct pilha{
 string nome;
 pilha *seg;
};
void empilha(string n,pilha *dado){
 pilha *nova;
 nova=new pilha;
 nova->nome=n;
 nova->seg=dado->seg;
 dado->seg=nova;
}
void desempilha(pilha *dado){
 pilha *a,*b;
 a=dado->seg;
 string name=a->nome;
 cout<<"O "<<name<<" foi desempilhado";
 b=a->seg;
 dado->seg=b;
}
void topo(pilha *dado){
 pilha *p;
 p=dado->seg;
 string name=p->nome;
 cout<<"\nO elemento do topo e "<<name;
}
void exibir(pilha *dado){
 pilha *a;
 a=dado->seg;
 cout<<"Pilha: ";
  while(a!=NULL){
   cout << " " << a->nome;
   a=a->seg;
  }
 cout<<endl; 
}
void limpa(pilha *dado){
 dado->seg=NULL;
}
int main(){
 pilha *dado;
 pilha dat;
 dat.seg=NULL;
 dado=&dat;
 cout<<"Deseja realizar alguma operacao em uma pilha?(1)SIM;(2)NAO:\n";
 int r;
 cin>>r;
   while(r!=0){
   cout<<"\n1  EMPILHAR\n2  DESEMPILHA\n3  EXIBIR ELEMENTO DO TOPO\n4  EXIBIR A PILHA"\
   "\n5  ESVAZIAR A PILA\nDIGITE SUA OPCAO: ";
   cin>>r;
    if(r==1){
      string n;
      cout<<"Digite o que quer salvar na pilha: ";
      cin>>n;
      empilha(n,dado);
    }
    if(r==2){
     desempilha(dado);
    }
    if(r==3){
     topo(dado);
    } 
    if(r==4){
     exibir(dado);
    } 
    if(r==5){
     limpa(dado);
    }
  }
return 0;
}
