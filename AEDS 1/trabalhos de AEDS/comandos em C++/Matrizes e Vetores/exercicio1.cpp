#include<iostream>
 using namespace std;

 int main(){

     int rjp,rjp1,rjrj[20],r=0;

      cout<<"Para saber os numeros pares entre dois numeros:\n";
      cout<<"Digite o 1o numero :\n";
      cin>>rjp;
      cout<<"Digite o 2o numero :\n";
      cin>>rjp1;
      if(rjp<rjp1){
      	for(rjp;rjp<rjp1;rjp++){
          if(rjp%2==0){
      		rjrj[r]=rjp;
      		r++;
		  }
	    }
	  }
	  else if(rjp<rjp1){
	  	for(rjp1;rjp1<rjp;rjp1++){
          if(rjp1%2==0){
      		rjrj[r]=rjp1;
      		r++;
		  }
	    }
	  }
	  else{
	  	cout<<"\n Ambos os numeros tem o mesmo valor!";
	  }
	  cout<<"Os 20 primeiros numeros pares entre esses dois numeros sao:\n";
	  for(int i=0;i<r;i++){
	  	cout<<rjrj[i]<<"  ";
	  }
 return 0;
 }
