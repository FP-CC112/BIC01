#include <iostream>
using namespace std;

int main(){
    int a[] ={17, 23, 5, 11};
    int n = sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < n - 1;++i) {//pasadas
        for (int j = 0; j < n-1; ++j) { // comparaciones
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        } 
    }

    //muesta el arreglo
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0; 
}