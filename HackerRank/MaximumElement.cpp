#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 17 / 2021
// https://www.hackerrank.com/challenges/maximum-element/problem

struct Node{
   long long int value;
   long long int max;
   Node *next;

   Node(long long int x, long long int y){
      value = x;
      max = y;
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

   long long int lastNode(){
      return top->max;
   }

   void push(long long int x, long long int y){
      tam++;
      Node *newNode = new Node(x, y);
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
};

int main(){

   int n; cin >> n;
   Heap *stack = new Heap(); 
   int instruction;
   long long int aux, maximum = 0;

   while(n-- > 0){
      cin >> instruction;
      if(instruction == 1){
         cin >> aux; 
         maximum = max(maximum, aux);
         stack->push(aux, maximum);
      }else if(instruction == 2){
         stack->pop();
         if(stack->isEmpty())
            maximum = 0;
         else
            maximum = stack->lastNode();
      }else if(instruction == 3){
         if(!stack->isEmpty())
            cout << stack->lastNode() << "\n";
      }
   }

   return 0;
}