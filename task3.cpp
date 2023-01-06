#include<iostream>
#include<cmath>
using namespace std;

bool issymmetrical(int number);
main()
{
 int result;
  int number;
  cout << "number a 3 digit value:";
  cin >> number;

    result=issymmetrical(number);
    cout << "result is" << result;
}

    bool issymmetrical(int number)
{  
    int q1;
    int q2;
    int r1;
    int r2;
   q1=number/10;
   r1=number%10;
   q2=q1/10;
   r2=q1%10;
  if(r1==q2)
   {
     return true;
   }
  if(r1!=q2)
   {
     return false;
}
return 0;

}