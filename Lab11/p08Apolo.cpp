 #include <iostream>
using namespace std;
    bool primo(int n, int acumular =0) {
    if (n=!1){
   	for (int i=2; i<n ; i++){
		   if (n % i == 0){
		   	acumular = acumular + i;
		   } 
	   }
     if (acumular == 0){
	 return true ; } else {
	 	return false;
	 } } else { return false;} 
	 }
	 
	 int main () {
	 	int num1;
	 	cout << "Escribe el numero (primo --> 1, no primo --> 0)" << endl;
	 	cin >> num1;
	 	cout << primo(num1);
	 }