#include<bits/stdc++.h>
using namespace std;
int adjacency_matrix[101][101]={{0}};
void removePerson(int person,int totalPersons)
{
    for(int i=1;i<=totalPersons;i++)
    {
        if(adjacency_matrix[person][i]==1)
            adjacency_matrix[person][i]=0;
        adjacency_matrix[i][person]=0;
    }
}
int solve()
{

    int total_people;
    cin>>total_people;
    int total_temp=total_people;
    int connections;
    cin>>connections;

    for(int i=1;i<=connections;i++)
    {
        int u,v;
        cin>>u>>v;
        adjacency_matrix[u][v]=1;
        adjacency_matrix[v][u]=1;
        //pairs.push_back(make_pair(u,v));

    }

    int cnt;
    bool change=true;
    while(change)
    {
           for(int i=1;i<=total_temp;i++)
            {
                for(int j=1;j<=total_temp;j++)
                {
                    cout<<adjacency_matrix[i][j]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";

        change=false;
        for(int i=1;i<=total_people;i++)
        {
            int knows=0;
            int notKnows;
            for(int j=1;j<=total_people;j++)
            {
                if(i==j)
                    continue;
                if(adjacency_matrix[i][j]==1)
                    knows++;
            }
            if(knows<5&&knows!=0)
            {


                change=true;
                removePerson(i,total_people);

            }
            notKnows=(total_people-1)-knows;
            if(notKnows<5)
            {
                change=true;
                removePerson(i,total_people);

            }


        }

    }
    set<int> invitees;
    for(int i=1;i<=total_people;i++)
    {
        for(int j=1;j<=total_people;j++)
        {
            if(adjacency_matrix[i][j]==1&&j-i>0)
            {
                invitees.insert(i);
                invitees.insert(j);

            }


        }
    }

    cnt=invitees.size();
    set <int> :: iterator itr;
    cout<<"{";
    for (itr = invitees.begin(); itr != invitees.end(); ++itr)
    {
        cout << *itr<<", ";
    }
    cout<<"}\n";
    return cnt;

}
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        int ans=solve();
        cout<<ans;
    }
}

/*


1
20
18
1 2
1 3
1 4
1 5
1 6
2 3
2 4
2 5
2 6
3 4
3 5
3 6
4 5
4 6
5 6
7 1
7 2
7 3

*/
