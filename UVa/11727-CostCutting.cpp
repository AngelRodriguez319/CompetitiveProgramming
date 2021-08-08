#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 08 / 2021
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827

struct Node{
	int value;
	Node *next;
	Node(int x): value(x), next(nullptr) {};
};

struct LinkedList{
	Node *head;
	LinkedList(): head(nullptr) {};
	LinkedList(Node *x): head(x) {};

	void Push(int x){
		if(head == nullptr){
			head =  new Node(x);
			return;
		}
		Node *currentNode = head;
		while(currentNode->next != nullptr){
			currentNode = currentNode->next; 
		}
		currentNode->next = new Node(x);
	}

	void Print(int caseNumber){
		Node *currentNode = head;
		while (currentNode != nullptr){
			cout << "Case "<< caseNumber <<": " << currentNode->value;
			currentNode = currentNode->next; 
		}
		cout << "\n";
	}

	void Delete(int position){
		if(head == nullptr) 
			return;
		if(position == 1){
			Node *toDelete = head;
			head = head->next;
			delete toDelete;
			return;
		}
		int steps = 1;
		Node *currentNode = head;
		while(currentNode != nullptr && steps != (position-1)){
			currentNode = currentNode->next;
			steps++;
		}
		Node* toDelete = currentNode->next;
		currentNode->next = (currentNode->next)->next;
		delete toDelete;
	}

   int Find(int val){
		if(head == NULL) 
			return -1;
		Node *currentNode = head;
		int steps = 1;
		while(currentNode->value != val && currentNode != NULL){
			currentNode = currentNode->next;
			steps++;
		} 
		return steps;
	}
};

void cutting(LinkedList *list, int a, int b, int c, int i){
   vector<int> salaries;
   salaries.push_back(a);
   salaries.push_back(b);
   salaries.push_back(c);

   int min = *min_element(salaries.begin(), salaries.end());
   int max = *max_element(salaries.begin(), salaries.end());

   list->Delete(list->Find(min));
   list->Delete(list->Find(max));
   list->Print(i+1);
}

int main(){
   int t, a, b, c;
   cin >> t;
   int testCases [t][3];

   for(int i = 0; i < t; i++){
      cin >> a >> b >> c;
      testCases[i][0] = a;
      testCases[i][1] = b;
      testCases[i][2] = c;
   }
   for(int i = 0; i < t; i++){
      LinkedList *list = new LinkedList();
      
      list->Push(testCases[i][0]);
      list->Push(testCases[i][1]);
      list->Push(testCases[i][2]);
      
      cutting(list, testCases[i][0], testCases[i][1], testCases[i][2], i);
   }
   return 0;
}