#include <iostream>

using namespace std;

int main(){
  //Array declaration
  int numberArray[10];

//For loop that reads and outputs the array to console
for(int i = 0; i < 10; ++i){
  cin >> numberArray[i];
  cout << numberArray[i] << endl;
}
return 0;
}
