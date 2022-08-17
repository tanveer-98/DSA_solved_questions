
#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
void case1(ll A,ll B,ll rightmost_power_of_two)
{
    ll ans=(rightmost_power_of_two-A)+(B-A+1);
        cout<<ans<<"\n";
}
void case2(ll A,ll B,ll rightmost_power_of_two)
{
      //cout<<"power of 2-> "<<rightmost_power_of_two<<"\n";
        ll ans=(rightmost_power_of_two-A)+(B-A+1);
        ll a =B-rightmost_power_of_two;
        // cout<<"a "<<a<<" \n";
        ll b=A-1;
        //cout<<"b "<<b<<" \n";
        if(a>=b)
        {
            ans-=(a-b);
            cout<<ans<<"\n";
        }
        else
        {
            ll psub=log2(B-rightmost_power_of_two);
            ll del=B-(rightmost_power_of_two+pow(2,psub));
            //cout<<"del "<<del<<"\n";
            ll extra=pow(2,psub)-1;
           // cout<<"extra "<<extra<<"\n";
            if((B-del+extra)-rightmost_power_of_two==rightmost_power_of_two-1)
               {
                   cout<<"hurray\n";
                    ans=B-del+extra-rightmost_power_of_two+(rightmost_power_of_two-A+1);
               }
            else
                ans=(rightmost_power_of_two-A)+(B-A+1)+extra-del;
            cout<<ans<<"\n";
          //  cout<<"fun"<<"\n";
        }



}
void case3(ll A,ll B,ll rightmost_power_of_two)
{
    ll ans;
        ll psub=log2(B-rightmost_power_of_two);
            ll del=B-(rightmost_power_of_two+pow(2,psub));
            //cout<<"del "<<del<<"\n";
            ll extra=pow(2,psub)-1;
           // cout<<"extra "<<extra<<"\n";

                ans=(B-A+1)+extra-del;
            cout<<ans<<"\n";
            //cout<<"fun"<<"\n";



}
ll check(ll *A,ll *B,ll p)
{


}
int main()
{

       ll A,B;
        cin>>A>>B;

    ll p=log2(B);
        ll rightmost_power_of_two=pow(2,p);
    if(rightmost_power_of_two==B)
    {

        case1(A,B,rightmost_power_of_two);
    }
    else if(rightmost_power_of_two>A&&rightmost_power_of_two<B)
    {

        case2(A,B,rightmost_power_of_two);
    }
    else if(rightmost_power_of_two==A)
    {

        case3(A,B,rightmost_power_of_two);
    }
    else
    {
       // cout<<"case 4 called first \n";
         int choice=4;

        do{

            ll pnew=log2(B);
            ll rnew=pow(2,pnew);
            ll H=pow(2,pnew+1);
            H=H-1;
            A=A&(H>>1);//cout<<"A "<<A<<"\n";
            B=B&(H>>1);//cout<<"B "<<B<<"\n";
            pnew=log2(B);
            rnew=pow(2,pnew);
            if(rnew==B)
                {
                    case1(A,B,rnew);
                    choice=1;
                }
            else if(rnew>A&&rnew<B)
                  {
                      case2(A,B,rnew);
                      choice=2;
                  }
            else if(rnew==A)
                 {
                     case3(A,B,rnew);
                     choice=3;
                 }
            else{
                    //cout<<"case 4 called second\n";
                    choice=4;
                }


        }while((A>1||B>1)&&choice==4);

    }







    return 0;
}
