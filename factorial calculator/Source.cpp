#include <iostream>
using namespace std;

unsigned long long Fact(int x) {
    if (x < 0) {
        cout << "error" << endl;
        return 0;
    }

    if (x > 20) {
        cout << "error: factorial is so large" << endl;
        return 0;
    }

    unsigned long long fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int x;
    cout << "enter your number (0-20): ";
    cin >> x;

    unsigned long long result = Fact(x);
    if (result != 0) {
        cout << "The factorial of " << x << " is " << result << endl;
    }

    return 0;
}