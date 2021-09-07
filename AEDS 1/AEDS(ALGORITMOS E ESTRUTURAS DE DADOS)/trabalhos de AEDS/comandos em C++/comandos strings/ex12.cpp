#include <iostream>
 using namespace std;
 int main(){

 int rj=0;
 char rjp[200]="A Universidade Federal de Sao Joao del-Rei UFSJ foi instalada "\
 "em 21 de abril de 1987 como Fundacao de Ensino Superior de Sao joao del-rei FUNREI";
  cout<<rjp<<endl;
  for(int r=0;r<200;r++){
 	if(rjp[r]==' '||rjp[r]=='-' ){
 		rj+=1;
	}
  }
  cout<<"O numero de palavras no texto acima e: "<<rj+1;

  return 0;
 }




