#include <iostream>
using namespace std;
int main() {

  int first_number;
  int second_number;
  int sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sum;   
  if(sum>=100)  
  { 
    cout<<"\n awsm!";
  }
  else
  {
    cout<<"\n adding......"<<sum<<"+100 ="<<sum+100<<"\n..awsm! ";
  }

  return 0;
}