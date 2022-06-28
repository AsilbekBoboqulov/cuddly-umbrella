#include <iostream>
#include <cmath>
using namespace std;
int fact(int n){
	long long s = 1;
	for(int i = 1; i <= n; i++){
		s*=i;
	}
	return s;
}
int main()
{
	long long n, w = 0; cin >> n; long long arr[n];
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	for(int j = 0; j < n; j++){
	    for(int i = 0; i <= arr[j]; i++){
	    	w+=(fact(arr[j])*pow((-1),i)/fact(i));
	    }
	    cout<< w << " ";
	    w=0;
	}
}
