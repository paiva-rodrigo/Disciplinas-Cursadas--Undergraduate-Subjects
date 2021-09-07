#include<iostream>
 using namespace std;
  int main(){
  	float rjp,rjp1;
  	cout<<"digite o seu salario:";
  	cin>>rjp;
  	cout<<"digite qual o valor da pretacao que deseja:\n";
  	cin>>rjp1;
  	if(rjp1<=0.3*rjp){
  		cout<<endl<<"O seu emprestimo sera concedido!!!";
	  }
	  else{
	    cout<<endl<<"o seu emprestimo nao sera concedido";
	  }
  	return 0;
		    }
