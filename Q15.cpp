#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1; 

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The first " << n << " natural numbers are: " << endl;

    while (i <= n) {
        cout << i << " ";

    }

    cout << endl;
    return 0;
}

