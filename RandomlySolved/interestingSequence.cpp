
#include <bits/stdc++.h>

using namespace std;

int go(int arr[], int n, int k, int l){
	int maximum = arr[0];
	int minimum = arr[0];
	for (int i = 0; i < n; ++i)
	{
		maximum = max(arr[i], maximum);
		minimum = min(arr[i], minimum);
	}
	// cout << maximum << '\n';
	// cout << minimum << '\n';

	int ans = INT_MAX;

	for (int number = minimum; number <= maximum; ++number)
	{
		//cout << "here" << '\n';
		int increase = 0;
		int decrease = 0;
		for (int i = 0; i < n; ++i)
		{
			if (arr[i]>number)
			{
				decrease += arr[i]-number;
			}else if (arr[i]<number)
			{
				increase += number-arr[i];
			}
		}
		 //cout << "Decrease: "<<decrease << '\n';
		// cout << "Increase: "<<increase << '\n';

		if (decrease>increase)
		{
			continue;
		}
		int cost = 0;

		cost = decrease*k + (increase-decrease)*l;
		// cout << "cost: "<<cost << '\n';
		ans = min(ans, cost);


	}

	return ans;

}
int main()
{
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
	int n, k, l;
	cin>>n>>k>>l;
	int arr[n];
	for (int i = 0; i < n; ++i)
	cin>>arr[i];
	cout << go(arr, n, k, l) << '\n';
	return 0 ;
}
