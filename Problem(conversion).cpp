#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Function prototype
void userInput(double& feet, double& inches);
void convertLength(double feet, double inches, double& meters, double& centimeters);
void output(double feet, double inches, double meters, double centimeters);

int main(){
  //Variable declaration
  double feet, inches, meters, centimeters;
  string user;

//Loop until user types 'exit'
do {
    userInput(feet, inches);
    convertLength(feet, inches, meters, centimeters);
    output(feet, inches, meters, centimeters);

    cout << "Please type 'yes' to continue or type 'exit' to quit: " ;
    cin >> user;
    }
while (user == "yes" || user == "Yes");

return 0;
}

//Prompts the user and reads the input
void userInput(double& feet, double& inches){
  cout << "Enter feet: ";
  cin >> feet;
  cout << "Enter inches: ";
  cin >> inches;
}

//Computes the length of meters and centimeters based on user input
void convertLength(double feet, double inches, double& meters, double& centimeters){
  meters = feet * 0.3048;
  centimeters = inches * 2.54;
}

//Will output to console when the function is called
void output(double feet, double inches, double meters, double centimeters){
  cout << "The equivalent length is: " << meters << " meters and " << centimeters << " centimeters" << endl;
}
