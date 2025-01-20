#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    if(n>5)
    {
        count = n/5;
        if (n%5==0)
        {
        cout<< count<<endl;
        }
        else{

        cout<< count +1 <<endl;
        }
        
    }
    else{
        cout<<"1";
    }
    
    return 0;
}