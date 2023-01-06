#include<iostream>
using namespace std;

void  addition(int num1, int num2);

main()
{ int number1;
  int number2;
  cout << "enter 1st number:";
  cin >> number1;
  cout << "enter 2nd number:";
  cin >> number2;

  addition( number1, number2);
}

void addition(int num1, int num2)
{
  int sum;
  sum=num1 + num2;
  cout << "addition is:" << sum ;
}