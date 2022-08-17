// C++ program for weighted job scheduling using Dynamic
// Programming and Binary Search
#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
	int start, finish, profit;
};


bool myfunction(Job s1, Job s2)
{
	return (s1.finish < s2.finish);
}

int binarySearch(Job jobs[], int index)
{

	int lo = 0, hi = index - 1;


	while (lo <= hi)
	{
	    //cout<<"\nhi "<<hi<<"  lo "<<lo<<"\n";
		int mid = (lo + hi) / 2;
		//cout<<"mid "<<mid<<"\n";
		if (jobs[mid].finish <= jobs[index].start)
		{
			if (jobs[mid + 1].finish <= jobs[index].start)
				lo = mid + 1;
			else
				return mid;
		}
		else
			hi = mid - 1;
	}

	return -1;
}

int findMaxProfit(Job arr[], int n)
{

	sort(arr, arr+n, myfunction);


	int *table = new int[n];
	table[0] = arr[0].profit;


	for (int i=1; i<n; i++)
	{
	    //cout<<"index "<<i<<"\n";

		int inclProf = arr[i].profit;
		//cout<<"inclprof1 "<<inclProf<<"\n";
		int l = binarySearch(arr, i);
		//cout<<"non conflicting index "<<l<<"\n";
		if (l != -1)
			inclProf += table[l];
  //  cout<<"inclprof2 "<<inclProf<<"\n";

		table[i] = max(inclProf, table[i-1]);
		/*for(int i=0;i<n;i++)
        {
            cout<<table[i]<<" ";
        }
        cout<<endl;*/
	}

	int result = table[n-1];
	delete[] table;

	return result;
}

int main()
{
    int n;
    cin>>n;

	Job arr[n];
	for(int i=0;i<n;i++)
    {
        int start,finish,profit;
        cin>>start>>finish>>profit;
        arr[i].start=start;
        arr[i].finish=finish;
        arr[i].profit=profit;

    }

	cout << findMaxProfit(arr, n);
	return 0;
}
