#include <iostream>
using namespace std;

void getFibonacci(int n) {
    int s1 = 0, s2 = 1, next = 0;

    cout << t1 << ", " << t2;

    for (int i = 1; i <= n - 2; ++i) {
        next = s1 + s2;
        cout << ", " << next;
        s1 = s2;
        s2 = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of numbers in sequence: ";
    cin >> n;

    if (n < 2) {
        cout << "must be greater than 1 number." << endl;
    }
    else {
        cout << "Fibonacci Sequence: ";
        getFibonacci(n);
    }

    return 0;
}