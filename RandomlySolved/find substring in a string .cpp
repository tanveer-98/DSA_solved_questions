#include <iostream>
using namespace std;
#include<string.h>
int findString(char S[], char T[])
 {
    int start;
    int size1=strlen(S);
    int flag=0;
    int size2=strlen(T);
    int siz=1;
    cout<<size1<<" "<<size2<<"\n";
    for(int i=0;i<size1-size2;i++)
    {
        cout<<"flag "<<flag<<"\n";
        cout<<"i "<<i<<"\n";
        cout<<"siz "<<siz<<" size2 "<<size2<<"\n";
        if(siz>size2)
            break;
        else
        {
            if(flag==0)
            {
                if(T[i]==S[i])
                {
                    cout<<"t"<<T[i]<<" "<<"s"<<S[i];
                    cout<<"start "<<start<<"\n";
                    start=i;
                    flag=1;
                    siz++;
                }
                else continue;
            }
            else if(flag==1)
            {
                if(T[i]==S[i])
                siz++;
            }
        }
    }
    if(siz==size2)
        return start;
        else return -1;
}

int main() {
    char S[1000], T[1000];
    cin.getline(S, 1000);
    cin.getline(T, 1000);
    cout << findString(S, T) << endl;
}
