#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int arr[],int n)
{
    vector<int>ans;
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++){
            cin>>arr[i];
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
    }
    //cout<<"first"<<firstmax<<" "<<"last"<<lastmax<<"\n";
    int cnt=lastmax;
    for(int i=0;i<firstmax-lastmax+1;i++)
        ans.push_back(cnt++);
    return ans;
}
int main(){
  int size;

  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  vector<int> ans = longestConsecutiveIncreasingSequence(arr,size);

  for (auto it = ans.cbegin(); it != ans.cend(); it++) {
	cout << *it <<endl;
  }

  delete arr;
}
