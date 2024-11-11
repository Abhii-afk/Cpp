/*#include<iostream>
using namespace std;
// sum of 2 numbers
int sum(int a , int b){

    int s = a + b;
    return s;
}


int main(){
   cout << sum(10,5);
    return 0;
}
*/

/*
Q1 -
MIN OF TWO NUMBERS

#include<iostream>
using namespace std;

int min_of_two(int a, int b){  //parameters = (int a , int b) --> copy of the arguements
    if (a>b)            
    {
    cout << "b is minimum" << endl;
    }
    else
    cout << "a is minimum" << endl;
    
}

int main(){
     min_of_two(2,4); // Arguements --> Actual value passed to the functions
    return 0;
}
*/

/*
Q2 -
Sum of numbers from 1 to n

#include<iostream>
using namespace std;
int sumN(int n){
int sum = 0;
for (int i = 1; i <=n; i++)
{
    sum+=i;
}
return sum;
}

int main(){
    cout << sumN(4)<< endl;
    cout << sumN(40)<< endl;
    return 0;
}
*/

/*
Q3 -
Calculate n factorial

#include<iostream>
using namespace std;
int factorial(int n){
int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
}


int main(){
   cout << factorial(5) << endl;
    return 0;
}
*/

