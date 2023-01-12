#include<iostream>
using namespace std;
void stateofpool( int volume, int p1, int p2, float hours);
main()
{
int volume;
int p1, p2;
float hours;
cout << "the volume of pool in liters - an integer in the range of [1...10000]=";
cin >> volume;
cout << "the flow rate of first pipe per hour - an integer in the range of [1...5000]=";
cin >> p1;
cout << "the flow rate of second pipe per hour - an integer in the range of [1...5000]=";
cin >> p2;
cout << "the hours that the worker is absent - a floating-point number in the range of [1.0...24.0]=";
cin >> hours;
stateofpool(  volume,  p1,  p2,  hours);

}
void stateofpool( int volume, int p1, int p2, float hours)
{
float res1;
float res2;
float res3;
float res4;
float pipe1;
float pipe2;
float chindi;
pipe1=p1*hours;
pipe2=p2*hours;
chindi=pipe1+pipe2;
if (chindi < volume)
   {

    res1=(pipe1+pipe2)*100/volume;
    res2=pipe1*100/chindi;
    res3=pipe2*100/chindi;

  cout << "The pool is" << res1 << "%" << "full." << "pipe1:" << res2 << "pipe2:" << res3;
   }
if (chindi > volume)
{
    res4=(pipe1+pipe2)-volume;

    cout <<"For" << hours <<"hours the pool overflow with" << res4 << "litres" ;
}

}