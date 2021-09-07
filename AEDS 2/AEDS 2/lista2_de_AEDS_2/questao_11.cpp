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
void quebrada(int n,list *pont){
 list *a,*b,*c,*d;
 a=b=c=d=NULL;
  pont=pont->pt;
 while(pont!=NULL){
  if(pont->numero!=n){
   inserelista(pont->numero,&a,&b);
  }
  else{
   inserelista(pont->numero,&a,&b);
   break;
  }
  pont=pont->pt;
 }
 cout<<"O resultado da 1a  lista foi: ";
 imprimelista(b);
 cout<<endl;
 pont=pont->pt;
 while(pont!=NULL){
  inserelista(pont->numero,&c,&d);
  pont=pont->pt;
 }
 cout<<"\nO resultado da 2a lista foi: ";
 imprimelista(d);
 cout<<"\n\n";
}
int main(){
 list *dado;
 list lst;
 lst.pt=NULL;
 dado=&lst;
   while(1){
    cout<<"Digite o valor que voce quer adicionar a lista (0)para parar: ";
    int r;
    cin>>r;
    if(r==0)break;
    else inserepilha(r,dado);
     cout<<"Deseja repartir essa lista em outras duas? (1)SIM;(0)NAO :";
     int n;
     cin>>n;
       if(n==1){
         cout<<"Digite em  que numero dessa sequencia que voce deseja separa-la em duas outras: ";
         int se;
         cin>>se;
         quebrada(se,dado);
       }
    }
   }
