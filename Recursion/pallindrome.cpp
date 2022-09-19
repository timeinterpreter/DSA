#include<iostream>
using namespace std;

bool helper(string S, int s, int e) {
    if(S.length() == 0 || S.length() == 1) {
        return true;
    }

    if(S[s] == S[e]) {
        return true;
    }
    else {
        return false;
    }

    return helper(S, s+1, e-1);
}

bool check_pallindrome(string S) {
    int start = 0, end = S.length()-1;
    return helper(S, start, end);
}

int main()
{
    cout<<check_pallindrome("raccar")<<endl;
    cout<<check_pallindrome("ninja")<<endl;
    return 0;
}