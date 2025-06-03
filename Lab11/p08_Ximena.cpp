#include <iostream>
using namespace std;
bool primo(int n){
    if (n <= 1){
        return false;
    }
    for (int i=2; i<n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Ingresa un numero entero positivo: ";cin >> n;
    while(n<=0){
    	cout<<"\nel numero debe ser entero positivo: ";cin>>n;
	}
    if (primo(n)){
        cout <<n<< " es primo" << endl;
    }else{
        cout <<n<< " no es primo" << endl;
    }
    return 0;
}
