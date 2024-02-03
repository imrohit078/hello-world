#include <iostream>
using namespace std;
int main() {
    // Define an array
    int arr[20], i, n;
    cout << "Enter no. elements of array: " << endl;
    cin >> n;
    cout << "Enter elments of array: " << endl;
    for (i=0; i<n; i++){
        cin >> arr[i];
    
    }
    cout << "Elements in array: " << endl;
    for(i=0;i<n;i++){
        cout << arr[i] << std::endl;
        // getch;
    }
}


