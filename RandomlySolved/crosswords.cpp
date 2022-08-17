
#include <bits/stdc++.h>
using namespace std;
int ways = 0;
void printMatrix(vector<string>& matrix, int n)
{
    for (int i = 0; i < n; i++)
        cout << matrix[i] << endl;
}

vector<string> checkHorizontal(int x, int y,
                               vector<string> matrix,
                               string currentWord)
{
    int n = currentWord.length();

    for (int i = 0; i < n; i++) {
        if (matrix[x][y + i] == '-' ||
            matrix[x][y + i] == currentWord[i]) {
            matrix[x][y + i] = currentWord[i];
        }
        else {

            matrix[0][0] = '@';
            return matrix;
        }
    }

    return matrix;
}

vector<string> checkVertical(int x, int y,
                             vector<string> matrix,
                             string currentWord)
{
    int n = currentWord.length();

    for (int i = 0; i < n; i++) {
        if (matrix[x + i][y] == '-' ||
            matrix[x + i][y] == currentWord[i]) {
            matrix[x + i][y] = currentWord[i];
        }
        else {

            // this shows that word
            // cannot be placed vertically
            matrix[0][0] = '@';
            return matrix;
        }
    }
    return matrix;
}

void solvePuzzle(vector<string>& words,
                 vector<string> matrix,
                 int index, int n)
{
    if (index < words.size()) {
        string currentWord = words[index];
        int maxLen = n - currentWord.length();


        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= maxLen; j++) {
                vector<string> temp = checkVertical(j, i,
                                        matrix, currentWord);

                if (temp[0][0] != '@') {
                    solvePuzzle(words, temp, index + 1, n);
                }
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= maxLen; j++) {
                vector<string> temp = checkHorizontal(i, j,
                                      matrix, currentWord);

                if (temp[0][0] != '@') {
                    solvePuzzle(words, temp, index + 1, n);
                }
            }
        }
    }
    else {

        printMatrix(matrix, n);
        cout << endl;

        ways++;
        return;
    }
}


int main()
{
    int n1 = 10;
    vector<string> matrix;
    int temp=10;

    while(temp--)
    {
        string crossword;
        cin>>crossword;
        matrix.push_back(crossword);
     }
    vector<string> words;
    string word_sentence;
    cin>>word_sentence;
    string word="";
    int i=0;
    while(word_sentence[i]!='\0')
    {
        if(word_sentence[i]==';')
        {
            words.push_back(word);
            word="";
            i++;

		}
		else
		{
                word+=word_sentence[i];
                i++;
        }


    }
    words.push_back(word);

    solvePuzzle(words, matrix, 0, n1);
    return 0;
}

