#include <iostream>
using namespace std;
   char perfecto(int n) {
	int acumular = 0;
   	for (int i=1; i<n ; i++){
		   if (n % i == 0){
		   	acumular = acumular + i;
		   } 
	   }
    if (acumular == n){
	    return 'P'; 
    } else {
	 	return 'N';
	 } 
}
	 
	 int main () {
	 	int num1;
	 	cout << "Escribe el numero" << endl;
	 	cin >> num1;
	 	cout << perfecto(num1);
	 }