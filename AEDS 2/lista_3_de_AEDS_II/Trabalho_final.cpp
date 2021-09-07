#include<fstream>
#include<iostream>
using namespace std;
struct produto{
	string Nome;
    double Preco;
    long Quantidade; 
    produto *pt;
};
void insere(string n,double pr, long quant,produto *dado){
	produto *no1,*no2;
	no1=dado;
	no2=no1->pt;
		while(no2!=NULL && no2->Nome<n){
			no1=no2;
			no2=no2->pt;
		}
	produto *novo=new produto;
	novo->Nome=n;
	novo->Preco=pr;
	novo->Quantidade=quant;
	novo->pt=no2;
	no1->pt=novo;
}
void ler(produto *lst){
	ifstream fin("dados.txt");
	string nome;
	double preco;
	long estoque;
		while(fin>>nome){
			fin>>preco>>estoque;
			insere(nome,preco,estoque,lst);
		}
	fin.close();
}
produto *Busca(string name,produto *pont){
 produto *nav;
 nav=pont->pt;
	  while(nav!=NULL && nav->Nome!=name){
	  	 nav=nav->pt;
	  }  
 return nav;
}
void imprime(produto *pont){
 produto *nav;
 cout<<"Os dados dos produtos sao:";
	  for(nav=pont->pt;nav!=NULL;nav=nav->pt){
	   cout<<"\nProduto: "<<nav->Nome;
	   cout<<"\nPreco: "<<nav->Preco;
	   cout<<"\nQuantidade em estoque: "<<nav->Quantidade;
	  }
}
void salvar(produto *pont){
	ofstream lele("dados.txt");
	produto *nav;
        for(nav=pont->pt;nav!=NULL;nav=nav->pt){
		   lele<<"\n"<<nav->Nome;
		   lele<<"\n"<<nav->Preco;
		   lele<<"\n"<<nav->Quantidade;
        }
        lele.close();
}
int main(){
	produto *nota;
	produto cabeca;
	cabeca.pt=NULL;
	nota=&cabeca;
	ler(nota);
		while(1){
		cout<<"\n************************************************";
		cout<<"*Escolha a opcao\n1 - Inserir novo produto\n2 - Procurar um produto\n3 - Imprime todos";
		cout<<"\n4 - Salvar informacoes no HD\n5 - Sair:*";
		cout<<"\n************************************************\n";
	int n;
	cin>>n;
		if(n==1){
			 cout<<"\nDigite o nome do produto: ";
			 string nome;
			 cin>>nome;
			 cout<<"Digite o preco desse produto: ";
			 double p;
			 cin>>p;	
			 cout<<"Digite a quantia que se tem em estoque: ";
			 long q;
			 cin>>q;
			 insere(nome,p,q,nota);
		}
		if(n==2){
			cout<<"\nDigite o nome do produto que voce quer buscar: ";
			string no;
			cin>>no;
			produto *bu=Busca(no,nota);
		     s if(bu==NULL) cout<<"O produto  "<<no<<" nao foi encontrado";
	          else{
			       cout<<"O produto "<<no<<" foi encontrado";
			       cout<<"\nDados do produto sao: "; 
			       cout<<"\nNome: "<<no;
			       cout<<"\npreco: "<<bu->Preco;
			       cout<<"\nquantidade em estoque: "<<bu->Quantidade;
		  	  }
	    }
		if(n==3){
	    	imprime(nota);
		}
		if(n==4){
			salvar(nota);
		}
		if(n==5)break;
  }
}
