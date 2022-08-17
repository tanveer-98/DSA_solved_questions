#include <iostream>
#include <queue>
#include <stdlib.h>
#include<time.h>

using namespace std;
// Maximum Height of Huffman Tree.
#define MAX_SIZE 100
class HuffmanTreeNode {
public:
char data;
int freq;
HuffmanTreeNode* left;
HuffmanTreeNode* right;
 // Initializing the current node
HuffmanTreeNode(char character, int frequency)
{
data = character;
freq = frequency;
left = right = NULL;
}
};
// Custom comparator class
class Compare {
public:
bool operator()(HuffmanTreeNode* a, HuffmanTreeNode* b)
{
return a->freq > b->freq;
}
};
HuffmanTreeNode* mergeNode(priority_queue<HuffmanTreeNode*,
vector<HuffmanTreeNode*>, Compare> Q)
{
while (Q.size() != 1) {
HuffmanTreeNode* left = Q.top();
Q.pop();
HuffmanTreeNode* right = Q.top();
Q.pop();
HuffmanTreeNode* node = new HuffmanTreeNode('$', left->freq + right->
 freq);
node->left = left;
node->right = right;
Q.push(node);
}
 return Q.top();
}
// It uses arr to store the codes
void printCodes(HuffmanTreeNode* root, int arr[], int top)
{
if (root->left) {
arr[top] = 0;
printCodes(root->left, arr, top + 1);
}
if (root->right) {
arr[top] = 1;
printCodes(root->right, arr, top + 1);
}
if (!root->left && !root->right) {
cout << root->data << " ";
for (int i = 0; i < top; i++) {
cout << arr[i];
}
cout << endl;
}
}
void HuffmanCodes(char data[], int freq[], int size)
{
priority_queue<HuffmanTreeNode*, vector<HuffmanTreeNode*>, Compare> Q;
for (int i = 0; i < size; i++) {
HuffmanTreeNode* newNode = new HuffmanTreeNode(data[i], freq[i]);
Q.push(newNode);
}
HuffmanTreeNode* root = mergeNode(Q);
// Print Huffman Codes
int arr[MAX_SIZE], top = 0;
printCodes(root, arr, top);
}
// Main function
int main()
{
char data[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
int size = sizeof(data) / sizeof(data[0]);
int freq[10];
int sum = 10000;
int subSum = sum;
srand(time(0));
for(int i=0; i<size-1; i++){
 freq[i] = rand()%subSum;
 subSum -= freq[i];
}
freq[size-1] = subSum;
cout << "Frequencies are: ";
for(int i=0; i<size; i++){
 cout << freq[i] <<" ";
}
 cout <<endl;
HuffmanCodes(data, freq, size);
return 0;
}
