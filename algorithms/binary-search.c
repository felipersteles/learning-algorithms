//
//  binary-search.c
//  learning-algs
//
//  Created by Felipe Teles on 15/09/24.
//

#include <stdio.h>

// Binary search in an int array
int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        
        // Divide and rule
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    // Element not found in the array
    return -1; 
}

int main(int argc, const char * argv[]) {
    
    // Test binary search on an array
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target = 15;
    
    int result = binary_search(arr, size, target);
    
    // Print the result of the search operation
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
