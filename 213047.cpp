//213047
//Lab Task 5
#include <iostream>
using namespace std;

class Node {
  public:
  char data;
  Node* left;
  Node* right;

  Node(char data) 
  {
    this->data = data;
    left = right = NULL;
  }
};

void insert(Node*& root, char data) 
{
  if (root == NULL) {
    root = new Node(data);
  } else if (data < root->data) {
    insert(root->left, data);
  } else {
    insert(root->right, data);
  }
}

void preorder(Node* root) 
{
  if (root == NULL) return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void inorder(Node* root) 
{
  if (root == NULL) return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void postorder(Node* root) 
{
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

int main() 
{

  Node* root = NULL;

  insert(root, 'F');
  insert(root, 'B');
  insert(root, 'G');
  insert(root, 'A');
  insert(root, 'D');
  insert(root, 'I');
  insert(root, 'C');
  insert(root, 'E');
  insert(root, 'H');


  cout << "Preorder: ";
  preorder(root);
  cout << endl;

  cout << "Inorder: ";
  inorder(root);
  cout << endl;

  cout << "Postorder: ";
  postorder(root);
  cout << endl;

  return 0;
}
