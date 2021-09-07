#include<iostream>
#include<fstream>
#include<time.h>
#include <stdlib.h>
using namespace std;
int main(){
	ofstream fout("numeros.txt");
	int n;
	cout<<"Quantos numeros deseja que sejam sorteados aleatoriamente e ordenados em ordem crescente depois? ";
	cin>>n;
	srand (time(NULL));
		for(int i=0;i<n;i++){
		 if(i==0){
			fout<<rand();
		 }
		 else{
			fout<<endl<<rand();
		 }	
		}
	cout<<"\nTodos os numeros foram sorteados!\n";
	cout<<endl<<"A ordenacao dos arquivos em ordem crescente e: ";
	 char ler[n];
	 ifstream leitura("numeros.txt");
	 int vet[n];
	 int x=0;
	 int save;
		 for(int r=0;r<n;r++){
		  for(int j=r+1;j<n;j++){
			if(vet[j]<vet[r]){
				save=vet[j];
				vet[j]=vet[r];
				vet[r]=save;
			} 	
		  }	
		 }
	for(int i=0;i<n;i++){
		cout<<endl<<vet[i]<<endl;
	}
	
}
