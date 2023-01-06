#include<iostream>
using namespace std;
string output1(int value1);

main()
{
while(true)
{
 int input,number1,number2;
 string no1,no2;
 cout << "Enter Your Number : ";
 cin>> input;
  number1=input/10; 
  number2=input%10;
  if(input>=10)
 {
  no1=output1(number1);
 }
  
}
}


string output1(int value1)
 {
 if(value1==1)
 {
 return "one";
 }
 if(value1==2)
 {
  return "twenty";
 }
  if(value1==3)
 {
  return "thirty";
 }
  if(value1==4)
 {
  return "fourty";
 }
  if(value1==5)
 {
  return "fifty";
 }
  if(value1==6)
 {
  return "sixty";
 }
  if(value1==7)
 {
  return "seventy";
 }
  if(value1==8){
  return "eight";
 }
  if(value1==9)
 {
  return "nine";
 }
return 0;
}