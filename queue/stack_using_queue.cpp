#include <iostream>
#include <queue>
using namespace std;

class Stack {
    
    queue<int> primary_queue, secondary_queue;
    
    public:
        void push(int element){
            
            // enqueue in secondary_queue
            secondary_queue.push(element);
            
            // add elements of primary_queue to secondary_queue
            while(!primary_queue.empty()){
                secondary_queue.push(primary_queue.front());
                primary_queue.pop();
            }
            
            // swapping the queues
            queue<int> temp_queue = primary_queue;
            primary_queue = secondary_queue;
            secondary_queue = temp_queue;
        }
    
        void pop(){
            if(primary_queue.empty()){
                return;
            } else {
                primary_queue.pop();
            }
        }
    
        int top(){
            if(primary_queue.empty()){
                return -1;
            } else {
                return primary_queue.front();
            }
        }
    
        void displayStack()
        {
            queue<int> temp_queue = primary_queue;
            
            while(!temp_queue.empty()){
                cout<<temp_queue.front()<<" ";
                temp_queue.pop();
            }
            cout<<"\n";
            
        }
};

int main(){
    
    Stack s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    s.displayStack();
    
    cout<<"Top: "<<s.top()<<"\n";
    
    s.pop();
    
    s.displayStack();
    
    return 0;
    
}
