#include <iostream>
#include <cmath>

using namespace std;

float addTax(float taxRate, float cost){
  //Converts percent to decimal and returns cost after tax
  taxRate = (taxRate/100);
  cost = cost + (taxRate) * cost;

return cost;
}

int main(){
  //Calls addTax() function and outputs its return variable to console
  cout << "The total cost of the item is: $" << addTax(7.75, 112.90) << endl;

return 0;
}
