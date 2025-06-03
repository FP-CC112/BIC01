//YANELA V.//
#include <iostream>
using namespace std;

bool primo(int n);

int main(){
    int n;
    cout<<"digite un numero: ";
    cin>>n;

    if (primo(n)){
        cout<<"el numero es primo"<<endl;
    }else{
        cout<<"el numero no es primo"<<endl;
    }
    return 0;
}

bool primo (int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }else{
            return true;
        }
    }
}

