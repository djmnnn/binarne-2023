#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

string decybin(int decy)
{
    if(decy==0)
        return "0";

    string bin="";
    while(decy>0)
    {
        if(decy%2==0)
            bin="0"+bin;
        else
            bin="1"+bin;
        decy/=2;
    }
    return bin;
}
int bindecy(string bin)
{
    int decy=0,p=0;
    for(int i=bin.size()-1;i>=0;i--)
    {
        if(bin[i]=='1')
            decy+=pow(2,p);
        p++;
    }
    return decy;
}
int main()
{
    ifstream wejscie("bin.txt");

    string bin;
    for(int i=0;i<100;i++)
    {
        wejscie>>bin;
        cout<<decybin(bindecy(bin)^(bindecy(bin)/2))<<endl;
    }

    return 0;
}
