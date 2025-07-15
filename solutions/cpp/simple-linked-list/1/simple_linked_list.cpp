#include "simple_linked_list.h"

#include <iostream>
#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    return current_size;
}

void List::push(int entry) {
    Element* temp = new Element(entry);
    if(!size())
        head = temp;
    else {
        temp->next = head;
        head = temp;
    }
    current_size++;
}

int List::pop() {
    int data = head->data;
    Element* temp = head;
    head = head->next;
    delete temp;
    current_size--;
    return data;
}

void List::reverse() {
    Element *prev = nullptr, *temp = head;
    while(temp) {
        Element* next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    head = prev;
    
}

List::~List() {
    while(size())
        pop();
}

}  // namespace simple_linked_list
