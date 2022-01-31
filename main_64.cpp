#include <iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i <= 10; i++){
        if(i%2==0){
            cout << i << endl;
        }
        else{
            continue;
        }
    }
}
