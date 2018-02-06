//Author: Cristina Perez
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int wholeNumber1;
int wholeNumber2;
int biggest;
  cout<<"Please enter a whole number:\n";
  cin>>wholeNumber1;
  cout<<"Please enter another whole number:\n";
  cin>>wholeNumber2;
  
  if(wholeNumber1>wholeNumber2)
  {
    biggest=wholeNumber1;
    }
    else
    {
    biggest=wholeNumber2;
    }

  cout<<"Of those two numbers, the biggest is: "<<biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
