#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int l) { // There are a bunch of ways you could do this, I thought bubble sort would be the easiest
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int addresses[5] = {24, 38, 32, 36, 40};
    int data[5] = {2, 4, 3, 6, 1};
    int addLength = sizeof(addresses) / sizeof(addresses[0]); // https://www.geeksforgeeks.org/length-of-array-in-c/
    int dataLength = sizeof(data) / sizeof(data[0]);

    bubbleSort(addresses, addLength); // Sorts the addresses
    bubbleSort(data, dataLength); // Sorts the data

    for (int i = 0; i < dataLength; i++) {
        printf("%d\t%d\n", addresses[i], data[i]);
    } // Prints the sorted list 

    return 0;
    // This was a pain to run, found something on stackoverflow that helped
    // https://stackoverflow.com/questions/32337643/how-can-i-run-a-c-program-on-mac-os-x-using-terminal
}