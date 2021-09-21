#include<bits/stdc++.h>
using namespace std;
struct node {
    int info;
    struct node *llink;
    struct node *rlink;
};

typedef struct node* NODE;

NODE getnode() {
    NODE x;
    x = new node;
    return x;
}

void inorder(NODE root)
{
if(root==NULL) return;
inorder(root->llink);
cout<<root->info;
inorder(root->rlink);
}

void postmirror(NODE root)
{
if(root==NULL) return;
postmirror(root->llink);
postmirror(root->rlink);

//exchange
NODE temp = root->llink;
root->llink= root->rlink;
root->rlink = temp;
}

NODE insertnode(int item, NODE root) {
    NODE temp, cur, prev;
    temp=getnode();
    temp->info = item;
    temp->llink = NULL;
    temp-> rlink = NULL;
    if(root==NULL)
        return temp;
    prev = NULL;
    cur = root;
    while(cur!=NULL) {
        prev = cur;
        if(item==cur->info) {
            cout<<"Duplicate items are not allowed";
            delete temp;
            return root;
        }
        if(item<cur->info)
            cur=cur->llink;
        else
            cur=cur->rlink;
    }
    if(item<prev->info)
        prev->llink = temp;
    else
        prev->rlink = temp;
    return root;
}

int main() {
    int item;
    NODE root, cur;
    root=NULL;

    while(1) {
        cout<<"Enter the item to be inserted:";
        cin>>item;
        if(item!=0)
        root = insertnode(item, root);
        else
            break;
    }

    cout<<"Initial binary tree\n";
    inorder(root);
    cout<<"Mirror binary tree\n";
    postmirror(root);
    inorder(root);

    return 0;
}
