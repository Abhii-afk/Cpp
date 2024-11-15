//PRINT ALL THE SUBARRAYS


#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    for (int start = 0; start <n; start++)
    {
            for (int end = 0; end <n; end++)
            {
                for (int i = start; i <=end; i++)
                {
                    cout << arr[i];
                }
                cout <<" ";
            }
            cout << endl;
    }
    
    return 0;
}


//MAXIMUM SUBARRAY SUM WITHOUT KADANES ALGORITHM

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {5,4,-1,7,8};
    int max_sum = INT_MIN;
    for (int st = 0; st <n; st++)
    {
        int curr_sum =0;
        for (int end = 0; end <n; end++)
        {
            curr_sum += arr[end];
            max_sum = max(curr_sum,max_sum);
        }
    
    }
    cout << "Maximum subarray sum = " << max_sum;
    return 0;
}


//KADANE'S ALGORITHM

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 5;
    int curr_sum =0;
    int max_sum = INT_MIN;
    int arr[]= {5,4,-1,7,8};
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        max_sum = max(curr_sum,max_sum);
        if (curr_sum<0)
        {
            curr_sum = 0;
        }
        
    }
    cout << "Maximum subarray sum is = " << max_sum;
      
    return 0;
}