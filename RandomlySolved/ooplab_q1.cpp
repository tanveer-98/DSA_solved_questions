#include<iostream>
using namespace std;
class DB;
class DM
{
    float meter,cmeter;
public :
    void getdata()
    {
        cout<<"enter distance in meters and centimeters"<<endl;
        cin>>meter>>cmeter;

    }
    void display()
    {
        cout<<meter<<"meter: "<<cmeter<<"centimeters"<<endl;
    }

    friend void add (DM&,DB&);
};
class DB
{

    float inch,feet;
public :
    void getdata()
    {
        cout<<"enter distance in feet and inches"<<endl;
        cin>>feet>>inch;

    }
    void display()
    {
        cout<<feet<<"feet: "<<inch<<"inches"<<endl;
    }
    friend void add (DM&,DB&);
};
void add (DM&,DB&)
{
    int choice;
    cout<<"enter choice"<<endl;
    cout<<"1.meter-centimeter"<<endl;
    cout<<"2.feet-inches"<<endl;
    if(choice==1)
    {

    }
    else
    {


    }
}
