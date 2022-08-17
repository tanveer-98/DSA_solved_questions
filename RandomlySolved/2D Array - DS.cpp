#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
   int row=arr.size();
   cout<<row<<"\n";
   int col=arr[0].size();
   cout<<col<<"\n";

   int maximum=INT_MIN;
   for(int i=1;i<row-1;i++)
   {
       for(int j=1;j<col-1;j++)
       {
           int lo=arr[i][j]+arr[i-1][j-1]+arr[i+1][j+1]+arr[i-1][j+1]+arr[i-1][j]+arr[i+1][j]+arr[i+1][j-1];
           maximum=max(lo,maximum);
           cout<<maximum<<"\n";
       }
   }
   return maximum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
