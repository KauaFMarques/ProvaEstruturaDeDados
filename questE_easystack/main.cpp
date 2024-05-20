#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
  int o;scanf("%d",&o);
  stack<int>q;
  while(o--){
    int j;scanf("%d",&j);
    if(j==1){
      scanf("%d",&j);
      q.push(j);
    }
    else if(j==2){
      if(!q.empty())
        q.pop();
    }
    else{
      if(q.empty())printf("Empty!\n");
else printf("%d\n",q.top());
      
    }
  }
  return 0;
}