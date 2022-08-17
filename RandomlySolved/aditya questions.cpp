#include<bits/stdc++.h>
#define ll long long
using namespace std;

void display(deque<ll> dq)
{
	deque<ll> ddq;
	ddq = dq;
	while(!ddq.empty())
	{
		cout<<ddq.front()<<" ";
		ddq.pop_front();
	}
}
int main()
{
    deque<ll> q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    display(q);




    return 0;
}
