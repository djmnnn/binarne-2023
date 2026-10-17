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

}
