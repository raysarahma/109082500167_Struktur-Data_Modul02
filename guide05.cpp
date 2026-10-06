#include<iostream>
using namespace std;

void tukarValue(int x, int y){
    int temp = x;
    x= y;
    y= temp;
}

void tukarPointer(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y){
    int temp = x;
    x = y ;
    y =  temp;
}
int main(){
    int a = 4, b=6;
    tukarValue(a,b);
    cout<<"setelah call by Value        -> a = "<<a<<", b= "<<b<<"(tetap)"<<endl;

    tukarPointer(&a,&b);
    cout<<"setelah call by Pointer      -> a = "<<a<<", b= "<<b<<"(Berubah!)"<<endl;

    tukarReference(a, b);
    cout<<"setelah call by Reference    -> a = "<<a<<", b= "<<b<<"(Berubah Lagi!)"<<endl;

    return 0;
}