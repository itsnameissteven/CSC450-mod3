#include <iostream>
#include <limits>

using namespace std;

// Get a number input from the user
int getInputFromUser() {
  int input;

  cout << "Enter a number: ";
  
  while (true)
  {
    cin >> input;

    if(cin.fail()) { // Check if number was input
      cin.clear(); // Clear input and ignore next line
      std::cin.ignore(100, '\n');
      cout << "Incorrect input, please add a NUMBER" << endl;
    } else {
      break; // Stop loop when correct input is received
    }
  }

  return input; 
}

int main () {
  int inputOne, inputTwo, inputThree;
  
  // Get user inputs
  inputOne = getInputFromUser();
  inputTwo = getInputFromUser();
  inputThree = getInputFromUser();

  int* pointerOne;
  int* pointerTwo;
  int* pointerThree;

  // Create pointers to the values
  pointerOne = new int(inputOne);
  pointerTwo = new int(inputTwo);
  pointerThree = new int(inputThree);

  cout << "Stored values: " << endl;
  cout << "Value one: " << inputOne << ", Pointer one value: " << *pointerOne << ", Pointer one location: " << pointerOne << endl;
  cout << "Value two: " << inputTwo << ", Pointer two value: " << *pointerTwo << ", Pointer two location: " << pointerTwo << endl;
  cout << "Value three: " << inputThree << ", Pointer three value: " << *pointerThree  << ", Pointer three location: " << pointerThree << endl;

  // Delete pointer to free up memory
  delete pointerOne;
  delete pointerTwo;
  delete pointerThree;

  return 0;
}
