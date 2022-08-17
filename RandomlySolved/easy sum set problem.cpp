#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int a,i,j;
    cin>>a;
    int A[a];
    for(i=0;i<a;i++)
    cin>>A[i];

     for(i=0;i<a;i++)
    cout<<A[i]<<",";;

    int c;
    cin>>c;
    int C[c];
     for(i=0;i<c;i++)
    cin>>C[i];

     for(i=0;i<c;i++)
     cout<<C[i]<<",";


     set<int,greater<int>>B;

    for(i=0;i<c;i++)
    for(j=0;j<a;j++)
    {
        B.insert(C[i]-A[j]);
    }

    set<int,greater<int>>::iterator itr;

    for(itr=B.begin();itr!=B.end();++itr)
    cout<<*itr<<" ";


	return 0;

}
