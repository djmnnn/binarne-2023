#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int n,b=1;
    string bin="";
    cin>>n;
    while(n!=0)
    {
        if(n%2==1)
        {
            bin="1"+bin;
        }
        else
            bin="0"+bin;
        n/=2;
    }
    if(bin.size()>=3){
    for(int i=0;i<bin.size()-1;i++)
    {
        if(bin[i]!=bin[i+1])
            b++;
    }
    }
    else if(bin.size()==2)
    {
        if(bin[0]!=bin[1])
            b++;
    }
    cout<<b;
}
