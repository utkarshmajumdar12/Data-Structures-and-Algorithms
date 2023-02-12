#include <iostream>
#include <stack>
using namespace std;

class Minstack{
public:
  stack<int> s, s2;
  
  Minstack(){
      
  }
  
  void push(int val){
      if(s2.empty() || val <= s2.top()){
          s2.push(val);
      }
      s.push(val);
      
  }
  
  void pop(){
      
      if(s.top() == s2.top()){
          s2.pop();
      }
      
      s.pop();
  }
  
  int top(){
      return s.top();
  }
  
  int getMin(){
      return s2.top();
      
  }
  
};

int main(){
    
}