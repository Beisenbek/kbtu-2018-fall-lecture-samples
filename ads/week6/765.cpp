#include <iostream>

using namespace std;

struct node{
    int cnt;
    int val;
    node * left;
    node * right;
    int level;
    node(int x){
        cnt = 1;
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
        }else if(x == root->val){
            root->cnt++;
        }
   }
   return root;
}

node * find(int x){

}

int rightmost(node * root){
    if(root->right == NULL) return root->val;
    rightmost(root->right);
}

node * del(node * root, int x){
    if(root == NULL) return root;
    if(root->val == x){
        if(root->right == NULL && root->left == NULL){
            delete root;
            return NULL;
        }
        if(root->right != NULL && root->left == NULL){
            node * temp = root->right;
            delete root;
            return temp;
        }
        if(root->right == NULL && root->left != NULL){
            node * temp = root->left;
            delete root;
            return temp;
        }
        root->val = rightmost(root->left);
        root->left = del(root->left, root->val);
        return root;
    }

    if(x < root->val){
        root->left = del(root->left, x);
        return root;
    }

    if(x > root->val){
        root->right = del(root->right, x);
        return root;
    }
}

void print(node * n){
    if(n == NULL) return;
    print(n->left);
    cout << n->val << " "  << n->cnt << endl;
    print(n->right);
}

int main(){

    node * root = NULL;

    int x;
    while(cin >> x){
        if(x == 0) break;
        root = add(root, x);
    }

    print(root);

    return 0;
}