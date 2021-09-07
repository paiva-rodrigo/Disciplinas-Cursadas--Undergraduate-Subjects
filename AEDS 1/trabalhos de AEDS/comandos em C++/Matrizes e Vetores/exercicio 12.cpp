#include<iostream>
 using namespace std;
  int main(){
  	int rjp[4][4],rj=0;
  	cout<<"Para saber o valor da soma de todos os elementos de uma matriz 4 por 4:\n";
  	for(int r=0;r<4;r++){
  	   for(int j=0;j<4;j++){
  		 cout<<"Digite o numero ("<<r+1<<","<<j+1<<") da matriz:\n";
  		 cin>>rjp[r][j];
	  }
	}
	cout<<"A matriz digitada foi:";
	for(int r=0;r<4;r++){
		cout<<endl;
  	    for(int j=0;j<4;j++){
  		 cout<<rjp[r][j]<<" "; 
	      if(r>j){
	      	rj+=rjp[r][j];
		  }
	  }
	
	}
	
	cout<<"\nO valor da soma dos termos da matriz que estão acima da diadonal  principal e:"<<rj;
   return 0;
  }
