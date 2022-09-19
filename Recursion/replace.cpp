#include<iostream>
using namespace std;

void replace(char s[], char c1, char c2) {
    if (s[0] == '\0') {
        return;
    }

    if (s[0] != c1) {
        return replace(s+1, c1, c2);
    }
    else {
        s[0] = c2;
        replace(s, c1, c2);
    }
}

int main()
{
    char str[100];
    cout<<"Input String : "<<endl;
    cin>>str;

    replace(str,'a','x');
    cout<<str<<endl;

    return 0;
}