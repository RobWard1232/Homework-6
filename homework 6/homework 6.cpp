#include <iostream>

using namespace std;

/*
I tried my best to work on my comments in my code, let me know if it needs any changes.
I cant seem to find the rubric for the requirements, if you could share it with me or tell me where it is, 
that would be greatly appreciated.
*/

//reverse function
int reverse (int num) {
  //makes sure the reversed number is 0 at first each time.
  int reversedNumber = 0;

  //while loop to ensure that num is never 0.
  while (num != 0) {
    //creates a remainder variable
    int remainder = num % 10;

    //setting reversedNumber equivalent to whatever it was before (0) * 10 and then adds the remainder, this basically brings num down by one decimal each time the loop runs then truncates it.
    reversedNumber = reversedNumber * 10 + remainder;
    num /= 10;
  }
  return reversedNumber;
}

//garage payment calculation function
void calculateGarage (int hoursInput, int hoursInput2) {
// Constants for parking rates
const double oldRate = 3.75;
const double newRate = 5;

  //ensures the hoursInput is not over 24 hours
  if (hoursInput <= 24) {
    //checks if hoursInput is greater then 12
    if (hoursInput > 12) {
      hoursInput2 = hoursInput - 12;
      cout << endl << "Total cost: " << ((hoursInput - hoursInput2) * oldRate) + hoursInput2 * newRate 
        << endl << "Old rate: " << (hoursInput - hoursInput2) * 3.75 
        << endl << "New rate: " << hoursInput2 * newRate << endl << endl;
      //else statement if hoursInput is less then 12 hours
    } else {
      cout << endl << "Total cost: " << hoursInput * oldRate << endl;
    }
    //else statement if hoursInput is greater then 24
  } else {
    cout << endl << "sorry, but you stayed in the parking garage for too long." << endl << endl;
  }
}

//highest number function
void highestNum (int a[3]) {
  //if statements to check which number in the array is the highest.
  if (a[1] > a[2] && a[1] > a[3]) {
    cout << endl << "The answer is: " << a[1] << endl << endl;
  } else if (a[2] > a[1] && a[2] > a[3]) {
    cout << endl << "The answer is: " << a[2] << endl << endl;
  } else {
    cout << endl << "The answer is: " << a[3] << endl << endl;
  }
}

//main function
int main() {
  // Declare variables for various calculations
  int a[3];
  int n, reversedNumber = 0, remainder;
  int hoursInput, hoursInput2;

  
  //main menu inputs
  string input;

  // Main program loop
  while (true) {
    // Display program menu
    cout << "***** General Purpose Calculator Program *****" << endl;
    cout << "Please Select an Option by inputting its associated letter" << endl << endl;
    cout << "A) Determine Highest of Three Numbers." << endl << endl;
    cout << "B) Reverse a Number." << endl << endl;
    cout << "C) Calculate Parking Garage Charges." << endl << endl;
    cout << "D) Exit." << endl << endl << ": ";

    cin >> input;

    if (input == "A" || input == "a") {
      // Calculate and display the highest of three numbers
      cout << "Enter your three numbers: " << endl;
      cin >> a[1] >> a[2] >> a[3];

      //prints out the highest number using the highestNum function
      highestNum(a);
      
    } else if (input == "B" || input == "b") {
      // Reverse a number and display the result
      cout << "Please enter a number: " << endl;
      cin >> n;

      //creates an int to hold the reversed number
      reversedNumber = reverse(n);

      //prints the final reversed number
      cout << endl << "the reversed number is: " << reversedNumber << endl << endl;
      
    } else if (input == "C" || input == "c") {
      // Calculate parking garage charges and display the result
      cout << endl << "Enter the hours spent in the garage: " << endl;

      //inputs the amount of hours spent in the parking garage.
      cin >> hoursInput;

      cout << endl;

      //calls the calculategarage function to calculate all of the costs.
      calculateGarage(hoursInput, hoursInput2);

      cout << endl << endl;
      
    } else if (input == "D" || input == "d") {
      // Exits the program
      cout << "Goodbye." << endl;
      break;
    }
  }
  return 0;
}