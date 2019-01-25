#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

string addUp2K(vector<int> list, int k){
  unordered_map<int, bool> hash;
  for(int i:list){
    if (hash[k-i]){
      cout<<"numbers are "<<i<<","<<k-i<<endl;
      return "true";
    }
    else
      hash[i] = true;
  }
  return "false";
}

int main(){
  vector<int> arr;
  for(int i=0; i<10; i++){
    arr.push_back(10-i);
  }
  cout<<addUp2K(arr, 12)<<endl;
}
