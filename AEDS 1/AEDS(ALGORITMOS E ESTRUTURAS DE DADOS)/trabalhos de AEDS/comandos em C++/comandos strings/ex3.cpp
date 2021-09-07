#include <iostream>
#include<ctype.h>
using namespace std;
int main(){
	char rjno[50],rjso[50];
	int r=0,j=0;
	cout<<"Digite o seu nome:\n";
	cin.getline(rjno,50);
	cout<<"Digite o seu sobrenome:\n";
	cin.getline(rjso,50);
	 while( rjso[r] !='\0'){
	  rjso[r]=toupper(rjso[r]);
	 r++;
    }
      while(rjno[j] !='\0'){
    	rjno[j]=toupper(rjno[j]);
      j++;
	}
    
    cout<<"A sua concatenacao sobrenome/nome e:\n"<<rjso<<" "<<rjno;
	 
	
	return 0;
    }
	

