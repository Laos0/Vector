#include "MyVector.h"

using namespace std;
template<class>

void MyVector<T>::push(T MyObject) {
	// Add a new element to the end of the vector
	// Check if there is enough room
	// Insert the element to the end of the vector 
	// increase counter (variable for num of elements 
	if (this->counter != this->capacity) {
		this->myArray[this->counter] = myObject;
	}else{

		this->doubleSize();
		this->myArray(this->counter) = myObject;
	}
	counter++;
}

template<class T>
voiMyVector::pop() {
	// remove the last element from the vector
	// Check if Counter is 0 or not 
	// Simply decreas counter if not, do nothing otherwise
	if (this->counter == 0) {
		cout << "Tue vector is empty" << endl;
	}
	else {
		this->counter--;
	}

}
template<class T>
T MyVector::elementAtRank(int myRank) {
	// Returns the element at the user specified rank or index
	if (0 <= myRank < counter) {
		return MyVector[myRank; ]
	}
	else {
		cout << "The element is not in the vector" << endl;
	}
}
template<class T>
void MYVector::replaceAtrRank(int myRank, T myOBject) {
	// replace the element at the specified rank
	if (0 <= myRank < counter) {
		this->myArray[myRank] = myObject;
	}
	else {
		cout << "Te rank is not in the right range" << endl;
	}
}
template<class T>
void MyVector::insertAtRank(int myRank, T myObject) {
	// Check capacity 
	// Make room by shifting elements forwards
	// Insert the element at the rank
	// Update counter
	/
	if (0<=myRank < counter)
		if (couter == capacity) {
			this->doubleSize()
				//shifting 
				for9
				int i = counter; i > myrank; i--){
				this->myArray[i] = this->myArray(i - 1);
				
						}
						this->myArray[myRank] = myObject;
						counter++;
	}
	else {
		cout << "The rank is not in the right range" << endl;
	}
}

template<class T>
void MyVector::deleteAtRank(int myRank) {
	// Delete element at the specified rank 
	// Delete element at the rank by shifting elements backwards 
	// Update counter

	if (0 <= myRank < counter) {
		for (int i = myRank; i < couner; i++) {
			this->myArray[i] = this->myArray[i + 1];
		}
		counter--;
	}
	else {
		cout << " The rank is not in the right range" << endl;
	}

}

void MyVector::print() {
	// Use counter for point
	for (int i = 0; i < counter; i++) {
		cout << this->myArray[i];
	}
}