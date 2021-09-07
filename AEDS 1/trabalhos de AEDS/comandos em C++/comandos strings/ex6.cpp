#include <iostream>
using namespace std;
int main(){
	char rjno[50];
    int rjvo=0,rjco=0,r=0;
	 cout<<"Digite um nome:\n";
	 cin.getline(rjno,50);
	 while(rjno[r] !='\0'){
	  if(rjno[r]=='a'||rjno[r]=='e'||rjno[r]=='i'||rjno[r]=='o'||rjno[r]=='u'){
	  	rjvo+=1;
	  }
	  else if(rjno[r]=='A'||rjno[r]=='E'||rjno[r]=='I'||rjno[r]=='O'||rjno[r]=='U'){
	  	rjvo+=1;
	  }
	  else{
	  	rjco+=1;
	  }
	 r++;
     }
	 cout<<"o nome digitado foi:\n"<<rjno<<"\ne nele foram digitadas "\
	 <<rjvo<<" vogais e "<<rjco<<" consoantes.";
	 
	 return 0;
    }
