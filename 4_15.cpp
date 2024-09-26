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