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

//-------------------- start of .h                                                  
#ifndef VEC_H
#define VEC_H

template<class T>
class Vec{
 
 public:
    int counter;
    int cap;
    T* arr;
    
    //constructor
    Vec(int size);
    ~Vec();
    
    bool canPush();
    void show();
    
    void pop();
    void push(T element);
 
 
};
#endif
//------------------------- end of .h

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //typedef Vec<int> MyVec;
    //typedef Vec MyVec;
    
    Vec<string> v(5);
    
    v.push("I");
    v.push("Am");
    v.push("Cool");
    v.pop();
    
    v.push("Super");
    
    v.show();
    //cout << "ID: " << v.id << endl;
    
  //std::string name;
  //std::cout << "What is your name? ";
  //getline (std::cin, name);
  std::cout << "Hello lets get started " << "!\n";
}


template<class T>
Vec<T>::Vec(int size){
    cap = size;
    counter = 0;
    arr = new T[size];
}


template<class T>
Vec<T>::~Vec(){
    counter = 0;
}

template<class T>
void Vec<T>::pop(){
    
    if(counter > 0){
        //do not reset any, just remove the counter, since you can't replace c style array with new element
        //arr[counter-1] = NULL;
        cout << "popping" << endl; 
        counter--;
    }
}

template<class T>
void Vec<T>::push(T element){
    if(canPush()){
        arr[counter] = element;
        counter++;
    }
}

template<class T>
bool Vec<T>::canPush(){
    if(counter >= cap){
     return false;   
    }
    return true;
}

template<class T>
void Vec<T>::show(){
 cout << "size: " << cap << " - counter: " << counter << endl;
 for(int i=0; i<counter; i++){
  cout << arr[i] << ", ";   
 }
 cout << endl;
}



*\