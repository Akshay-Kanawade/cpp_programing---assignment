//multiplication table

#include<iostream>
using namespace std;

main() {
    for(int i=1;i<=10;i++) {
        //cout<<"Multiplication table of "<<i<<endl;
        for(int j=1;j<=10;j++) {
            //This inner loop will execute 10 times for each iteration of the outer loop
            cout<<(i * j)<<"\t";
        }
        cout<<endl;
    }
}
