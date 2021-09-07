#include<iostream>
 using namespace std;
  int main(){
  	int rjp;
  	cout<<"digite um ano:\n";
  	cin>>rjp;
  	if(rjp%4==0 && rjp%100!=0){
  		cout<<endl<<"O ano digitado e bissexto!";
	  }
	else if(rjp%400==0){
	  	cout<<"O ano digitado e bissexto!";
	  }
	else{
	  	cout<<"O ano digitado nao e bissexto!";
	  }
  	
  	return 0;
		    }
