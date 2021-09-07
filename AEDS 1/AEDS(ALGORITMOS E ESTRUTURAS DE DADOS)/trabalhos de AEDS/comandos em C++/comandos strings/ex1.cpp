#include <iostream>
using namespace std;
int main(){

   int j=0,jp=0,rj=0;
  char rjp[50],rjvo[50];

  cout<<"Digite uma palavra: ";
  cin.getline(rjp,50);
    for(int r=0;r<50;r++){
      if(rjp[r]!='\0'){
    	if(rjp[r]=='a' || rjp[r]=='e' || rjp[r]=='i' || rjp[r]=='o' || rjp[r]=='u'){
    		rjvo[jp]=rjp[r];
    		jp+=1;
		}
      }
	}
   cout<<"A palavra anterior e: \n"<<rjp;
   cout<<"\nO vetor com as vogais da palavra anterior e: \n";
    while(rj<=jp){
      	cout<<rjvo[rj]<<" ";
		  rj++;
	}
  return 0;
  }
