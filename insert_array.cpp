#include <iostream>
using namespace std;
int main(){
    // Define an arrays
    int arr[20], n, loc ,x ,j, i;
    cout << "Enter no. of elements of array: " << endl;
    cin >> n;
    cout << "Enter elments of array: " << endl;
    for (i=1; i<=n; i++){
        cin >> arr[i];
        }
        
    cout<< "Enter location where you want to insert element in array: \n" ;
    cin >> loc;
    cout<< "Enter element to be insert \n";
    cin >> x;
    j=n;
    while (j>=loc){
        arr[j+1]= arr[j];
        j=j-1;
            }
    arr[loc]= x;
    n=n+1;
    cout << "Elements of array are:  \n" ;
    for(i=1; i<=n; i++){
        cout<<arr[i] << endl;
    }
    cout << " Program created by Rohit Kumar(GU-2023-1634)";   
}


