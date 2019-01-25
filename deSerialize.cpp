#include<iostream>
#include<stack>

using namespace std;

struct node{
  string key;
  node* left;
  node* right;
};

string serialize(node* root){
  stack<node> holder;
  string res;
  while(root){
    if(root.right)
      holder.push(root.right);
    res.append(root.key);
    res.append();
  }
}
