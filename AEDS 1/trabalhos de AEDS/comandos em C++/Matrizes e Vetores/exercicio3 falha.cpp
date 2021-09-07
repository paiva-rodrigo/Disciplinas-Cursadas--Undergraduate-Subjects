#include<iostream>
 using namespace std;
 int main(){
 	float rjp[10],rjp1,rjrj,rjrj1;

       cout<<"Abaixo digite 10 numeros de um vetor:\n";
 	   cout<<"Digite o "<<1<<"o numero do vetor:";
 	   cin>>rjp[0];
 	   rjrj=rjp[0];
 	   rjrj1=rjp[0];
	   for(int r=1;r<10;r++){
 		cout<<"Digite o "<<r+1<<" numero do vetor:";
 		cin>>rjp[r];
 		if(rjrj<=rjp[r]){
 		    rjrj=rjp[r];
		  }
		 else{
		    rjrj1=rjp[r];
		 }
	   }
	   for(int r=0;r<10;r++){
            if(rjp[r]==rjrj){
 		        cout<<"\nO maior  numero do vetor e o "<<rjp[r]<<" e  esta na "<<r+1<<"a posicao";
            }
            if(rjp[r]==rjrj1){
 		        cout<<"\nO menor  numero do vetor e o "<<rjp[r]<<" e esta na " <<r+1<<"a posicao";
            }
	   }


  return 0;
}


