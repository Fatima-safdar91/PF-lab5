#include<iostream>
#include<cmath>
using namespace std;

float quadraticplus( float a,float b,float c);
float quadraticminus(float a,float b,float c);

main()
{
  float a;
  float b;
  float c;
  float totalresult;
  float result2;

  cout << "enter a:";
  cin >> a;
  
  cout << "enter b:";
  cin >> b;
  
  cout << "enter c:";
  cin >> c;


 
  
 totalresult=quadraticplus( a, b, c);
 result2=quadraticminus( a, b, c);
  
 cout << "total result is:" << totalresult;
 cout << "result2:" << result2;

}

float quadraticplus(float a,float b,float c)
{
  float power;
  float result1;
  float result2;
  float result3;
  float result4;

  power=pow(b,2);
  result1=power-4*(a*c);
  result2=sqrt(result1);
  result3=(-b)+result2;
  result4=result3/(2*a);
  return result4;
 
}
float quadraticminus(float a,float b,float c)
{
  float power;
  float result1;
  float result2;
  float result3;
  float result4;

  power=pow(b,2);
  result1=power-4*(a*c);
  result2=sqrt(result1);
  result3=(-b)-result2;
  result4=result3/(2*a);
  return result4;
 
}