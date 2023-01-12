#include<iostream>
using namespace std;
string capitalletter(char alpha);

main()
{
    char alpha;
    string result;
    cout << "Enter value a or A:";
    cin >> alpha;
    result=capitalletter( alpha);
    cout << result;

}

string capitalletter(char alpha)
{   
     

    if(alpha == 'A')
    {
       return "You have entered capital A";
    }
    if(alpha == 'a')
    {
        return "You have entered small a";
    }  
    return "gg";
}