#include<iostream>
 using namespace std;
  int main(){
  	int rjp,rjp1,rjp2;
  	
  	cout<<"digite um numero inteiro:\n";
  	cin>>rjp;
  	cout<<"digite um numero inteiro:\n";
	cin>>rjp1;
	cout<<" Digite 1 para somar\n Digite 2 para subtrair";
  	cout<<"\n Digite 3 para multiplicar\n Digite 4 para dividir\n Digite 5 para sair\n";
	cin>>rjp2;
	switch(rjp2){
	 case 1:
		cout<<rjp<<"+"<<rjp1<<"="<<rjp+rjp1 ;
		break;
     case 2:
        cout<<rjp<<"-"<<rjp1<<"="<<rjp-rjp1 ;
		break;
     case 3:
		cout<<rjp<<"*"<<rjp1<<"="<<rjp*rjp1 ; 
		break;
     case  4:
		cout<<rjp<<"/"<<rjp1<<"="<<rjp/rjp1 ;
		break;    
	case 5:
	    break;
   	 default:
	   cout<<"voce digitou um numero que nao esta no menu!";
        break;
    	}
	  	return 0;
		    }
