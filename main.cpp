#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int count=0;
    for (int i = 0; i < a; i++)
    {
        int b,c;
        cin>>b>>c;
        if (b<=c-2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}