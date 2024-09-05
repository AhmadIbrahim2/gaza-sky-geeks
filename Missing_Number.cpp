#include <iostream>
#include <vector>
using namespace std;

int missingNumber(int n, vector<int>& arr)
{
    int sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int expected = (n * (n + 1)) / 2;
    return expected - sum;
}

int main()
{
    vector<int> sol = { 2, 1, 5, 4, 6, 9, 7, 8, 10 };
    int num = 10;
    cout << missingNumber(num, sol);
    return 0;
}