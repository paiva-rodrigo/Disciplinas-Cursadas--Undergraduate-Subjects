#include <iostream>
using namespace std;
int main(){
	char rjno[50];
     
	 cout<<"Digite um nome:\n";
	 cin.getline(rjno,50);
	 cout<<"o nome digitado foi:\n";
	  if(rjno[0]=='a' ||rjno[0]=='A'){
	  	cout<<rjno;
	  }	
	return 0;
    }
