#include<bits/stdc++.h>
#define RANGE 255
using namespace std;


void countingSort(string s, char b[], int n)
{
    int i;

    int count[RANGE +1];
    memset(count, 0, sizeof(count));


    for( i = 0; i< n; i++)
    {
        count[s[i]] = count[s[i]] + 1;
    }
    for(i = 1; i<RANGE; i++)
    {
        count[i] = count[i] + count[i-1];
    }
    for(i = n-1; i>=0; i--)
    {
        b[count[s[i]] - 1] = s[i];
        count[s[i]] = count[s[i]] - 1;
    }

}

int main()
{
	int t;
	cout<<"No. of Test cases: ";
	cin>>t;
	while(t--)
	{
        cin.ignore();
	    string s;
	    getline(cin,s);
	    int n=s.length();

	    char b[n];
	    int i;
	    countingSort(s,b,n);
	    for( i = 0; i<n;i++)
 	    {
    	    cout<<b[i];
    	}
    	cout<<"\n";
	}
	return 0;
}
