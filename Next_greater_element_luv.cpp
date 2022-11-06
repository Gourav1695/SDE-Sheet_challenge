
//stack data structures implementation

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	stack<int> s;
// 	s.push(2);
// 	s.push(3);
// 	s.push(4);
// 	s.push(5);
// 		s.push(2);
// 	s.push(3);
// 	s.push(4);
// 	s.push(5);
// 	while(!s.empty()){
// 		cout<<s.top()<<endl;
// 		s.pop();
// 	}
// }

// queue data structure

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	queue<string> q;
// 	q.push("abs");
// 	q.push("gourav");
// 	q.push("vikash");
// 	while(!q.empty()){
// 		cout<<q.front()<<endl;
// 		q.pop();
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std;

// unordered_map<char, int>symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
// string isBalanced(string s){
// 	stack<char>st;
// 	for(char bracket: s){
// 		if(symbols[bracket]<0){
// 			st.push(bracket);
// 		}
// 		else {
// 			if(st.empty()) return "NO";
// 			char top= st.top();
// 			st.pop();
// 			if(symbols[top]+symbols[bracket]!=0)
// 			{
// 				return "NO";
// 			}
// 		}
// 	}
// 	if(st.empty()) return "YES";
// 	return "NO";

// }
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string s;
// 		cin>>s;
// 		cout<<isBalanced(s)<<endl;
// 	}
// }


#include<bits/stdc++.h>
using namespace std;

vector<int>NGE(vector<int> v){
vector<int>nge(v.size());
stack<int>st;// stack for manupulating putting the index of the vector here
for(int i=0;i<v.size();++i){
	while (!st.empty() && v[i]>v[st.top()])// i is here the index ,st.top() is 0 here
	{
		nge[st.top()] = i;// assigning the bigger index to the small valued index
		st.pop();
	}
	st.push(i);// in 1st case the 4 is pushed into the stack
}
while(!st.empty())
{
	nge[st.top()]=-1;
	st.pop();
}
return nge;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	vector<int>nge=NGE(v);// assigning one vector to other
	for(int i=0; i<n; ++i){
		cout<<v[i]<<" "<<(nge[i]==-1? -1 : v[nge[i]])<<endl;// nge[i] is a index for the vector 4 5 2 25 7 8

	}
}
