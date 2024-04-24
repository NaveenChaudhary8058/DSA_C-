#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter numbers: ";
    cin >> a;

    int b[a];


    cout << "Enter " << a << " numbers: ";
    for(int i = 0; i < a; i++) {
        cin >> b[i];
    }

    
    for(int i = 0; i < a/2; i++) {
        int c = b[i];
        b[i] = b[a - i - 1];
        b[a - i - 1] = c;
    }

    cout << "Reversed array:  " ;
    for(int i = 0; i < a; i++) {
        cout << b[i] <<" ";
    }
    cout << endl;

    return 0;
}