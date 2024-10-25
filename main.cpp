#include <iostream>
#include <list>
using namespace std;

template <class T>
struct Node {
    T data;
    Node<T>* prev;
    Node<T>* next;

    //kompilator wie ze nie moze byc uzywany niejawnie, tylko jawne przekazywanie
    explicit Node(T value) : data(value), prev(nullptr), next(nullptr) {}
};
class DoublyLinkedList{
private:
    int counter;
public:
    Node<T>* head;
    Node<T>* tail;

    DoublyLinkedList()=default;

};

int main()
{


    return 0;
}
