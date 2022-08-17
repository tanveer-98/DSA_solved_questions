#include <bits/stdc++.h>
#include <string>

using namespace std;
const char hashTable[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string out[1000000];
int num=0;
void  printWordsUtil(string number, int curr_digit, char result[], int n,string output[])
{
    int i;
    if (curr_digit == n)
    {
       // output[num++]=result;
       cout<<result<<"\n";
        return ;
    }


    for (i=0; i<strlen(hashTable[number[curr_digit]]); i++)
    {
        result[curr_digit] = hashTable[number[curr_digit]][i];
        printWordsUtil(number, curr_digit+1, result, n,output);
        if (number[curr_digit] == '0' || number[curr_digit] == '1')
            return;
    }
}

int keypad(int number, string output[])
{
    string NUMBER;
    NUMBER=to_string(number);
    int temp=number;
    int n=0;
    n=NUMBER.length();
    char result[n+1];
    result[n] ='\0';
    printWordsUtil(NUMBER, 0, result, n,output);
    return num;
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
   /* for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }*/
    return 0;
}


