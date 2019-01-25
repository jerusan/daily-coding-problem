#include<iostream>

using namespace std;

void printRepeating(int arr[], int size) 
{ 
int xorr = arr[0]; /* Will hold xor of all elements */
int set_bit_no; /* Will have only single set bit of xor */
int i; 
int n = size - 2; 
int x = 0, y = 0; 
	
/* Get the xor of all elements in arr[] and {1, 2 .. n} */
for(i = 1; i < size; i++) 
	xorr ^= arr[i];
 cout<<"xor value is "<<xorr<<endl;
for(i = 1; i <= n; i++) 
	xorr ^= i;
  cout<<"xor value is "<<xorr<<endl;

/* Get the rightmost set bit in set_bit_no */
set_bit_no = xorr & ~(xorr-1); 
 cout<<"Posiition of right mose bit" <<set_bit_no<<endl;
/* Now divide elements in two sets by comparing rightmost set 
bit of xor with bit at same position in each element. */
for(i = 0; i < size; i++) 
{ 
	if(arr[i] & set_bit_no) 
	x = x ^ arr[i]; /*XOR of first set in arr[] */
	else
	y = y ^ arr[i]; /*XOR of second set in arr[] */
        
}
 cout<<"value of x and y "<<x<<" , " <<y<<endl;
for(i = 1; i <= n; i++) 
{ 
	if(i & set_bit_no) 
	x = x ^ i; /*XOR of first set in arr[] and {1, 2, ...n }*/
	else
	y = y ^ i; /*XOR of second set in arr[] and {1, 2, ...n } */
}
  cout<<"value of x and y "<<x<<" , " <<y<<endl;
	
printf("The two repeating elements are %d & %d ", x, y);
 cout<<endl;
}	 


int main() 
{ 
  int arr[] = {1,1,2,2,3}; 
int arr_size = sizeof(arr)/sizeof(arr[0]); 
printRepeating(arr, arr_size);  
return 0; 
} 
