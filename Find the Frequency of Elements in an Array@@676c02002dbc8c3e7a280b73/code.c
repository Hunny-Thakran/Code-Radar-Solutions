// Your code here...
#include<stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int frequency[n]; // Array to store frequencies

    // Initialize frequency array with 0
    for (int i = 0; i < n; i++) {
        frequency[i] = 0;
    }

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++; // Increment the frequency of the element
    }

    // Print the frequency of each element
    for (int i = 0; i < n; i++) {
        if (frequency[i] > 0) { // Check if the frequency is greater than 0
            printf("%d %d\n", i, frequency[i]);
        }
    }

    return 0;
}