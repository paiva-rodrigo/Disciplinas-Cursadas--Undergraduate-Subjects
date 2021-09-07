#include<iostream>
#include<fstream>
using namespace std;
struct empresa{
	string nome;
	int d1, d2;
};
void busca(empresa vet[],int cont,string name){
	for(int i=0;i<cont;i++){
		if(vet[i].nome==name){
			cout<<"A empresa "<<name<<" for encontrada e seus dados sao: ";
			cout<<"\nDivida ="<<vet[i].d1+vet[i].d2<<endl;
		}
	}
}
void intercala(int p,int q,int r,empresa v[]){
     int i,j,k;
     empresa*w;
     w=new empresa[r-p];
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
void mergesort(int p,int r,empresa v[]){
     if(p<r-1){
        int q=(p+r)/2;
        mergesort(p,q,v);
        mergesort(q,r,v);
        intercala(p,q,r,v);
     }
}
int main(){
	ifstream leia("empresas.txt");
	string ler;
	int tam=0;
		while(getline(leia,ler)){
			tam++;
		}
	empresa vet[tam];
	int cont = 0;
	ifstream leia2("empresas.txt");
	string ler2;
	int div1,div2;
		while(leia2>>ler2){
			leia2>>div1;
			leia2>>div2;
			vet[cont].nome=ler2;
			vet[cont].d1=div1;
			vet[cont].d2=div2;
			cont++;
		}
	int n;
		while(1){
		 cout<<"1-Busca divida por nome da empresa\n2-Exibe dividas\n3-Sair ";
		 cin>>n;
			if (n==1){
				cout<<"Digite o nome da empresa que deseja buscar: ";
				string name;
				cin>>name;
				busca(vet,cont,name);
			}
			if (n==2){
				mergesort(0,cont,vet);
				for(int i=0;i<cont;i++){
					cout<<"\nNome: "<<vet[i].nome;
					cout<<"\nDivida de 2011: "<<vet[i].d1;
					cout<<"\nDivida de 2010: "<<vet[i].d2;
					cout<<"\nDivida total: "<<vet[i].d2+vet[i].d1<<endl;
				}
				cout<<endl;
			}
			if (n==3)break;
		}
}
