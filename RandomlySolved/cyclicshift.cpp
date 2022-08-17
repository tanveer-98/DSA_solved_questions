#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define INT_BITS 15
int rotateLeft(int num, unsigned int rotation)
{
    int DROPPED_MSB;

    // The effective rotation
    rotation %= INT_BITS;


    // Loop till rotation becomes 0
    while(rotation--)
    {
        // Get MSB of num before it gets dropped
        DROPPED_MSB = (num >> INT_BITS) & 1;

        // Left rotate num by 1 and
        // Set its dropped MSB as new LSB
        num = (num << 1) | DROPPED_MSB;
    }

    return num;
}



int rotateRight(int num, unsigned int rotation)
{
    int DROPPED_LSB;

    // The effective rotation
    rotation %= INT_BITS;


    // Loop till rotation becomes 0
    while(rotation--)
    {
        // Get LSB of num before it gets dropped
        DROPPED_LSB = num & 1;

        // Right shift num by 1 and
        // Clear its MSB
        num = (num >> 1) & (~(1 << INT_BITS));

        // Set its dropped LSB as new MSB
        num = num | (DROPPED_LSB << INT_BITS);
    }

    return num;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int num;
        int m;
        char direction;
        cin>>num>>m>>direction;
        if(direction=='L')
         cout<<rotateLeft(num,m)<<"\n";
        else cout<<rotateRight(num,m)<<"\n";
    }


    return 0;
}
