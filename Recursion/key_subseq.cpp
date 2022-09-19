#include<iostream>
#include<cmath>
using namespace std;

int key_subs(int n, string output[])    {
    string input;
    int r, small_size;
    if (n == 0 || n == 1)
    {
        output[0] = "";
        return 1;
    }

    r = n % 10;
    switch (r)
    {
    case 2:
        input = "abc";
        break;
    
    case 3:
        input = "def";
        break;

    case 4: 
        input = "ghi";
        break;

    case 5 :
        input = "jkl";
        break;

    case 6 :
        input = "mno";
        break;

    case 7 :
        input = "pqrs";
        break;

    case 8 :
        input = "tuv";
        break;

    case 9 :
        input = "wxyz";
        break;

    default:
        cout<<"Invalid Input"<<endl;
        break;
    }

    small_size = key_subs(n/10, output);
    int ans_size = small_size * input.size();
    string temp[ans_size];
    int k =0;

    for (int i = 0; i < small_size; i++)
    {
        for (int j = 0; j < input.size(); j++)
        {
            temp[k] = output[i] + input[j];
            k++;
        }
        
    }
    
    for (int i = 0; i < ans_size; i++)
    {
        output[i] = temp[i];
    }
    
    return ans_size;
    
}

int main()
{
    int n, size;
    string output[1000];

    cin>>n;
    size = key_subs(n, output);

    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<endl;
    }
    

    return 0;
}