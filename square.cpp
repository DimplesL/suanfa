#include<iostream>
using namespace std;

int main (int argc, char **argv){
    long long int a, b, c;
    long long int n,m;
    cin >> a >> b >> c;
    if (a%c == 0){
        n = a/c;
    }
    else{
        n = a/c+1;
    }
    if (b%c == 0){
        m = b/c;
    }
    else{
        m = b/c+1;
    }
    cout<<n*m<<endl;
    return 0;
}
