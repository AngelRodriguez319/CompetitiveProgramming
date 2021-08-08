#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 03 / 2021
// https://codeforces.com/gym/100090/attachments/download/1223/ssau-qual-2012-en.pdf

struct Node{
   int value;
   Node *next, *before;
 
   Node(int x) : value(x), next(nullptr), before(nullptr) {}
};
 
struct LinkedList{
 
   Node *head;
   Node *back;
   Node *actualPosition;
 
   LinkedList(): head(nullptr), back(nullptr), actualPosition(nullptr) {}
 
   void push(int x){
      if(head == nullptr){
         head = new Node(x);
         back = head;
         return;
      }
      Node *node = new Node(x);
      back->next = node;
      node->before = back;
      back = node;
   }
 
   void setPosition(int pos){
      --pos;
      Node *current = head;
      while(pos--){
         current = current->next;
      }
      actualPosition = current;
   }
 
   int print(){
      return actualPosition->value;
   }
 
   void moveLeft(){
      if(actualPosition->before){
         actualPosition = actualPosition->before;
      }
   }
 
   void moveRight(){
      if(actualPosition->next){
         actualPosition = actualPosition->next;
      }
   }
 
   void insertLeft(int x){
      if(actualPosition->before){
         Node *current = actualPosition->before;
         Node *node = new Node(x);
 
         node->next = actualPosition;
         actualPosition->before = node;
 
         current->next = node;
         node->before = current;
      }else{
         Node *node = new Node(x);
         node->next = actualPosition;
         actualPosition->before = node;
      }
   }
 
   void insertRight(int x){
      if(actualPosition->next){
         Node *current = actualPosition->next;
         Node *node = new Node(x);
 
         node->next = current;
         current->before = node;
 
         actualPosition->next = node;
         node->before = actualPosition;
      }else{
         Node *node = new Node(x);
         actualPosition->next = node;
         node->before = actualPosition;
      }
   }
 
};
 
int main(){
 
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int n, p, q, aux;
   string instruction;
   cin >> n >> p;
 
   LinkedList *list = new LinkedList();
 
   for(int i = 0; i < n; i++){
      cin >> aux;
      list->push(aux);
   }
 
   cin >> q;
   list->setPosition(p);
 
   while(q--){
      cin >> instruction;
      if(instruction == "print"){
         cout << list->print() << "\n";
      }else if(instruction == "moveLeft"){
         list->moveLeft();
      }else if(instruction == "moveRight"){
         list->moveRight();
      }else if(instruction == "insertLeft"){
         cin >> aux;
         list->insertLeft(aux);
      }else if(instruction == "insertRight"){
         cin >> aux;
         list->insertRight(aux);
      }
   }
   return 0;
}