#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++){
            cin>>arr[i];
            mp.insert(make_pair(arr[i],true));
            //mp[arr[i]]=true;

    }
    unordered_map<int,bool>::iterator it;
    unordered_map<int,bool>::iterator itm;
    /*if(mp.find(4)!=mp.end())
    {
        it=mp.find(4);
        cout<<it->first<<" "<<it->second<<endl;
        it->second=false;
        cout<<it->first<<" "<<it->second<<endl;

    }*/


    //printing the map
    /*cout<<"the map"<<endl;
    for(itm=mp.begin();itm!=mp.end();++itm)
    {
        cout<<itm->first<<" "<<itm->second<<"\n";
    }
    cout<<"\n";*/


    int last,first,lastmax=0,firstmax=0;
    for(int i=0;i<n;i++)
    {
        //cout<<"\n in main for loop\n";
        itm=mp.find(arr[i]);
        if(itm->second==false)
            continue;
        else{ itm->second=false;}

        first=arr[i];
        last=arr[i];
        int num=arr[i];
        while(1)
        {
           // cout<<"in while loop first"<<endl;
            num++;
            it=mp.find(num);
            //if(it!=mp.end())
            //cout<<"\n it =  "<<it->first<<"\n";

            if(it!=mp.end()&&it->second!=false)
            {

                first=num;
                it->second=false;
            }
            else{break;}
        }
        //for the numbers below
        num=arr[i];
        while(1)
        {
            num--;
            it=mp.find(num);
            if(it!=mp.end()&&it->second!=false)
            {
                last=num;
                it->second=false;

            }
            else{break;}
        }
       // cout<<"per element"<<"\n";
      // cout<<"first"<<first<<" "<<"last"<<last<<"\n";
       if(first-last>firstmax-lastmax)
       {

           firstmax=first;
           lastmax=last;
       }
    }
    cout<<"first"<<firstmax<<" "<<"last"<<lastmax<<"\n";


     //printing the map
    /*cout<<"the map"<<endl;
    for(itm=mp.begin();itm!=mp.end();itm++)
    {
        cout<<itm->first<<" "<<itm->second<<"\n";
    }
    cout<<"\n";*/

    return 0;
}
//tc 7 3
