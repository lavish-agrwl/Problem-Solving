#include <iostream>
using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert nodes in the binary tree (for demonstration)
Node* insert(Node* root, int data) {
    if (!root) return new Node(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

// Function to count nodes with only one child
int countOneChildNodes(Node* root) {
    if(!root) return 0;
    int currCount = ((root->left && !root->right) || (!root->left && root->right)) ? 1 : 0;
    int leftCount = root->left ? countOneChildNodes(root->left) : 0;
    int rightCount = root->right ? countOneChildNodes(root->right) : 0;
    return currCount + leftCount + rightCount;
}



int main() {
    Node* root = nullptr;
    // Example tree construction
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    root = insert(root, 1);
    root = insert(root, 1);
    root = insert(root, 1);
    root = insert(root, 1);
    root = insert(root, 1);
    root = insert(root, 1);

    cout << "Nodes with only one child: " << countOneChildNodes(root) << endl;

    return 0;
}