#include<iostream>
using namespace std;

#include<bits/stdc++.h>
int main() {
    int t;
    cin>>t;
    while(t--){

    long long nor,i,j;
    cin>>nor;
    int price[nor];
    for(i=0;i<nor;i++){
        cin>>price[i];
    }
    long long M;
    cin>>M;
    int c=0;
    int d;

    long long pairs[1000001];
    for(i=0;i<nor;i++)
    {
        for(j=0;j<nor;j++)
            {
                if((price[i]+price[j])==M)
                {

                   pairs[c]=price[i];
                   c++;
                   pairs[c]=price[j];
                   c++;
                }
            }
    }
    d=c;

 for(d=0;d<c;d++)
    cout<<pairs[d]<<" ";









    }
	return 0;
}
