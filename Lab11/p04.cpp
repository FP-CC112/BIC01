/*scribir una función lógica Vocal que determine
 si un carácter es una vocal*/
#include<iostream>
using namespace std;

bool vocal(char n);

int main(){
    char car;
    cout<<"digite un caracter: ";
    cin>>car;
    if(vocal(car)==true){
        cout<<"es vocal"<<endl;
    }else{
        cout<<"no es vocal"<<endl;
    }
    return 0; 
}

bool vocal(char n){
    bool vocal;
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'){
        vocal=true;
    }else if (n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
        vocal=true;
    }else{
        vocal = false;
    }
    return vocal;
}