//working solution
#include<bits/stdc++.h>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int arr[],int n);
int findindex(int arr[],int number,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==number)
            return i;
    }
}
vector<int> longestConsecutiveIncreasingSequence(int arr[],int n)
{
    vector<int>ans;
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++){
            mp.insert(make_pair(arr[i],true));
    }
    unordered_map<int,bool>::iterator it;
    unordered_map<int,bool>::iterator itm;
    int last,first,lastmax=0,firstmax=0;
    for(int i=0;i<n;i++)
    {

        itm=mp.find(arr[i]);
        if(itm->second==false)
            continue;
        else{ itm->second=false;}
        first=arr[i];
        last=arr[i];
        int num=arr[i];
        //for checking +1 numbers
        while(1)
        {
            num++;
            it=mp.find(num);
            if(it!=mp.end()&&it->second!=false)
            {
                first=num;
                it->second=false;
            }
            else{break;}
        }
        //for checking -1 numbers
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
       if(first-last>firstmax-lastmax)
       {

           firstmax=first;
           lastmax=last;
       }
        else if(first-last==firstmax-lastmax)
        {
            int index1=findindex(arr,last,n);
            int index2=findindex(arr,lastmax,n);

           // cout<<"index1"<<index1<<"  index2"<<index2<<"\n";
            if(index1<index2)
            {

               firstmax=first;
               lastmax=last;
            }

        }
         if(firstmax==0&&lastmax==0)
    {
        firstmax=arr[i];
        lastmax=arr[i];
    }
    }

    //cout<<"first"<<firstmax<<" "<<"last"<<lastmax<<"\n";
    int cnt=lastmax;
    for(int i=0;i<firstmax-lastmax+1;i++)
        ans.push_back(cnt++);
    return ans;
}
