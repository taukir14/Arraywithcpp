#include <iostream>
using namespace std;

void change(int arr[]) {
    arr[0] = 100;
}

int main() {
    int a[3] = {1, 2, 3};
    change(a);

    cout << a[0];  // Output: 100
}