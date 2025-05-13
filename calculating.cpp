#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin>>a >> b;
    int add = a + b;
    int sub = a - b;
    int div = a/b;
    int mod = a % b;
    cout<< a <<" + "<< b << " = " << add<<endl;
    cout<< a <<" - "<< b << " = " << sub<<endl;
    cout<< a <<" / "<< b << " = "<< div<<endl;
    cout<< a <<" % "<< b << " = " << mod<<endl;
    
    return 0;
}