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
int h = 0;
node * add(node * root, int x){
    node *n = new node(x);
    if(root == NULL){
        root = n;
        root->level = 1;
        h = max(root->level, h);
    }else{
        if(x < root->val){
            if(root->left == NULL){
                root->left = n;
                root->left->level = root->level + 1;
                h = max(root->left->level, h);
            }else{
                add(root->left, x);
            }
        }else if(x > root->val){
            if(root->right == NULL){
                root->right = n;
                root->right->level = root->level + 1;
                h = max(root->right->level, h);
            }else{
                add(root->right, x);
            }
        }
   }
   return root;
}
 
 
 
int main(){
 
   node * root = NULL;
   while(true){
    int k;
    cin>>k;
    if(k==0){
        break;
    }else{
        root = add(root,k);
    }
   }
   cout<<h<<endl;
    return 0;
}
