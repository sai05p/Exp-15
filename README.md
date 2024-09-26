# EXPERIMENT 15
# AIM:
To study and implement recursion.

# THEORY:
A function can call itself to fix smaller instances of the same problem, which is a powerful programming technique known as recursion. Recursion is a technique used in C++ when an issue can be divided into smaller, more manageable subproblems of the same kind that can all be resolved with the same function.

Key Components of Recursion:

Base Case: The condition needed for ending the recurrence. The function would call itself endlessly in the absence of a base case, resulting in infinite recursion.

Recursive Case: the part of the function where it calls within itself to address a more manageable issue.

How Recursion Works: When a recursive function is called, the following happens:

In the point where it executes the recursive call, the function pauses.

It makes a new call to the same function but with different (usually smaller) arguments.

Every paused call takes resume where it left off when the base case is satisfied, and the function provides a result.

FACTORIAL USING RECURSION:

```
#include <iostream>
using namespace std;
// Creating a function
int fact (int n){
    if (n<=1){
        // Terminating statement (base condition)
        return 1;
    }
    else {
        return (n*fact(n-1));    // Recursion
    }
}
int main (){
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= fact(n);      // Function calling
    cout<<n<<"!="<<X;
    return 0;
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/fb20799e-b972-4ba1-80f9-4b39bf7d08b8)


SUM OF INTEGERS USING RECURSION:
```
# include <iostream>
using namespace std;
// Creating a function
int add (int n){
    if (n<=1){
        // Terminating statement (base condition)
        return 1;
    }
    else {
        return (n+add(n-1));    // Recursion
    }
}
int main (){
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= add(n);      // Function calling
    cout<<X;
    return 0;
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/23304b78-03c5-4da9-b0e6-23e4909dddd2)


REVERSING A STRING USING A RECURSION:
```
# include <iostream>
#include <string.h>
using namespace std;
// Creating function
void reverse(char *str){
    if (*str)                     
    {
        reverse(str+1);            
        cout<<("%c",*str);

    }
}
int main (){
    char a[50];
    cout<<" Enter a string : ";
    cin>>a;
    reverse(a);                 
    return 0 ;
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/23fce134-53f8-4303-84ed-d6306a86806f)


REVERSING AN INTEGER USING RECURSION:
```
# include <iostream>
using namespace std;
void print_reverse(int i){
    if (i>0)                   
    {         
        cout<<(i%10);
        print_reverse(i/10);     
    }
}
int main (){
    int i;
    cout<<" Enter the number : ";
    cin>>i;
    print_reverse(i);                  
    return 0 ;
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/3fef4eb7-9df9-4c69-9439-bccff62c433e)

# CONCLUSION:
We effectively studied and implemented the idea of recursion in C++ in this experiment. Examples of recursion, which is the process by which a function calls itself to solve smaller sub-problems, included finding the factorial, creating Fibonacci sequences, and searching algorithms. 
