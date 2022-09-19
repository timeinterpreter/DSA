#include<iostream>
using namespace std;

int nos(int n) {
    if (n/10 == 0) 
        return 1;
    return 1 + nos(n/10);
}

int main()
{

    cout<<nos(359)<<endl;
    return 0;
}