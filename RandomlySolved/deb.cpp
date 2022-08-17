#include<iostream>
#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define li long int
#define pp pair<int,int>
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define pb push_back
#define llp(i,x,n) for(int i=x;i<n;i++)
#define fr first
#define ss second
#define mod 1000000007
using namespace std;
bool valid_part(char* s)
{
    ll n = strlen(s);
    if (n > 3)
        return false;
        llp(i,0,n)
        if ((s[i] >= '0' and s[i] <= '9') == false)
            return false;
    string str(s);
    if (str.find('0') == 0 && n > 1)
        return false;
    stringstream proxy(str);
    int x;
    proxy>> x;
    return (x >= 0 and x <= 255);
}
int valid_ip(char* ip_str)
{
    if (ip_str== NULL)
        return 0;
    ll i, num, dots = 0;
    ll len = strlen(ip_str);
    ll count = 0;
    llp(i,0,len)
        if (ip_str[i] == '.')
            count++;
    if (count != 3)
        return false;
    char *ptr = strtok(ip_str, ".");
    if (ptr == NULL)
        return 0;

    while (ptr) {
        if (valid_part(ptr)) {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
                ++dots;
        }
        else
            return 0;
    }
    if (dots != 3)
        return 0;
    return 1;
}

int main()
{
    ll k;
    cout<<"Enter IP";
    string s;
    cin>>s;
    char ip[s.size()];
    llp(i,0,s.size())
    ip[i]=s[i];
    if(valid_ip(ip))
    cout<<"Valid\n";
    else
    cout<<"Invalid\n";
}
