#include<iostream>
using namespace std;
 int main(){

 	for(int r=0;r<5;r++){
 	   cout<<endl;
 	   for(int j=0;j<5;j++){
 		 if(r>j){
 		 	 cout<<3*r*r-1<<"\t"; 
 		 }
		 else if(r<j){
		 	  cout<<4*r*r*r-3*j*j+1<<"\t";
		 }
		 else{
		 	  cout<<2*r+7*j-2<<"\t"; 
 	        }
 	    }
 	}
 	
 	return 0;
 }
