#include <iostream>

using namespace std;

struct node{
    int cnt;
    int val;
    node * left;
    node * right;
    int rH;
    int lH;
    bool isBalancedSubTree;
    node(int x){
        isBalancedSubTree = true;
        rH = 0;
        lH = 0;
        cnt = 1;
        val = x;
        left = NULL;
        right = NULL;
    }
};

node * add(node * root, int x){
    node *n = new node(x);
    if(root == NULL){
        root = n;
    }else{
        if(x < root->val){
            if(root->left == NULL){
                root->left = n;
            }else{
                add(root->left, x);
            }
        }else if(x > root->val){
            if(root->right == NULL){
                root->right = n;
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
    cout << n->val << " "  << n->isBalancedSubTree << endl;
    print(n->right);
}

int balance(node * n){
    if(n == NULL) return 0;
    n->lH = balance(n->left);
    n->rH = balance(n->right);
    if(abs(n->rH - n->lH) > 1){
        n->isBalancedSubTree = false;
    }
    return max(n->lH, n->rH) + 1;
}

bool isBalancedTree(node * n){
    if(n == NULL) return true;
    return n->isBalancedSubTree && 
           isBalancedTree(n->left) && 
           isBalancedTree(n->right); 
}

int main(){

    node * root = NULL;

    int x;
    while(cin >> x){
        if(x == 0) break;
        root = add(root, x);
    }

    balance(root);

    if(isBalancedTree(root)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}