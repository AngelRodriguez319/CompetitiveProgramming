#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 17 / 2021
// https://www.hackerrank.com/challenges/ctci-balanced-brackets/problem

struct Node{
   char value;
   Node *next;

   Node(char x){
      value = x;
      next = nullptr;
   }
};

struct Heap{

   Node *top;
   int tam;

   Heap(){
      top = nullptr;
      tam = 0;
   }

   bool isEmpty(){
      if(tam == 0) return true;
      return false;
   }

   int size(){
      return tam;
   }

   char lastNode(){
      return top->value;
   }

   void push(char x){
      tam++;
      Node *newNode = new Node(x);
      if(top == nullptr){
         top = newNode;
      }else{
         Node *currentNode = top;
         top = newNode;
         top->next = currentNode;
         currentNode = nullptr;        
      }
      return;
   }

   void pop(){
      if(top != nullptr){
         Node *currentNode = top;
         top = top->next;
         delete currentNode;
         tam--;
      }
      return;
   }

   void clear(){
      while(!isEmpty())
         pop();
   }

};

int main(){

   int t; cin >> t;
   string in;
   Heap *stack = new Heap();
   bool flag = true;

   while(t-- > 0){
      cin >> in;
      for(auto c : in){
         if(c == '(' || c == '[' || c == '{'){
            stack->push(c);
         }else{
            if(c == ')'){
               if(!stack->isEmpty() && stack->lastNode() == '('){
                  stack->pop();
               }else{
                  cout << "NO\n";
                  flag = false;
                  break;
               }
            }else if(c == ']'){
               if(!stack->isEmpty() && stack->lastNode() == '['){
                  stack->pop();
               }else{
                  cout << "NO\n";
                  flag = false;
                  break;
               }
            }else if(c == '}'){
               if(!stack->isEmpty() && stack->lastNode() == '{'){
                  stack->pop();
               }else{
                  cout << "NO\n";
                  flag = false;
                  break;
               }
            }
         }
      }
      if(flag){
         if(stack->isEmpty()){
            cout << "YES\n";
         }else{
            cout << "NO\n";
         }
      }
      flag = true;
      stack->clear();
   }
    return 0;
}
