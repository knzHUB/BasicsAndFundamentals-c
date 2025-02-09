#include <iostream>
using namespace std;

const int SIZE = 10;

int main() {
    int arr1[SIZE], arr2[SIZE], mergedArr[2 * SIZE];
    int n1, n2;


    do {
        cout << "Number of Elements for the 1st array (0 to 1): ";
        cin >> n1;
        if (n1 < 0 || n1 > SIZE) {
            cout << "Please enter a Number between 0 and 10." << endl;
        }
    } while (n1 < 0 || n1 > SIZE);


    cout << "Elements for the 1st array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    do {
        cout << "Number of Elements for the 2nd array (0 to 10): ";
        cin >> n2;
        if (n2 < 0 || n2 > SIZE) {
            cout << "Please enter a Number between 0 and 10." << endl;
        }
    } while (n2 < 0 || n2 > SIZE);


    cout << "Elements for the 2nd array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }


    int totalElements = n1 + n2;
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }


    for (int i = 0; i < totalElements - 1; i++) {
        for (int j = 0; j < totalElements - i - 1; j++) {
            if (mergedArr[j] < mergedArr[j + 1]) {
                int temp = mergedArr[j];
                mergedArr[j] = mergedArr[j + 1];
                mergedArr[j + 1] = temp;
            }
        }
    }
    
    cout << "Merged array in descending order:";
    for (int i = 0; i < totalElements; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}