#include <iostream>
using namespace std;
int main(){
    int arr[20], srch, mid, low, high, i, size;
    // Enter size of array

    std::cout << "Enter size of array: " << std::endl;
    cin >> size;

    // Enter elements of array
    std::cout << "Enter elements of array: " << std::endl;
    for (i = 1; i<=size; i++){
        cin >> arr[i];
    }

    // Enter a number which you want to search in given array
    std::cout << "Enter element to search in array: " << std::endl;
    cin >> srch;

    low  = 0; // start point
    high = size - 1;  // end point

   // start loop
    while (low <= high )
    {
        mid = (low+high)/2;
        if (arr[mid] == srch){
            std::cout << "~~~ Element found at index: " <<  (mid) << "~~~" << std::endl;
            exit(0);
        }
        else if (srch> arr[mid])
        {
            low = mid + 1;
        }
        else if(srch<arr[mid]){
            high = mid - 1;
        }
    }
    
    // return if number is not found in the array
    std::cout << "~~~ Number is not found ~~~" << std::endl;
    return 0;
    

}

