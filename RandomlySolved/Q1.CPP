
#include <bits/stdc++.h>

using namespace std;

class Time
{
       private:
        int SS;
        int MM;
        int HH;

        public:
        Time()
        {
            		SS = 0;
           		 MM = 0;
            		HH = 0;
        }
        Time(int ch)
        {
           	 if (ch == 1)
            	{
                	SS = 40;
                	MM = 44;
                	HH = 0;
          	  }
          	  else
               {
               	 SS = 15;
                	MM = 36;
               	 HH = 0;
              }
        }
        Time(int mm, int ss)
        {
           		 SS = ss;
            		MM = mm;
            		HH = 0;
        }
        int returnTimeMM()
        {
           		 return MM;
        }
        int returnTimeSS()
        {
            		return SS;
        }
        void displayTime()
        {
           	 cout << to_string(HH) + ":" + to_string(MM) + ":" + to_string(SS);
        }
        void addTime(Time T)
        {
           	 MM += T.returnTimeMM();
          	  SS += T.returnTimeSS();
            	if (SS >= 60)
          	  {
               	 MM++;
               	 SS = SS%60;
           	 }
            if (MM >= 60)
            {
              	 HH++;
                	MM = MM%60;
            }
        }
        ~Time()
        {
            		cout << "\nDDD\n";
        }
} T1(1), T2(2);

int main()
{
    string tm3, tm4;

    //Displaying Time1, Time2
    cout << "\nTIME_1:- "; T1.displayTime();
    cout << "\nTIME_2:- "; T2.displayTime();
    cout << "\nEnter TIME_3: ";
    cin >> tm3;

    //Parsing to get Time3 and Displaying
    vector <string> time;
    stringstream check1(tm3);
    string intermediate;
    while(getline(check1, intermediate, ':'))
        time.push_back(intermediate);
    Time T3(stoi(time[0]), stoi(time[1]));
    cout << "\nTIME_3:- "; T3.displayTime();

    //Addition
    Time T4;
    T4.addTime(T1);
    T4.addTime(T2);
    T4.addTime(T3);

    //Displaying Result
    cout << "\nREQUIRED ADDED TIME:- "; T4.displayTime();

    return 0;
}
