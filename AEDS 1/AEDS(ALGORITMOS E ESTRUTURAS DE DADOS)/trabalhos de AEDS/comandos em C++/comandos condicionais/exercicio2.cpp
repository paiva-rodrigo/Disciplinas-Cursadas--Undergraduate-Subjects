#include<iostream>
 using namespace std;
  int main(){
  	int rjp;
     
     cout<<"Digite o valor de um numero inteiro entre 1 e 7";
     cout<<" que corresponda a sua ordem  quanto a dia da semana:\n";
	 cin>>rjp;
	 
	 switch(rjp){
	 	case 1:
	 	 cout<<"O respectivo dia da semana e Domingo";
	 	 break;
	 	case 2:
	 	 cout<<"O respectivo dia da semana e Segunda";
	 	 break;
	 	case 3:
	 	 cout<<"O respectivo dia da semana e Terca";
	 	 break;
	 	case 4:
	 	 cout<<"O respectivo dia da semana e Quarta";
	 	 break;
	 	case 5:
	 	 cout<<"O respectivo dia da semana e Quinta";
	 	 break;
	 	case 6:
	   	 cout<<"O respectivo dia da semana e Sexta";
	 	 break;
	 	case 7:
	 	 cout<<"O respectivo dia da semana e Sabado";
	 	 break;
	 	default:
	 	 cout<<"O número digitado nao esta no intervalo de 1 a 7!!!";
	    }
	  		
    return 0;}
