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
  node *root = nullptr;
  tree() {}
  void preorder(node *ptr) {
    if (ptr != nullptr) {
      cout << "" << ptr->data;
      preorder(ptr->left);
      preorder(ptr->right);
    }
    void inorder(node * ptr) {
      if (ptr != nullptr) {
        inorder(ptr->left);
        cout << "" << ptr->data;
        inorder(ptr->right);
      }
      void postorder(node * ptr) {
        if (ptr != nullptr) {
          postorder(ptr->left);
          postorder(ptr->right);
          cout << "" << ptr->data;
        }
      }
    };
    int main() { return 0; }