#include<iostream>
using namespace std;
unsigned int ziua, luna, anul;
unsigned cod;
int main()
{
    cout<<"zi=";cin>>ziua;
    cout<<"luna";cin>>luna;
    cout<<"anul";cin>>anul;
    ziua&19;
    luna&11;
    anul&2018;
    cod =10011.1011.00000000000011111100010;
    cout<<"codul datei este"<<cod;
    return 0;
}
