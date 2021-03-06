#include <iostream>
 
using namespace std;
 
struct node{
    int val;
    node * left;
    node * right;
    int level;
    node(int x){
        val = x;
        level = -1;
        left = NULL;
        right = NULL;
    }
};
 
node * add(node * root, int x){
    node *n = new node(x);
    if(root == NULL){
        root = n;
        root->level = 0;
    }else{
        if(x < root->val){
            if(root->left == NULL){
                root->left = n;
                root->left->level = root->level + 1;
            }else{
                add(root->left, x);
            }
        }else if(x > root->val){
            if(root->right == NULL){
                root->right = n;
                root->right->level = root->level + 1;
            }else{
                add(root->right, x);
            }
        }
   }
   return root;
}
 
 
void print(node * n){
    if(n == NULL) return;
    cout << n->val << " "  << n->level << endl;
    print(n->left);
    print(n->right);
}
 
void printLeaves(node * n){
    if(n == NULL) return;
    else{
        printLeaves(n->left);
    if(n->left != NULL && n->right != NULL){
        cout << n->val << endl;
    }
    printLeaves(n->right);
}
}
 
int main(){
 
    node * root = NULL;
 
    int x;
    while(cin >> x){
        if(x == 0) break;
        root = add(root, x);
    }
 
    printLeaves(root);
 
    return 0;
}