#include<iostream>
using namespace std;
int main(){
	int rjp,rjrj= 0;
	cout << "Digite um numero:\n";
	cin >> rjp;
    int rjp1[rjp][rjp];
	 for(int r=0;r<rjp; r++){
		for(int j=0; j<rjp; j++){
			if(r>=j){
				rjrj+= 1;
				rjp1[r][j] = rjrj;
			}
			else{
				rjp1[r][j] = 0;
			}
		}
	 }
	 for(int r=rjp-1;r>=0;r--){
       cout<<endl;
		for(int j=rjp-1;j>=0;j--){
			if(r>=j){
				cout<<rjp1[r][j]<<" ";
			}
		}
	 }
	return 0;
}
