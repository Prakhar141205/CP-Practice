#include <iostream>
#include <vector>

using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        right = left = nullptr;
    }
};

static int i = -1;
Node* buildTree(vector<int> preorder){
    i++;

    if(preorder[i] == -1) return nullptr;
    Node* newNode = new Node(preorder[i]);
    newNode->left  = buildTree(preorder);
    newNode->right = buildTree(preorder);
    return newNode;
}

void preOrder(Node* root){
    if(!root) return;

    
}
int main(){

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << root->data <<"\n";

    cout << root->left->data <<"\n";

    return 0;
}