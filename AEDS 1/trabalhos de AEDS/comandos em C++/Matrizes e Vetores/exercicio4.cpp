#include<iostream>
 using namespace std;
 int main(){
    int	rjp1[5],rjp2[5],rjp3[5];
    cout<<"Digite abaixo o valor de 5 numeros em dois vetores:\n";
 	for(int r=0;r<5;r++){
 		cout<<"Digite o "<<r+1<<" numero do 1o vetor :  ";
 		cin>>rjp1[r];
	 }
	for(int r=0;r<5;r++){
 		cout<<"Digite o "<<r+1<<" numero do 2o vetor :  ";
 		cin>>rjp2[r];
	 }
	 for(int r=0;r<5;r++){
	 if(rjp2[r]==rjp1[r]);
	    }
	     else{
            rjp3[r]=0;
	     }
     }
	 cout<<"\nO vetor com os numeros intersecao dos vetores acima e:\n";
    for(int r=0;r<5;r++){
          if(rjp3[r]!=0){
            cout<<rjp3[r]<<" ";
          }
          else{
            cout<<"  ";
          }
    }
  return 0;
}
