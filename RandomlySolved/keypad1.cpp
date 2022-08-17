
#include <bits/stdc++.h>
using namespace std;
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};

int cnt=0;
void  printWordsUtil(int number[], int curr_digit, char res[], int n,string output[])
{

    int i;
    if (curr_digit == n)
    {
       output[cnt++]=res;
        return ;
    }


    for (i=0; i<strlen(hashTable[number[curr_digit]]); i++)
    {
        res[curr_digit] = hashTable[number[curr_digit]][i];
        printWordsUtil(number, curr_digit+1,res, n,output);
        if (number[curr_digit] == 0 || number[curr_digit] == 1)
            return;
    }
}


int keypad(int num, string output[])
{
    int n=to_string(num).length();
    char result[n+1];
    result[n] ='\0';
     int temp =num;
     int number[n];
     int i=0;
     while(temp>0)
     {
         number[i++]=temp%10;
         temp/=10;
     }
     reverse(number,number+n);
     printWordsUtil(number, 0, result, n,output);
     return cnt;
}
int main(void)
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }

}
