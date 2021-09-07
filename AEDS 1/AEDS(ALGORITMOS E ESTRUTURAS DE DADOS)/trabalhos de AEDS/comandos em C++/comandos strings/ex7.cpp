#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int rjp;
	char rjno[50],rjsex[50],rjma[10]="masculino";
	 
	cout<<"Digite o seu nome: ";
	cin.getline(rjno,50);
	cout<<"Digite o seu sexo (masculino ou feminino): ";
	cin.getline(rjsex,50);
	cout<<"Digite a sua idade: ";
	cin>>rjp;
	 if(strcmp(rjsex,rjma)==0 && rjp>=18){
	 	cout<<rjno<<" ACEITO";
	 }
	 else{
	 	cout<<"NAO ACEITO";
	 }
	return 0;
}
