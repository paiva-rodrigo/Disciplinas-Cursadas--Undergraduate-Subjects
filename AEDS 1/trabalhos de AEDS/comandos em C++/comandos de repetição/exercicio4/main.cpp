#include <iostream>

using namespace std;

int main(){

    int rjp1[10][5];

      for(int r=1;r<11;r++){
        cout<<endl;
        for(int j=1;j<6;j++){
                if(r*j>=10){
            cout<<r*j<<" ";
                }
                else{
                    cout<<r*j<<"  ";
                }
        }
     }

    return 0;
}
