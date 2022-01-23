#include <iostream>
using namespace std;

string ok(int day){
    string dayname;

    switch(day){
    case 0:
        dayname = "sunday";
        break;
    case 1:
        dayname = "monday";
        break;
    case 2:
        dayname = "tuesday";
        break;
    case 3:
        dayname = "wednesday";
        break;
    case 4:
        dayname = "thursday";
        break;
    case 5:
        dayname = "friday";
        break;
    case 6:
        dayname = "saturday";
        break;
    default:
        dayname = "invalid";
    }
    return dayname;
}
int main()
{
    int a;
    cin >> a;
    cout << ok(a);
    return 0;
}
