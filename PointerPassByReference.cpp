// Pass-by-Reference with a pointeer argument used to cube a variable's value
#include <iostream> 
using namespace std;

void cubeByReFerence(int*); // prototype 


int main() {
    int number(29); 
    cout << "The original value of number is: " << number;
    cubeByReFerence(&number); ///pass number address to cubeByReFerence
    cout << "\nThe new value of number is: " << number << endl; 
}

//calculate cube of *nPtr; modifies variable number in win  


void cubeByReFerence(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}



// GT4 DOUBLE* DOUBLEPTR{NULLPTR};