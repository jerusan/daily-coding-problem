#include<iostream>
#include<vector>

using namespace std;

vector<int> productArray(vector<int> list){
  int size = list.size();
  vector<int> prod(size);

  int temp = 1;

  for(int i=0; i<size; i++){
    prod[i] = temp;
    temp *= list[i];
  }

  temp = 1;
  
  for(int i=size-1; i>=0; i--){
    prod[i] *= temp;
    temp *= list[i];
  }
  
  return prod;
}

int main(){
  vector<int> input(5);
  for(int i=1; i<6; i++){
    input[i-1] = i;
  }
  vector<int> results(input.size());

  results = productArray(input);

  for (int i:results)
    cout<<i<<" ";
  cout<<endl;
}
