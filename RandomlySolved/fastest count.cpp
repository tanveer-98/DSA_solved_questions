#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    long long  n, i,rmin,rmax;
	    cin>>n;
	    cin>>rmin>>rmax;

	    long long  a[n];
	    for(i=0;i<n;i++)

	        cin>>a[i];

	   sort(a,a+n);

	    for(i=0;i<n;i++)
	        cout<<a[i]<<" ";


	        cout<<endl;
	}
		return 0;

}
