#include<iostream>
using namespace std;
 int main(){
 	
 	for(int r=0;r<6;r++){
 	   	for(int j=0;j<6;j++){
 	   		if(r==j){
				cout<<0<<" ";
			}
			else{
				cout<<1<<" ";
			}
    	}
		cout<<endl;	
	}
 	
  return 0;	
 }
