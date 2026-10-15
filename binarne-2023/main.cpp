#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream wejscie("bin.txt");
    int wyn=0;
    string bin;
    for(int i=0;i<100;i++)
    {
        int b=1;
        wejscie>>bin;
        if(bin.size()>=3){
    for(int j=0;j<bin.size()-1;j++)
    {
        if(bin[j]!=bin[j+1])
            b++;
    }
    }
    else if(bin.size()==2)
    {
        if(bin[0]!=bin[1])
            b++;
    }
    if(b<=2)
        wyn++;
    }
    cout<<wyn;

    /*while(n!=0)
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
    cout<<b;*/
}
