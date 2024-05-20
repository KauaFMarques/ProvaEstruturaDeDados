#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int o;scanf("%d",&o);
  queue<int>q;
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
else printf("%d\n",q.front());
      
    }
  }
  return 0;
}