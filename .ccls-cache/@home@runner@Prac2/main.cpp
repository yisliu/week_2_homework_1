#include <iostream>
using namespace std;

int main() {
  //the variable used to convert the character
  char a;
  //to store input from user
  int b;
  cout<<"Enter a number from 33 to 126:\n";
  cin>>b;
  //prevents numbers smaller than 33 or bigger than 126
  while(b<33 or b>126){
    cout<<"Enter a number from 33 to 126:\n";
    cin>>b;
  }
  //converts the input into a char
  a=b;
  cout<<a;
}