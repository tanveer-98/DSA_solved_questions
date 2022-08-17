#include<iostream>
using namespace std;
void tofh(int disk,char source,char temp,char dest);
int main()
{
    char source='A',temp='B',dest='C';
    int disk;
    cout<<"enter the no of disk"<<endl;
    cin>>disk;
    cout<<"sequence is "<<endl;
    tofh(disk,source,temp,dest);

    return 0;
}
void tofh(int disk,char source,char temp,char dest)
{
    if(disk==1)
    {


        cout<<"move disk "<<ditofh(disk-1,source,dest,temp);sk<<"f/rom"<<source<<"->>"<<dest<<endl;
        return;
    }
    tofh(disk-1,source,dest,temp);
    cout<<"move disk "<<disk<<"from"<<source<<"->>"<<dest<<endl;
    tofh(disk-1,temp,source,dest);
}
