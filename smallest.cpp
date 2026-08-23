#include <iostream>
using namespace std;

int main() {
    int n, i, smallest;

    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    smallest = arr[0];
    for (i = 1; i < n; i++) { 
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << smallest << endl;

    return 0;
}