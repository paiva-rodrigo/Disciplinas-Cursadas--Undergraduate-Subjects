#include<iostream>        
#include <stdlib.h>
#include<fstream>
using namespace std;
 struct aluno{
	string nome;
	int nota;
 };
 int separa(int p, int r, aluno v[]){
	int  j, k;
	aluno c, t;
	c.nome = v[r].nome; j=p;
		for(k=p; k<r; k++){
			if(v[k].nome<= c.nome){
			  t.nome=v[j].nome; v[j].nome=v[k].nome; v[k].nome=t.nome;
			  t.nota=v[j].nota; v[j].nota=v[k].nota; v[k].nota=t.nota;
			  j++;
			}
		}
	return j;
 }
 void quicksort(int p, int r, aluno v[]){
	int j;
	if (p<r){
	j = separa(p,r,v);
	quicksort(p,j-1,v);
	quicksort(j+1,r,v);
	}
 }
 int main(){
	 ifstream ler1("turma.txt");
     string nome1;
     int cont=0;
       while(getline(ler1,nome1)){
      	 cont++;
	   }
	 aluno vet[cont];
	 ifstream ler2("turma.txt");
     string nome2;
     int j=0;
      while(getline(ler2,nome2)){
	       int ini=0,fim=0;
	       fim=nome2.find_first_of(';',ini);
	       vet[j].nome=nome2.substr(ini,fim-ini);
	       
	       ini=fim+1;
	       fim=nome2.find_first_of(';',ini);
	       string nota=nome2.substr(ini,fim-ini);
	       vet[j].nota=atof(nota.c_str());
	       j++;
      }
      quicksort(0,cont-1, vet);
      cout<<"lista de alunos aprovados:\n";
      for(int i=0;i<j;i++){
      	if(vet[i].nota>=60){
      		cout<<"Nome: "<<vet[i].nome;
      		cout<<"  Nota: "<<vet[i].nota<<"\n";
		  }
	  }  
	   cout<<"\nlista de alunos reprovados:\n";
	   for(int i=0;i<j;i++){
      	if(vet[i].nota<=60){
      		cout<<"Nome: "<<vet[i].nome;
      		cout<<"  Nota: "<<vet[i].nota<<"\n";
		  }
	  }  
  }
