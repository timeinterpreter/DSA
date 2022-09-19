#include<iostream>
#include<math.h>
using namespace std;

float g_sum(int n) {
    if(n == 0) {
        return 1.0;
    }

    return 1/pow(2,n) + g_sum(n-1); 
}

int main()
{

    cout<<g_sum(2)<<endl;
    return 0;
}