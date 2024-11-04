// Data Structure	Description
// Vector	        Stores elements like an array but can dynamically change in size. Adding and removing of elements are usually done at the end. Elements can be accessed by index.
// List	            Stores elements sequentially, where each element is connected to the next. Adding and removing of elements can be done at both ends. Not accessible by index.
// Stack	        Stores elements in a specific order, called LIFO (Last In, First Out), where elements can only be added and removed from the top. Not accessible by index.
// Queue	        Stores elements in a specific order, called FIFO (First In, First Out), where elements are added at the end and removed from the front. Not accessible by index.
// Deque	        Stores elements in a double-ended queue, where elements can be added and removed from both ends. Elements can be accessed by index.
// Set	            Stores unique elements. Not accessible by index.
// Map	            Stores elements in "key/value" pairs. Accessible by keys (not by index).

#include <list>
#include <iostream>
#include <string>

using namespace std;

int main(){
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

for (string car : cars) {
  cout << car << "\n";
}

// Get the first element
cout <<" Get the first element: "<< cars.front() << "\n";

// Get the last element
cout <<" Get the last element: "<< cars.back() << "\n";

// Change the value of the last element
cars.back() = "Toyota";
// Get the last element
cout <<" Get the last element: "<< cars.back() << "\n";

// Remove the first element
cars.pop_front();

// Remove the last element
cars.pop_back();

// Add an element at the beginning
cars.push_front("Tesla");

// Add an element at the end
cars.push_back("VW");

//find if list is empty
cout << cars.empty();  // Outputs 1 (The vector is empty)

for (string car : cars) {
  cout << car << "\n";
}

//inserting at index


// initializing list iterator to beginning
list<string>::iterator it = cars.begin();
 advance(it, 2);
 cars.insert(it, "honda");

for (string car : cars) {
  cout << car << "\n";
}

return 0;     
}