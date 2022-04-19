#include <iostream>
using namespace std;
int main()
{
	string n; getline(cin, n); int c = 0;
	for(int i = 97; i < 123; i++){
	char a{i};
	    for(int j = 0; j < n.length(); j++){
	    	if(n[j]==a){
	    		c++;
	    	}
	    }
	    cout<<a<<" "<<c<<endl;
	    c-=c;
	}	
	for(int i = 65; i < 91; i++){
	char a{i};
	    for(int j = 0; j < n.length(); j++){
	    	if(n[j]==a){
	    		c++;
	    	}
	    }
	    cout<<a<<" "<<c<<endl;
	    c-=c;
	}
}
