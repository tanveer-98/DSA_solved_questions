#include<iostream>
using namespace std;
class complex{

    private:
            float real,imaginery;
    public:
            complex(float a,float b)
            {
                imaginery=b;
                real=a;
            }
            complex()
            {
                cout<<"default constuctor"<<endl;
            }
            void display()
            {
                cout<<"complex no:"<<real<<"+i"<<imaginery<<endl;
            }
};
int main()
{
    complex c(4.0,2.0);
    c.display();
    complex *c2=new complex(2,0);
    c2->display();
    complex c3;

    return 0;
}
