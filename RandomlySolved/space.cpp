#include<iostream>
using namespace std;
int perm(int N){

    if(N==1||N==0)
    return 1;
    else
    return ((N-1)*perm(N-2))%100000013;

}
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        long long result;
        cin>>N;
        if(N!=1){
        result=perm(N);
        }
        else result=0;
        cout<<result<<"\n";
    }
    return 0;
}
