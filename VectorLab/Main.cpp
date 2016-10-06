#include "MyVector.h"
#include "MyVector.cpp"
#include <iostream>
#include <vector>

using namespace std; 

int main() {

	//MyVector myVector<int>(3);

	MyVector<int> theVector;
	while (true) {
		cout << "Enter 1 for push \n"
			<< " enter 2 for pop \n"
			<<"enter 3 for insert \n"
			<< "enter 4 for delete \n"
			<< "enter 999 for stop \n";
		int input;
		cin >> input;

		if (input == 999) {

			cout << "Stop" << endl;
			break;
		}

		int myValue;
		switch (input) {
		case 1: 
			cout << "What numbder do u want to push to vector?" << endl;
			cin >> myValue;
			theVector.push(myValue);
			cout << "the content of the vector after push: n\" << endl;
				theVector.print();
			break;
		case 2: 
			cout << "you have chosen to delete this. " << endl;
		case 3: 
			cout << "please enter the rank and the element that you wish to insert";
			cin >> myRank; 

		}
		case 4: 
			cout << "Which element do you wish to delete?" << endl;

			break;

	}

	system("pause");
}

sdasda