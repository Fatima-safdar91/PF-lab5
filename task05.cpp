#include<iostream>
using namespace std;
void time(int hours, int mins);

main()
{
    int hours;
    int mins;
     

    cout << "enter hours:";
    cin >> hours;
    cout << "enter mins:";
    cin >> mins;
    time( hours,  mins);
   
}

void time(int hours, int mins)
{
    int min1;
    int hour1;
    if ((mins > 0 && mins < 59) && (hours > 0 && hours <=23))
    {
         if((mins+15) < 59)
  {
      min1=mins+15;
      hour1=hours;
    cout << hour1 << ":" << min1;
  }
  if((mins+15) >= 60)
  {
      min1=(mins+15)-60;
      hour1=hours+1;
    cout << hour1 << ":" << min1;
  }
    }
}