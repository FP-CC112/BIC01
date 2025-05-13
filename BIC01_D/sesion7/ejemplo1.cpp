#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N (≥ 3): ";
    cin >> N;

    if (N < 3) {
        cout << "N debe ser mayor o igual a 3." << endl;   
    }else{ 
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N - i; j++) 
                cout << "  ";
            
            int num = 1;
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1) {
                    cout << "* ";
                } else {
                    cout << num << " ";
                    if (j < i) {
                        num++;  
                    } else {
                        num--; 
                    }
                }
            }
            cout << endl;
        }

        for (int i = N - 1; i >= 1; i--) {
            for (int j = 1; j <= N - i; j++) {
                cout << "  ";
            }

            int num = 1;
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1) {
                    cout << "* ";
                } else {
                    cout << num << " ";
                    if (j < i) {
                        num++;  
                    } else {
                        num--;  
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}