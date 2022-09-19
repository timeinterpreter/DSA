#include<iostream>
using namespace std;

int fact(int a) 
{   
    //cout<<a<<endl;
    if (a <= 1) 
        return 1;
    else 
        return a * fact(a-1);
    
}

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int output;
    output = fact(n);
    cout<<"Facorial of "<<n<<" is : "<<output<<endl;

    return 0;
}