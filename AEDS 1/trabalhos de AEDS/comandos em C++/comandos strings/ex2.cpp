#include <iostream>
using namespace std;
int main(){

	char rjp[50];
		 
	cout << "Digite um nome: \n";
	cin.getline(rjp,50);
	cout<<"As 5 primeiras letras do nome sao:\n";
      for(int r=0;r<5;r++){
      	if(rjp[r] !='\0'){
      	cout<<rjp[r]<<",";
        }
	  }
	return 1;
	}
