#include <iostream>

using namespace std;
void sayHi(int a ,int b){

    cout<<"hello user"<<endl;
    if (a>b){
    cout<<a<<endl;
    }else{
    cout<<b<<endl;
    }

}
int main()
{
    int aa;
    int bb;
    cout <<"num 1"<<endl;
    cin >>aa;
    cout <<"num 2"<<endl;
    cin >>bb;

    sayHi(aa,bb);
    return 0;
}
