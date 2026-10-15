#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    fstream wejscie("bin.txt");
    int wyndecy=0;
    string bin,wyn;
    for(int i=0;i<100;i++)
    {
        wejscie>>bin;
        int p=0,decy=0;
        for(int j=bin.size()-1;j>=0;j--)
        {
            decy+=(bin[j]-'0')*pow(2,p);
            p++;
        }
        if(decy>wyndecy){
            wyndecy=decy;
            wyn=bin;}
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
