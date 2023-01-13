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
    string result;    value1 = num / 10;
    value2 = num % 10; 
    res1=printvalue(value1);
    res2=print(value2);
    cout << res1 << " " << res2 ;
}

string printvalue(int value1)
{   
	string result;
    if (value1 == 2)
    {
        result="twenty";
        
    }
     if (value1 == 3)
    {
        result="thirty";
    }
     if (value1 == 4)
    {
        result="forty";
    }
     if (value1 == 5)
    {
        result="fifty";
    } 
    if (value1 == 6)
    {
        result="sixty";
    }
     if (value1 == 7)
    {
        result="seventy";
    } 
    if (value1 == 8)
    {
        result="eighty";
    } 
    if (value1 == 9)
    {
        result="ninty";
    } 
    return result;
}
string print(int  value2)
{
	string result;
	if(value2 == 0)
	 {
	   result = " ";
	 }
        if (value2 == 1)
         {
            result= "one";
         }
         if (value2 == 2)
         {
            result= "two";
         }
         if (value2 == 3)
         {
            result= "three";
         }
         if (value2 == 4)
         {
            result= "four";
         }
         if (value2 == 5)
         {
            result= "five";
         }
         if (value2 == 6)
         {
            result= "six";
         }
         if (value2 == 7)
         {
            result= "seven";
         }
         if (value2 == 8)
         {
            result= "eight";
         }
         if (value2 == 9)
         {
            result= "nine";
         }
         return result;
}
  

