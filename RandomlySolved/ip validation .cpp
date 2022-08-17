#include<bits/stdc++.h>
#include<ctype.h>
#include<cstdlib>
#include<string>
using namespace std;
class Ip
{
    private://ENCAPSULATING THE IMPORTANT DATA MEMBERS
    string ipstring;
    public:
    Ip()
    {
        //default constructor
    }
    void set_ip(string name);//SETTER
    void check();//IP VALIDATOR
    ~Ip()
    {
        cout<<"destructor called\n\n";
    }
};
void Ip::set_ip(string name)
{
    //SETTER FOR ACCESSING PRIVATE MEMBERS
   ipstring=name;
}
int check_number(string ip)
{
    //THIS PART CHECKS IF NON NUMERALS EXCEPT  '.' ARE PRESENT
    int ip_length=ip.length();
    int flag=0;
    while(ip_length>0)
    {
        //cout<<ip[ip_length-1]<<"\n";
        if(ip[ip_length-1]=='.')
           {
                ip_length--;
                continue;

           }
        else if(ip[ip_length-1]<'0'||ip[ip_length-1]>'9')
        {
               flag=1;
               break;

        }
           ip_length--;
    }
    if(flag==0)
        return 1;
    else return 0;

}
int checkadjacent_dots(string ip)
{
    //CHECKS FOR FORMAT LIKE x..x.x
    int ip_length=ip.length();
    for(int i=0;i<ip_length;i++)
    {
        if(ip[i]=='.'&&ip[i+1]=='.')
            return 1;
    }
    return 0;
}
int check_range(string ip)
{
    //CHECKS IF THE RANGE IS BETWEEEN 0 AND 255 INCLUSIVE
    int ip_length=ip.length();
    int partialvalue;
    string partial="";
    for(int i=0;i<=ip_length;i++)
    {
        if(ip[i]!='.'||ip[i]!='\0')
            partial+=ip[i];
        if(ip[i]=='.'||ip[i]=='\0')
        {

            partialvalue=stoi(partial);//CONVERTS STRING TO INT
            if(partialvalue<0||partialvalue>255)
            return 0;
            else
            {
                //RESET THE SUBSTRING TO NULL AFTER PROCESSING PREVIOUS
                partial="";
            }
        }
    }
    return 1;
}
int validate_ip(string ip)
{
    int ip_length=ip.length();
    if(ip[0]=='.'||ip[ip_length-1]=='.')
        return 0;
    int dots=0;
    int temp=ip_length;

    //CHECK FOR THE NUMBER OF DOTS (.)
    while(temp--)
    {
        if(ip[temp-1]=='.')
            dots++;
    }

    if(dots!=3)
        return 0;
    else
    {
        if(checkadjacent_dots(ip))
            return 0;
        else
        {
            if(check_range(ip))
                return 1;
            else
                return 0;
        }
    }
}
void Ip::check()
{
    string number=ipstring;
    if(check_number(number))
        if(validate_ip(number))
            cout<<"valid ip\n";
        else
            cout<<"invalid ip\n";
    else
        cout<<"invalid ip\n";
}
int main()
{
    int test_cases;
    cout<<"enter the number of test cases\n ";
    cin>>test_cases;
    cin.ignore();
    int temp=test_cases;
    cout<<"enter the inputs.\n";
    int input_no=1;
    while(test_cases--)
    {
        cout<<"input no: "input_no<<"\n";
        input_no++;
        string ip_name;
        cout<<"enter the ip address\n";
        getline(cin,ip_name);
        Ip newip;
        newip.set_ip(ip_name);
        newip.check();
    }
    cout<<"outputs\n";
    int output_no=1;
    while(temp--)
    {
        cout<<"output no: "output_no<<"\n";
        output_no++;


    }
    return 0;
}
