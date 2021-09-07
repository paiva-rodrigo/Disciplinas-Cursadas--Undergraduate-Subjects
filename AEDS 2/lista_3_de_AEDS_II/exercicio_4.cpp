#include<iostream>
#include<fstream>
using namespace std;
 struct produto{
	string nome;
	double preco;
 };
void intercala(int p,int q,int r,produto v[]){
     int i,j,k;
     produto*w;
     w=new produto[r-p];
     i=p;j=q;k=0;
	     while(i<q && j<r){
		     if(v[i].nome<=v[j].nome){
		     w[k++]=v[i++];
	     }
		     else w[k++]=v[j++];
		     }
     	while(i<q)w[k++]=v[i++];
     	while(j<r)w[k++]=v[j++];
     	for(i=p;i<r;i++)v[i]=w[i-p];
     }
void mergesort(int p,int r,produto v[]){
     if(p<r-1){
        int q=(p+r)/2;
        mergesort(p,q,v);
        mergesort(q,r,v);
        intercala(p,q,r,v);
     }
}
 int main(){
 	int n;
 	int cont=0;
 	produto dados[1000];
 	 while(1){
 		cout<<"\nDigite o que voce deseja fazer:\n1)Inserir dados de um novo produto";
 		cout<<"\n2)imprimir o vetor\n3)ordenar o vetor em ordem alfabetica pelo nome do produto\n4)Sair:   ";
 		cin>>n;
 		if (n==1){
 			cout<<"Digite o nome do produto: ";
 			cin>>dados[cont].nome;
 			cout<<"Digite o preco do produto: ";
 			cin>>dados[cont].preco;
 			cont++;
		}
 		if (n==2){
 			int x=0;
 			while(x<cont){
 			 cout<<"\nNome: "<<dados[x].nome;
 			 cout<<"\nPreco: "<<dados[x].preco;
			  x++;	
			}
		}
 		if (n==3){
 			mergesort(0,cont,dados);
 			cout<<"Vetor ordenado: ";
 			int b=0;
 			while(b<cont){
 			 cout<<"\nNome: "<<dados[b].nome;
 			 cout<<"\nPreco: "<<dados[b].preco;
			  b++;	
			 }
		} 
 		if (n==4) break;
	 }	
	 return 0;
 }
