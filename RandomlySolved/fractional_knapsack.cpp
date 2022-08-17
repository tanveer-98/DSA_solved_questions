
/*You want to paint your house.

The total area of your house is D units.
There are a total of N workers.
The ith worker is available after time Ti, has hiring cost Xi and speed Yi.
This means he becomes available for hiring from time Ti and remains available after that. Once available, you can hire him with cost Xi, after which he

will start painting the house immediately, covering exactly Yi units of house with paint per time unit. You may or may not hire a worker and can also hire
 or fire him at any later point of time. However, no more than 1 worker can be painting the house at a given time.
Since you want the work to be done as fast as possible, figure out a way to hire the workers, such that your house gets painted at the earliest possible time,
with minimum cost to spend for hiring workers.
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool compare(vector<int> a,vector<int> b)
{
    if(a[0]==b[0])
    {
        if(a[2]==b[2])
        {
            return a[1]<b[1]

        }
        else return a[2]>b[2]

    }
    else return a[0]<b[0]




}
void solve(int n,ll total_area,vector<vector<int> > workers)
{
    ll cost=workers[0][1];
    int area_covered=0;
    int current_worker=0;
    for(int i=1;i<n;i++)
    {
        int timegap=workers[i][0]-workers[current_worker][0];//need some edit in this part totally confused

        area_covered+=(timegap*workers[current_worker][2]);
        if(area_covered>=total_area)
            return cost;
        if(workers[current_worker][2]>workers[i][2])
        {
            current_worker=i;
            cost+=(workers[i][1]);
        }
    }
    return cost;

}
int main()
{
    int n;
    ll total_area;
    cin>>n>>total_area;
    vector<vector<int> > workers;
    for(int p=1;p<n;p++)
    {
        int T,cost,area_per_time;
        cin>>T>>cost>>area_per_time;
        vector<int> temp;
        temp.push_back(T);
        temp.push_back(cost);
        temp.push_back(area_per_time);
        workers.push_back(temp);
    }
    solve(n,total_area,workers)
}
