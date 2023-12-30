#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a number-";
    cin>>a;
    cout<<"Enter a number2-";
    cin>>b;
    cout<<"Enter a number3-";
    cin>>c;
    if (a>b && a>c){
    cout<<"a is greater";
}
    else if (b>a && b>c)
    {
     cout<<"b is greater";
}
    else if (c>a && c>b)
    {
    cout<<"c is greaters ";
    }
    else
    cout<<"all are equal";

return 0;

}