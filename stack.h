
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    int get_size();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){//if can create new node success fully
            // Left missing for exercises…
            new_node->set_next(top);
            top = new_node;
            size++;
  }
         // Left missing for exercises…
    
}

int Stack::get_size(){
    return size;
}

int Stack::pop(){
    if(top == NULL){
        //cout<<"empty stack"<<endl;
        return -1;
    }
    
    NodePtr t=top;
       
    int value;
    value=t->get_value();
    top = t->get_next();
        // Left missing part for exercises
    delete t;
    size--;
    //cout<<"pop "<<value<<endl;
    return value;
        //be careful of the empty stack!!!
    
}

Stack::Stack(){
    //initialize stack
    top = NULL;
    size = 0;
    
}
Stack::~Stack(){
    //cout<<"clear the stack"<<endl;
    while(top != NULL){
        pop();
    } 
    
}


#endif
