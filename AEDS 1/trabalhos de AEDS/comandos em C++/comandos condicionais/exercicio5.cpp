#include<iostream>
 using namespace std;
  int main(){
  	int rjp,rjp1,rjp2;
  	
  	cout<<"digite um numero inteiro:\n";
  	cin>>rjp;
  	cout<<"digite um numero inteiro:\n";
	cin>>rjp1;
	cout<<" Digite 1 para somar\n Digi<<" \nDigite 3 para multiplicar\n Digite 4 para dividir\n Digite 5 para sair\n";
	cin>>rjp2;
	if(rjp2=1){
		cout<<rjp<<"+"<<rjp1<<"="<<rjp+rjp1;
	}
    else if(rjp2=2){
		cout<<rjp<<"-"<<rjp1<<"="<<rjp-rjp1;
	}
	else if(rjp2=3){
		cout<<rjp<<"*"<<rjp1<<"="<<rjp*rjp1;
    }
	else if(rjp2=4){
		cout<<rjp<<"/"<<rjp1<<"="<<rjp/rjp1;
	}
	else if(rjp2=5){
		return 0 ;
	}
	else{
		cout<<"opcao invalida!";
    }
	  	return 0;
		    }
