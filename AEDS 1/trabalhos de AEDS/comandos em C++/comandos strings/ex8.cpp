#include <iostream>
using namespace std;
int main(){
 char rjp[50];
 int rj=0;
 
 cout<<"Digite uma frase: \n";
 cin.getline(rjp,50);
 
 for(int r=0;r<50;r++){
 	if(rjp[r]==' '){
 	   if(rjp[r+1]==' '){
 		rjp[r]=' ';
 		rj=1;
	    } 
    }
 }
 if(rj==0){
 	int j=0;
 	while(rjp[j]!='\0'){
 	 if(rjp[j]!=' '){
 	  cout<<rjp[j];
	  }
 	 
 	  j++;
	 }
 	
 }
 return 0;
}
