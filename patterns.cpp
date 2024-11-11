/* Q1 -
* * * *
* * * *
* * * *
* * * *

 #include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range" << endl;
    cin >> n;
for (int i=0; i<n; i++)   //FOR ROWS 
{
    for (int j=0; j<n; j++) // FOR COLUMNS 
    {
        cout << "*" << " ";
    }
    cout<<endl;
    
}

    return 0;
}
*/

/* Q2 -
A B C D
A B C D
A B C D
A B C D 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)       // I HAVE DONE CHAR J = 65 TO 69 WHOCH WAS NOT GENERALISED
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    return 0;
}
*/

/*Q3 -

 1 2 3
 4 5 6
 7 8 9

#include<iostream>
using namespace std;
int main() {
int n,num=1;
    cout << "Enter the range" << endl;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
        
    }
    
    return 0;
}
*/

/* Q4 - 
 *
 * *
 * * * 
 * * * * 

#include<iostream>
using namespace std;
int main(){
int n;
    cout << "Enter the range" << endl;
    cin >> n;
    for(int i=0;i<n;i++){

      for (int j = 0; j<i+1; j++) // Or we can i<=n and j<i also
      {
        cout << "*"<< " "; 
      }
      cout << endl;
      
    }
    return 0;
}
*/

/*Q5 - 
1 
2 2
3 3 3
4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i+1; j++)  // Or make a variable num=1 and cout num and after the inner loop increment the num with +1
        {
                cout << i+1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}
*/


/*Q6 - 
A 
B B 
C C C 
D D D D 
E E E E E 

#include<iostream>
using namespace std;
int main(){
int n = 5;
char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << ch << " "; 
        }
        ch++;
        cout << endl;
        
    }
    
    return 0;
}
*/

/*Q7 - 
1
1 2
1 2 3
1 2 3 4

#include<iostream>
using namespace std;
int main(){
int n = 4;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i+1; j++)  // from j=1 to j < i+1 without using third variable
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
   return 0; 
}
*/

/*Q8 -
1
2 1
3 2 1
4 3 2 1

#include<iostream>
using namespace std;
int main(){
int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
*/


/*FLOYD'S TRAINGLE PATTERN
Q9 -
1 
2 3
4 5 6
7 8 9 10

#include<iostream>
using namespace std;
int main(){
int n = 4,num =1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num << " ";
            num++;
        }
            cout << endl;        
    }
    
    return 0;
}
*/


/*INVERTED TRAINGLE PROBLEM
Q10-
1111
 222
  33
   4

#include<iostream>
using namespace std;
int main(){
int n =4;
    for (int i = 0; i < n; i++)
    {

        // Spaces
        for (int j = 0; j <i; j++)        
        {
            cout << " ";
        }

        // Numbers

        for (int j = 0; j < (n-i); j++)
        {
            cout << (i+1);
        }
        cout << endl;
    }
    
    return 0;
}
*/

/*
PYRAMID PATTERN
Q11 -
        1
      1 2 1 
    1 2 3 2 1
  1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        // spaces - print (n - i - 1) spaces to align the pattern
        for (int j = 0; j < n - (i + 1); j++) {
            cout << " ";
        }
        
        // num1 - print increasing numbers from 1 up to (i + 1)
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // num2 - print decreasing numbers from i back down to 1
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        // move to the next line after each row is printed
        cout << endl;
    }
    
    return 0;
}
*/
//HOLLOW DIAMOND PATTERN
//Q12 -










#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << "*";


        if (i!=0)
        {

        for (int j = 0; j < 2*i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";
         }
    
     cout << endl;      
    
    }


    //BOTTOM 
    for (int i = 0; i < n-1; i++)
    {
      // spaces
          for (int j = 0; j <i+1; j++)
        {
            cout << " ";
        }

      cout << "*";
      if (i!=(n-2))
      {
        //spaces
            for (int j = 0; j <2*(n-i)-5; j++)
        {
            cout << " ";
        }
        cout << "*";
      }
       cout << endl;
        
    }
    
    
    return 0;
}