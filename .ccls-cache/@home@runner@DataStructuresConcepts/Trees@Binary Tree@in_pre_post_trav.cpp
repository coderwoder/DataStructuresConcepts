#include <iostream>
#include <stdio.h>
using namespace std;
template <typename type> class tree {
  struct node {
    type data;
    node *left;
    node *right;
    node(type d) {
      data = d;
      left = right = nullptr;
    }
  };

public:
  node *root = nullptr; // Head of our tree
  tree() {
    node *f = new node('F');
    node *g = new node('G');
    node *h = new node('H');
    node *i = new node('I');
    node *j = new node('J');
    node *k = new node('K');
    f->right = g;
    f->left = h;
    g->right = i;
    g->right = j;
    h->left = k;
    root = f;
  }
  void preorder(node *ptr) {
    if (ptr != nullptr) {
      cout << " " << ptr->data;
      preorder(ptr->left);
      preorder(ptr->right);
    }
  }
  void inorder(node *ptr) {
    if (ptr != nullptr) {
      inorder(ptr->left);
      cout << " " << ptr->data;
      inorder(ptr->right);
    }
  }
  void postorder(node *ptr) {
    if (ptr != nullptr) {
      postorder(ptr->left);
      postorder(ptr->right);
      cout << " " << ptr->data;
    }
  }
};
int main() {
  tree<char> obj; //  Here we already created a root and the tree  //
  if (obj.root == NULL)
    cout << "Empty Tree hah!";
  else {
    cout << "Inorder Traversal" << endl;
    obj.inorder(obj.root);
    cout << endl;
    
    cout << "Preorder Traversal" << endl;
    obj.preorder(obj.root);
    cout << endl;
    
    cout << "Postorder Traversal" << endl;
    obj.postorder(obj.root);
    cout << endl;
  }
  return 0;
}