#include <iostream>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x;
  cin>>x;

  stack<int>s;
  for(int i=0;i<x;i++){
    string comando;
    cin>>comando;
    if(comando=="PUSH"){
      int temp;
      cin>>temp;
      if(s.empty())s.push(temp);
      else s.push(min(s.top(),temp));
    }
    else if(comando=="POP"){
      if(s.empty()) cout<<"EMPTY\n";
      else s.pop();
    }
    else{
      if(s.empty()) cout<<"EMPTY\n";
      else cout<<s.top()<<"\n";
    }
  }
  }