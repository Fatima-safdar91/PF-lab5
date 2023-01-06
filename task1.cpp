#include<iostream>
#include<cmath>
using namespace std;

  float calculateheight(float degrees, float distance);

main()
{ 
  float distance;
  float degrees;
  float result;
  
  cout << "enter distance:";
  cin >> distance;
  cout << "enter degrees:";
  cin >> degrees;
  result=calculateheight( degrees, distance);
  cout << "height is:" << result;

  
  
}
  
  float calculateheight(float degrees, float distance)
{
    float radian=57.2958;
    float radians;
    float angle;
    float height;

    radians=degrees/radian;
    angle=tan(radians);
    height=angle*distance;
    return height;
}


