#include<iostream>
using namespace std;
int main()
{

int arr[]={1,2,3,4,5};
int *ptr;
ptr=arr;
cout<<ptr<<"  "<<*ptr<<endl;
ptr++;
cout<<ptr<<"  "<<*ptr<<endl;
ptr=ptr+2;;
cout<<ptr<<"  "<<*ptr<<endl;
ptr++;
cout<<ptr<<"  "<<*ptr<<endl;


return 0;
}
