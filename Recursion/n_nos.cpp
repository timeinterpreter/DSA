#include<iostream>
using namespace std;

void print_nos(int n) {
    if (n == 1) {
        cout<<n<<" ";
        return;
    }
    
    print_nos(n-1);
    cout<<n<<" ";
}

int main()
{
    int n; 
    cin>>n;
    
    print_nos(n);

    return 0;
}