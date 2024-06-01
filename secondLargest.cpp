#include <iostream>
using namespace std;
int main() {
    // Define the size of the array
    const int size = 10;
    // Initialize the array with some elements
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Initialize the first and second largest to appropriate values
    int firstLargest = arr[0];
    int secondLargest = arr[0];
    // Find the largest element to initialize firstLargest properly
    for (int i = 1; i < size; ++i) {
        if (arr[i] > firstLargest) {
            firstLargest = arr[i];
        }
    }
    // Find the second largest element
    bool foundSecond = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] != firstLargest) {
            if (!foundSecond || arr[i] > secondLargest) {
                secondLargest = arr[i];
                foundSecond = true;
            }
        }
    }
    
    // Check if second largest exists
    if (!foundSecond) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }
    
    return 0;
}
