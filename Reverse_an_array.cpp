..................................Reverse an Array .............................

 /* Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'.
 T testcases follow. Each testcase contains two lines of input.
 First line contains N the size of the array A.
 The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1
*/






#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N,0);
        
        for(int i=0;i<N;i++) cin>>arr[i];
        
        int First=0;
        int Last=N-1;
        
        while(First<=Last)
        {
           swap (arr[First],arr[Last]);
            
            First++;Last--;
        }
        
        for(int i=0;i<N;i++) cout<<arr[i]<<" ";
        
        cout<<endl;
        
        
    }
	//code
	return 0;
}