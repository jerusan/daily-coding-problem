#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

8,6,-1,-4,4,6,4,7,3,7,1,2 =>5

  
//nlogn time and constant space complexity
int missingNum(vector<int> list){
  /*std::sort(list.begin(), list.end());
  for(int i=1;i<10;i++){
    //cout<<i<<endl;
    if(list[i]>0 && list[i] != list[i-1]+1)
      return list[i-1] + 1;
  }
  return INT_MIN;*/
  int j=0;
  for(int i=0; i<list.size(); i++){
      if(j<1) std::swap(list[i], list[j]), j++;
  }
  for(int i:list) cout<<i<<" ";
  cout<<endl;
  for(int i:list){
    if(i>0) list[i-1] = i;
  }
  for(int i:list) cout<<i<<" ";
  cout<<endl;
  for(int i=0; i<list.size(); i++){
    if(list[i] != i+1) return i+1;
  }
}

int main(){
  vector<int> arr(10);
  int j=9;
  for(int i=0; i<10; i++){
    //if(i>4) arr[i] = -1*(i+1);
    arr[i]=j;
    j--;
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<missingNum(arr)<<endl;
}
