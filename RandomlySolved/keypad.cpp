#include <bits/stdc++.h>
using namespace std;
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};

int sizeL(int number)
{
    int cnt=0;
    while(number>0)
    {

        cnt++;
        number/=10;
    }
    return cnt;
}
void  printWordsUtil(int number[], int curr_digit, char output[], int n)
{
    int i;
    if (curr_digit == n)
    {
        printf("%s ", output);
        return ;
    }

    for (i=0; i<strlen(hashTable[number[curr_digit]]); i++)
    {
        output[curr_digit] = hashTable[number[curr_digit]][i];
        printWordsUtil(number, curr_digit+1, output, n);
        if (number[curr_digit] == 0 || number[curr_digit] == 1)
            return;
    }
}


void printWords(int number, string output[])
{
    //int n=sizeL(number);
    int temp=number;
    //int n;
  //  n=3;
    //char result[4];
    int num[3];
    cout<<"printing the 1umber"<<endl;
    for(int i=0;i<3;i++)
    {
        num[i]=temp%10;
        temp/=10;

    }

   // result[n] ='\0';
   // printWordsUtil(num, 0, result, n);
}

//Driver program
int main()
{
    int number;
    cin>>number;
    string output[100000];
    printWords(number,output);
    return 0;
}
