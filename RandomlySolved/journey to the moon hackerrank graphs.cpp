#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<string> split_string(string);
vector<int>groups;
vector<bool>visited;
// Complete the journeyToMoon function below.
int cnt=1;
void dfs(int v,vector<vector<int> > adj) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            {
                cnt++;
                dfs(u,adj);
            }
    }
}
void findres(vector<vector<int> >adj,int n)
{
    visited.resize(n,false);

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            dfs(i,adj);
            groups.push_back(cnt);
            cnt=1;
        }
    }/*
    for(int i=0;i<groups.size();i++)
    {
        cout<<groups[i]<<" ";
    }
    cout<<"\n";*/
}
ll solve()
{
    ll result=0,sum=0;
    for(auto x:groups)
    {
        result=(ll)(result+(ll)(sum*x));
        sum=(ll)(sum+x);
    }
    return result;
}
ll journeyToMoon(int n, vector<vector<int>> astronaut) {
  int visited[n]={0};
  vector<vector<int> > adj(n);
  for(int i=0;i<astronaut.size();i++)
  {
      adj[astronaut[i][0]].push_back(astronaut[i][1]);
      adj[astronaut[i][1]].push_back(astronaut[i][0]);
  }
  /*
  cout<<"\n";
  for(int i=0;i<adj.size();i++)
  {
      cout<<i <<"->>  ";
      for(int j=0;j<adj[i].size();j++)
      {
          cout<<adj[i][j]<<" ";
      }
      cout<<"\n";
  }*/
  findres(adj,n);
  ll result=solve();
  return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string np_temp;
    getline(cin, np_temp);

    vector<string> np = split_string(np_temp);

    int n = stoi(np[0]);

    int p = stoi(np[1]);

    vector<vector<int>> astronaut(p);
    for (int i = 0; i < p; i++) {
        astronaut[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> astronaut[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = journeyToMoon(n, astronaut);

    cout << result << "\n";



    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

