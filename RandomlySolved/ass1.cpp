
#include <bits/stdc++.h>

using namespace std;

 class Shape
 {
     protected:
    double l,b;
    public:
    void getdata(double l1,double b1)
    {
        l=l1;
        b=b1;
    }
        void virtual display_area()=0;
 };
 class triangle:public Shape
 {
     public:
    void display_area()
    {
        cout<<"\nArea of Triangle:"<<(0.5*l*b);
    }
 };
 class Rectangle:public Shape
 {
     public:
    void display_area()
    {
        cout<<"\nArea of Rectangle:"<<l*b;
    }
 };
 int main()
 {
    Shape * s1;
    triangle t1;
        s1=&t1;
    s1->getdata(40,20);
    s1->display_area();

    Rectangle r1;
    s1=&r1;
    s1->getdata(6,4);
    s1->display_area();
    return 0;
 }

