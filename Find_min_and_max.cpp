..................................Find minimum and maximum element in an array.............................

 /*  Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
 
 
 
Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  1000 */
 
 
 

pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long min =1e18;
    long long max=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return {min,max};
}