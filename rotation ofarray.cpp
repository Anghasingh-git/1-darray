 #include <iostream>
using namespace std;

int main() {
    int i, n, k, temp;

    cout << "size" << endl;
    cin >> n;

    int arr[n];

    cout << "elements" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "enter k" << endl;
    cin >> k;

    int size = sizeof(arr) / sizeof(int);

   
    if (k % size != 0) {
        int rotations = k % size;

        for (int r = 0; r < rotations; r++) {
            temp = arr[n - 1]; 

           
            for (i = n - 1; i > 0; i--) {
                arr[i] = arr[i - 1];
            }

            arr[0] = temp; 
        }

      
        for (i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
    }             

    
    if (k % size == 0) {
        for (i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}