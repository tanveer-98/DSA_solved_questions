#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	   double n;
	    int j;
        double prob;

	    cin>>n;
	    cin>>j;
	    if(j==0){
	        prob=fmod(((16*(n-1)*(n-2)*(n-3))/(2*(2*n-1)*(2*n-2)*(2*n-3))),1000000007);
	        cout<<prob;
	    }
	    else if(j==1){
	        prob=fmod(((n*(2*n-2)*(2*n-4)*4)/(2*n*(2*n-1)*(2*n-2)*(2*n-3))),1000000007);
	        cout<<prob;

	    }
	    else if(j==2){
	        prob=fmod(((n*(n-1)*24)/(2*n*(2*n-1)*(2*n-2)*(2*n-3))),1000000007);
	        cout<<prob;
	    }

	}
	return 0;
}

