
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPossible(ll groups[], ll plane_capacity[],int n, int m, int min_time)
{
    int temp = 0;
    int count = 0;

    while (count < m) {
        for (int j = 0; j < min_time
                        && temp < n
                        && plane_capacity[count] >= groups[temp];
             j += 2)
            temp++;

        count++;
    }
    if (temp == n)
        return true;
    return false;
}


int minTime(ll groups[],ll plane_capacity[], int n, int m)
{
    sort(groups, groups + n);
    sort(plane_capacity, plane_capacity + m);
    int l = 0;
    int h = 2 * n;
    int min_time = 0;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (isPossible(groups, plane_capacity, n, m, mid)) {
            min_time = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    return min_time;
}
int main()
{
    int n,m;
    cin>>n>>m;
    ll groups[n],plane_capacity[m];
    for(int i=0;i<n;i++)
        cin>>groups[i];
    for(int i=0;i<m;i++)
        cin>>plane_capacity[i];
    printf("%d", minTime(groups,plane_capacity,n,m));
    return 0;
}
