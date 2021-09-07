#include<iostream>
using namespace std;
struct list{
 int numero;
 list *pt;
};
void inserepilha(int n,list *pont){
 list  *nova;
 nova = new list;
 nova->numero=n;
 nova->pt=pont->pt;
 pont->pt=nova;
}
imprimepilha(list *dado){
 cout<<"Pilha:\n";
 while(dado!=NULL){
  cout<<" "<<dado->numero;
  dado=dado->pt;
 }
}
 void inserelista(int n,list **a,list **b){
 list *no = new list;
 no->numero=n;
 no -> pt = NULL;
   if(*a == NULL)*a = *b = no;
   else{
      (*a)->pt = no;
      *a = no;
   }
}
void imprimelista(list *s){
  cout << "\nFila:";
   while(s != NULL){
     cout << " " << s->numero;
     s = s->pt;
   }
}
int main(){
 list *r,*s;
 r=s=NULL;
   while(1){
    cout<<"Digite o valor que voce quer adicionar a lista:(0)para parar ";
    int u;
    cin>>u;
    if(u==0)break;
    else inserelista(u,&r,&s);
  }
  imprimelista(s);
 }
