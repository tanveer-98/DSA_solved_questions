#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
cin>>t;
while(t--)
{
ll n,m;
cin>>n>>m;
ll x[n],y[m],x2[n],y2[m];
ll i,j;
map<ll,ll>mp1;
map<ll,ll>mp2;
int flag = 0,flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0;
ll w = n,e = m;
for(i=0;i<n;i++)
{
cin>>x[i];
x2[i] = x[i]*x[i];
mp1[x[i]] = 1;
if(x[i] > 0)
flag1 = 1;
if(x[i] < 0)
flag2 = 1;
if(x[i] == 0)
   {
    flag = 1;
    w--;
   }
}
for(i=0;i<m;i++)
{
cin>>y[i];
y2[i] = y[i]*y[i];
mp2[y[i]] = 1;
if(y[i] > 0)
flag3 = 1;
if(y[i] < 0)
flag4 = 1;
if(y[i] == 0)
{
   flag = 1;
   e--;
}
}
ll count1 = 0;
if(flag == 1)
   {
       count1 = w*e;
   }
   if((flag1 == 0) || (flag2 == 0)|| (flag3 == 0)|| (flag4 ==0))
{
cout<<count1<<endl;
continue;
}
ll count = 0;
for(i=0;i<n;i++)
{
ll p = x2[i];
if(p == 0)
continue;
else
{
for(j=0;j<m;j++)
{
   if(y[j] == 0)
   {
       continue;
   }
   else
   {
if(p%y[j] == 0)
{
ll q = p/y[j];
if(mp2[-q] == 1)
count++;
}
   }
}
}
}
count = count/2;
ll count2 = 0;
for(i=0;i<m;i++)
{
ll p = y2[i];
if(p == 0)
   continue;
else
{
for(j=0;j<n;j++)
{
   if(x[j] == 0)
   {
      continue;
   }
   else
   {
ll q = p/x[j];
if(p%x[j] == 0)
{
if(mp1[-q] == 1)
count2++;
}
   }
}
}
}
count2 = count2/2;
count = count + count2;
count1 = count + count1;
cout<<count1<<endl;
}
}
