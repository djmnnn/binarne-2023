#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int hexdec(string hex)
{
    int decy=0,p=0;
    for(int i=hex.size()-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
            decy+=(hex[i]-'0')*pow(16,p);
        else if(hex[i]>='A' && hex[i]<='F')
            decy+=(hex[i]-'A'+10)*pow(16,p);
        p++;
    }
    return decy;
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
    cout<<((123^bindecy("101101"))^hexdec("2D"));
}
