#include<iostream>
#include<queue>
using namespace std;
int main()
{

  priority_queue<int,vector<int>> pq;
  pq.push(1);
pq.push(3);
    pq.push(2);
pq.push(6);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }



return 0;
}
