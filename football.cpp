#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 1;
    for (int i = 0;s[i]!='\0'; i++)
    {
           if (count>=7)
            {
                break;
            } 
        if (s[i]==s[i+1])
        {
            count++;
        }
        else{
        count = 1;
        }
    }
    if (count <7)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}