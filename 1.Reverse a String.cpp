//1.Reverse a String
 
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int start=0;
        int end=s.size()-1;
        while(start<=end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
        cout<<s<<endl;
	return 0;
}
