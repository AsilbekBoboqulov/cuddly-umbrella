#include <iostream>
using namespace std;
int main()
{
	int a; cin >> a;
	cout<<"2 ";
	for(int i = 3; i <= a; i++){
		for(int j = 2; j < i; j++){
			if((i%j!=0)&&(j==(i-1))){
				cout<<i<<" ";
			}
			else if(i%j!=0){
				continue;
			}
			else{
				break;
			} 
		}
	}
}
