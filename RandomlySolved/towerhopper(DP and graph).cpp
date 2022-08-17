
#include<bits/stdc++.h>
#define fri(s,e) for(int i=s;i<e;i++)
using namespace std;
vector<int>positions;
int ishoppable(int towers[],int index,int n)
{
    positions.push_back(index);
    if(towers[index]+index<n)
        return false;
    else if(towers[index]+index>=n)
        return true;
    else {

            ishoppable(towers,index+towers[index],n);
         }


}
int solve(int towers[],int n)
{
   for(int i=0;i<n;i++)//wrong thiniking ,4 means either he can jump one step or two steps
   {
       if(ishoppable(towers,i,n))
            return 1 ;
   }
   return -1 ;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int towers[n];
        fri(0,n)cin>>towers[i];
        int ans=solve(towers,n);
        if(ans=-1)
            cout<<"NO SOLUTION\n";
        else
        {
            for(int i=0;i<positions.size();i++)
                cout<<positions[i]<<" ";
        }
    }



    return 0;
}
