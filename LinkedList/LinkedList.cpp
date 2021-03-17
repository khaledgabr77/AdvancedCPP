#include <iostream>
using namespace std;

class Node {
private:
  int value;
  Node *next;
  Node *previous;

public:
  Node(int value, Node *next = NULL, Node *previous = NULL) {
    this->value = value;
    this->next = next;
    this->previous = previous;
  }

  int GetValue() { return this->value; }

  Node *Next() { return next; }
  Node *Previous() { return previous; }

  void SetNext(Node *node) { this->next = node; }
  void SetPrevious(Node *node) { this->previous = node; }
};

class LinkedList {
private:
  Node *head;
  Node *tail;

public:
  LinkedList() {
    head = NULL;
    tail = NULL;
  }

  ~LinkedList() { Clear(); }

  void Add(int value) {
    if (!head) {
      head = new Node(value);
      tail = head;
    } else {
      Node *temp = new Node(value);
      tail->SetNext(temp);
      tail = temp;
    }
  }

  void Remove(int index) {
    Node *temp = head;
    for (int i = 0; i < index - 1; i++) {
      temp = temp->Next();
    }

    Node *toDelete = temp->Next();
    temp->SetNext(temp->Next()->Next());
    delete toDelete;
  }

  void Clear() {
    while (head) {
      Node *temp = head;
      head = head->Next();
      delete temp;
    }
  }

  void Print() {
    Node *temp = head;
    while (temp) {
      cout << temp->GetValue() << endl;
      temp = temp->Next();
    }
  }

  int Get(int index) {
    Node *temp = head;
    for (int i = 0; i < index; i++) {
    }
    return temp->GetValue();
  }
};

int main() {
  LinkedList list;

  list.Add(5);
  list.Add(4);
  list.Add(9);
  list.Add(12);
  list.Add(1);

  list.Print();
  cout << endl << endl;
  list.Remove(2);

  list.Print();
  cout << endl << endl;
  list.Clear();

  list.Print();
  cin.get();
}