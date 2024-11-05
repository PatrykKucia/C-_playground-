//int i = 3; 

// A pointer to variable i or "stores the address of i"
//int *ptr = &i; 

// A reference (or alias) for i.
//int &ref = i; 

// int a = 10;
// int &p = a; // It is correct
// // but
// int &p;
// p = a; // It is incorrect as we should declare and initialize references at single step


// A pointer can be re-assigned. This property is useful for the implementation of data structures like a linked list, a tree, etc. See the following example: 
// int a = 5;
// int b = 6;
// int *p;
// p = &a;
// p = &b;

// On the other hand, a reference cannot be re-assigned, and must be assigned at initialization.
// int a = 5;
// int b = 6;
// int &p = a;
// int &p = b; // This will throw an error of "multiple declaration is not allowed"

// // However it is valid statement,
// int &q = p;

//int &p = a;
//cout << &p << endl << &a; // Both will print the same address

//NULL value: A pointer can be assigned NULL directly, whereas a reference cannot be.

//Use references: 
//  In function parameters and return types.
// Example of using references in function parameters

# include <iostream> 

using namespace std;

/////////////////////////////////////
// void increment(int &n) {
//     n++;
// }

// int main() {
//     int num = 10;
//     increment(num);
//     cout << "Incremented value: " << num << endl; // Output will be 11
//     return 0;
// }

/////////////////////////////////////
// Example of using references in function return types

// int& getElement(int* arr, int index) {
//     return arr[index];
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     getElement(arr, 2) = 10; // Modify the third element
//     cout << "Modified array: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl; // Output will be 1 2 10 4 5
//     return 0;
// }

//same but pointer
int* getElement(int* arr, int index) {
    return &arr[index];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    *getElement(arr, 2) = 10; // Modify the third element
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Output will be 1 2 10 4 5
    return 0;
}
//Use pointers: 
//  If pointer arithmetic or passing a NULL pointer is needed. For example, for arrays (Note that accessing an array is implemented using pointer arithmetic).
//  To implement data structures like a linked list, a tree, etc. and their algorithms. This is so because, in order to point to different cells, we have to use the concept of pointers.