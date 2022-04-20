#include <iostream>
#include <random>
using namespace std;
int main()
{
  int n = 1 + (rand() % 100);
  int p;
  cout<<"Input number: ";
  while(true){
    cin>>p;
    if(p==n){
      cout<<"Yes"<<endl;
      break;
    }
    else if(p<n){
      cout<<">"<<endl;
    }
    else if(p>n){
      cout<<"<"<<endl;
    }
    else{
      continue;
    }
  }
  cout<<"Correct Ansver is: "<<n<<endl;
}
