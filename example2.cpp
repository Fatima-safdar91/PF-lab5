#include<iostream>
using namespace std;

float division(float number1 ,float number2 );
int maximun(int number1 ,int number2);
int addition(number1 ,number2);
 int main()
{
  float num1;
  float num2;
  float result;
  float total;
  

  cout <<" enter 1st number:";
  cin >> num1;
  cout <<" enter 2nd number:";
  cin >> num2;

  result=division(num1, num2);
  cout << "division is:" << result << endl ;

  total=maximun( num1 , num2);
  cout << "maximum is:" << total ;
 
}
  int addition(number1 ,number2)
{
  int sum;
  sum=number1+number2;
  return sum;
}

  float division(float number1 ,float number2 )
{  
   float division;
   division=number1/number2;
   return division;
}
  int maximun(int number1 ,int number2)
{ 
    if(number1 > number2)
  { return number1;
  }
    if(number1 < number2)
  { return number2;
  }
     return 0;
}