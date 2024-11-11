/*
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int array[5] = {21,6,34,-54,-67};
    int smallest = INT_MAX; 
    for (int i = 0; i < 5; i++)
    {
        if (array[i]<smallest)
        {
            smallest = array[i];
        }
       // smallest = min(array[i],smallest) --> Alternative for if statement
        
    }
            cout << "SMALLEST  = " << smallest << endl;
    
    return 0;
}
*/
//Linear search alogorithm
/*
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[] = {2,45,6,-5,9,23};
    int size = 6;
    int target = 90;
    cout << LinearSearch(arr,size,target) << endl;
    return 0;
}
*/


//REVERSE AN ARRAY
/*
#include<iostream>
using namespace std;
void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int arr[] = {4,3,6,5,9,7,8};
    int size = 7;
    ReverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
    
    return 0;
}
*/

//WAF TO PRINT SUM AND PRODUCT OF ALL ELEMENTS IN ARRAY
/*
#include<iostream>
using namespace std;
void SumandProduct(int arr[],int size){
 int sum = 0;
 int pro = 1;
for (int i = 0; i <arr[size-1]; i++)
{
    sum += arr[i];
    pro *= arr[i];
}
cout << "SUM = " << sum << endl;
cout << "PRODUCT = " << pro << endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
 SumandProduct(arr,size);
    return 0;
}
*/

//WAF TO SWAP MAX AND MIN NUMBER IN AN ARRAY
/*
#include<iostream>
#include <climits>
using namespace std;
int MinandMax(int arr[],int size,int &smallest,int &largest){

    for (int i = 0; i <size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
        
    }
    return smallest;
    return largest;
}
int main(){
    int arr[5] = {3,56,43,-7,-5};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
     MinandMax(arr,size,smallest,largest);
     cout << smallest <<endl;
     cout << largest <<endl;
    return 0;
}
*/

//WAF TO PRINT INTERSECTION OF AN ARRAY
/*
#include<iostream>
using namespace std;
void Unique_val(int arr[],int arr1[]){
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <4; j++)
        {
            if (arr[i]==arr1[j])
            {
                cout << arr[i] <<endl;
            }
            
        }
        
    }
    

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[4] = {1,5,4,7};
    Unique_val(arr,arr1);

    return 0;
}
*/

//WAF TO PRINT ALL UNIQUE VALUES IN AN ARRAY
#include<iostream>
using namespace std;
void Unique_val(int arr[]){
    for (int i = 0; i <7; i++)
    {
        for (int j =i+1; j <7; j++)
        {
            if (arr[i]==arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
            
        }
        
    }
    
}
int main(){
    int arr[8] = {1,2,3,1,2,6,3,4};
    Unique_val(arr);
    return 0;
}
