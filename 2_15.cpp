# include <iostream>
using namespace std;

int add (int n){
    if (n<=1){
       
        return 1;
    }
    else {
        return (n+add(n-1));   
    }
}
int main (){
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= add(n);     
    cout<<X;
    return 0;
}