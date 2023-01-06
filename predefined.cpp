#include<iostream>
#include<cmath>
using namespace std ;

main()
{
  int num1;
  int num2;
  int greater;
  int minimum;
  int power;
  float squareroot;
  float cuberoot;
  float
  
  cout << "enter 1st num:";
  cin >> num1;
  cout << " enter 2nd num:";
  cin >> num2;

  greater= max(num1,num2);
  cout << greater << " is greater !" << endl;
 
  minimum= min(num1,num2);
  cout << minimum << " is smaller !" << endl;
  
  power=pow(num1, num2);
  cout << "power is:" << power << endl;
 
  squareroot=sqrt(num1);
  cout << "squareroot is:" << squareroot << endl;

  cuberoot=cbrt(num2);
  cout << "cuberoot is:" << cuberoot << endl;
}
