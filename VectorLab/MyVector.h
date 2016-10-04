#ifndef MyVector_H
#def MyVector_H

// always put the #endif at the last line of the file so we 
//move this al the way down. i've put it there already. scroll down all the way.
//#endif // !1

using namespace std;

template<class T>
class MyVector(int MySize = 1) {

	counter = 0; // next available index 
	capacity = MySize;
	myArray = new T[MySize];

	// Default constructor

	// Modified Constructor 

}

void push() {
	// Add a new element to the end of the vector
	// Check if there is enough room
	// Insert the element to the end of the vector 
	// increase counter (variable for num of elements 
}

void pop() {
	// remove the last element from the vector
	// Check if Counter is 0 or not 
	// Simply decrease counter if not, do nothing otherwise

}

void elemAtRank() {
	// Returns the element at the user specified rank or index

}

void replaceAtRank() {
	// replace the element at the specified rank
}

void insertAtRank() {
	// Check capacity 
	// Make room by shifting elements forwards
	// Insert the element at the rank
	// Update counter
}

void deleteAtRank() {
	// Delete element at the specified rank 
	// Delete element at the rank by shifting elements backwards 
	// Update counter
}

void print() {

	// Use counter for point
}

~MyVector() {
	if (myArray != Null) {

		delete[] myArray;
	}

private:
	int counter;
	int capacity;
	T* myArray;
	void doubleSize();




};

#endif
