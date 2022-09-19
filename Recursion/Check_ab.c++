#include<iostream>
using namespace std;

/*
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'

*/

bool check_ab(string a) {
    if  (a[0] != 'a')    {
        return false;
    }

}

int main()
{
    string s;
    cin>>s;
    check_ab(s);

    return 0;
}