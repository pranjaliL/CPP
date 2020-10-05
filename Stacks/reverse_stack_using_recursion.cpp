/*
	Reverse a stack using recursion
*/

#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> st, int x) {
	if(st.size() == 0)
	    st.push(x);
	else {
		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);
		st.push(a);
	}
}

void reverse(stack<int> st) {
	if(st.size() > 0) {
		int x = st.top();
		st.pop();
		reverse(st);
		insert_at_bottom(st, x);
	}
}

int main() {
    stack<int> st;
	cout<<"enter the number to perform push";
	int k;
	cin>>k;
	int no;
	cout<<"enter the numbers to push to stack";
	for(int i=0;i<k;i++)
	{
		//cout<<"enter the number to push to stack";
		cin>>no;
		st.push(no);
	}

	reverse(st);
	cout << "Reversed Stack" << endl;

	while(!st.empty()) {
        int x = st.top();
        st.pop();
        cout << x << " ";
    }

	return 0;
}
