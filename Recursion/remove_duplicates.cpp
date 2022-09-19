#include<iostream>
using namespace std;

void duplicates(char s[]) {
    if (s[0] == '\0') {
        return;
    }

    int i = 1;
    if (s[i] != s[i-1]) {
        return duplicates(s+1);
    }
    else {
        
        for(;s[i] != '\0'; i++) {
            s[i-1] = s[i];
        }
        s[i-1] = i;
        //cout<<s<<endl;
        duplicates(s);
    }
    
}

int main()
{
    char str[100];
    cin>>str;

    duplicates(str);
    cout<<str<<endl;
    return 0;
}