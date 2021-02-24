#include <iostream>
#include <new>

class ArrayList {
private:
  int *memory;
  int size;
  int currentIndex;

  void Regrow() {
    int *temp = new int[size + 10];
    for (int i = 0; i < size; i++) {
      temp[i] = memory[i];
    }
    delete memory;
    size += 10;
    memory = temp;
  }

public:
  ArrayList(int size = 10) {
    memory = new int[size];
    this->size = size;
    currentIndex = 0;
  }
  ~ArrayList() { delete memory; }
  void Add(int number) {
    memory[currentIndex] = number;
    currentIndex++;
    if (currentIndex == size) {
      Regrow();
    }
  }
  int Get(int index) { return memory[index]; }
  int GetSize() { return size; }
};

int main() {
  ArrayList list;
  list.Add(5);
  list.Add(1);
  list.Add(100);
  list.Add(15);
  list.Add(45);
  list.Add(4);
  for (int i = 0; i < size; i++) {
    std::cout << list.Get(i) << std::endl;
  }
}