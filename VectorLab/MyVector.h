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

	~if (myArray != NULL) {
		delete[] myArray;
	}

}

void push(T myObject);

void pop();

T elemAtRank(int myRank);

void replaceAtRank(int myRank, T myObject);

void insertAtRank(int myRank, T myObject);

void deleteAtRank(int myRank) {
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
	void doubleSize() {
		T* temp = new T[2 * capacity];
		// copy elements to new array 
		for (int i = 0; i < counter; i++) {
			temp[1] = myArray[i];
		}
		delete myArray = temp;
		myArray = templ
			this->scapacity = 2 * capacity;
	}




};

#endif

/*

#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <string>

using namespace std;

template<class T>
class MyVector{

public:
	int counter;
	int capacity;
	T* arrPtr;

	MyVector(int size){
		counter = 0;
		this->capacity = size;
		arrPtr = new T[size];

		//avoid looping and assigning all element to zero at start, for some reason don't work
		//besides this vector is dynamci so you don't want to assign a type anyways because you don't know what type it will be
		//for(int i=0; i<size; i++){
		//	push(0);
		//}
		
	}

	void push(int n){
		if(counter < capacity){
			arrPtr[counter] = n;
			counter++;
		}
	}

	void pop(){
		arrPtr[counter-1] = 0;
		counter--;
	}

	void show(){
		for(int i = 0; i<counter; i++){
			cout << arrPtr[i] << ", ";
		}
		cout << endl;
		cout << "Capacity: " << capacity << endl;
		cout << "Current Size: " << counter << endl;
	}


	~MyVector(){
		//something
		delete arrPtr;
	}

};

//#endif

*\