#include<iostream>
using namespace std;

bool vocal(char v){
	char vocales[10]={'a','e','i','o','u','A','E','I','O','U'};
	for (int i=0;i<10;i++){
		if(v==vocales[i]){
			return true;
		}
	}
	return false;
}
int main(){
	char l;
	cout<<"ingrese una letra: ";cin>>l;
	if(vocal(l)){
		cout<<l<<" es una vocal\n";
	}else{
		cout<<l<<" no es una vocal";
	}
	return 0;
}