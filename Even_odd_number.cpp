#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n < 2) {
        cout << "Array needs at least two elements." << endl;
        return 0;
    }

    int First_largest, Second_largest;
    int First_smallest, Second_smallest;

    if (arr[0] > arr[1]) {
        First_largest = arr[0];
        Second_largest = arr[1];
        First_smallest = arr[1];
        Second_smallest = arr[0];
    } else {
        First_largest = arr[1];
        Second_largest = arr[0];
        First_smallest = arr[0];
        Second_smallest = arr[1];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > First_largest) {
            Second_largest = First_largest;
            First_largest = arr[i];
        } else if (arr[i] > Second_largest && arr[i] != First_largest) {
            Second_largest = arr[i];
        }
        
        if (arr[i] < First_smallest) {
            Second_smallest = First_smallest;
            First_smallest = arr[i];
        } else if (arr[i] < Second_smallest && arr[i] != First_smallest) {
            Second_smallest = arr[i];
        }
    }
    
    cout << "Second Largest Element: " << Second_largest << endl;
    cout << "Second Smallest Element: " << Second_smallest << endl;
    
    return 0;
}
