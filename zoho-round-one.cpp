#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int n = len/2 +1;
    for(int i=n,j=1;i <= len;i++,j++) {
        string spaceStr(len-j, ' '); 
        cout << spaceStr;
        cout << s.substr(n-1,j) << endl;
    }
    for(int i=n,j=1;i < len;i++,j++) {
        string spaceStr(len-i-1, ' '); 
        cout << spaceStr;
        cout << s.substr(n-1,n) << s.substr(0,j) << endl;
    }
	// your code goes here
	return 0;
}
