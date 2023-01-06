#include<iostream>
using namespace std;

string oddish(int number);
string evenish(int number);

main ()
{ int number;
  string result;
  
  cout <<" enter a five digit number:";
  cin >> number;
  result=oddish(number);
  cout << "result is" << result;
  

}

string  oddish(int number)
{   int q1,q2,q3,q4;
     int r1,r2,r3,r4,r5;
     int sum;
     
     q1=number/10;
     r1=number%10;
     q2=q1/10;
     r2=q1%10;
     q3=q2/10;
     r3=q2%10;
     q4=q3/10;
     r4=q3%10;
     r5=q4;
    sum=r1+r2+r3+r4+r5;

    
  if((sum%2)!=0)
  {  
     	return "oddish";

  } 
  if((sum%2)==0)
  { 
     return "evenish";
  } 
return"jj";
}

   
  