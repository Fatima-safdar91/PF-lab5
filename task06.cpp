#include<iostream>
using namespace std;
string printvalue(int value1);
string print(int value2);

main()
{
    int value1;
    int value2;
    int num;
    string res1;
    string res2;

    cout << "enter a 2 digit number=";
    cin >> num;
    res1=printvalue( value1);
    res2=print( value2);
    cout << res1 << " " << res2 ;
}

string printvalue(int value1)
{  
    int num;
    int value2;
    value1 = num / 10;
    value2 = num % 10; 
   
 
    if (value1 == 2)
    {
        return "twenty";
    }
     if (value1 == 3)
    {
        return "thirty";
    }
     if (value1 == 4)
    {
        return "forty";
    }
     if (value1 == 5)
    {
        return "fifty";
    } 
    if (value1 == 6)
    {
        return "sixty";
    }
     if (value1 == 7)
    {
        return "seventy";
    } 
    if (value1 == 8)
    {
        return "eighty";
    } 
    if (value1 == 9)
    {
        return "ninty";
    } 
    return "gg";
}
string print(int  value2)
{

     int num;
    int output1;
    int value1;
      value2 = num % 10; 
      value1 = num / 10;
        if (value2 == 1)
         {
            return "one";
         }
         if (value2 == 2)
         {
            return "two";
         }
         if (value2 == 3)
         {
            return "three";
         }
         if (value2 == 4)
         {
            return "four";
         }
         if (value2 == 5)
         {
            return "five";
         }
         if (value2 == 6)
         {
            return "six";
         }
         if (value2 == 7)
         {
            return "seven";
         }
         if (value2 == 8)
         {
            return "eight";
         }
         if (value2 == 9)
         {
            return "nine";
         }
         return "ff";
}
  

