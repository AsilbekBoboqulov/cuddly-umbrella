#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin >> a;
  string greeting = a;
  reverse(greeting.begin(),greeting.end());
  cout<<greeting<<endl;
}
