#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Assuming the first element is the greatest
    int greatest = arr[0];
    
    // Loop through the array to find the greatest number
    for (int i = 1; i < n; ++i) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    
    cout << "The greatest number in the array is: " << greatest << endl;
    
    return 0;
}
