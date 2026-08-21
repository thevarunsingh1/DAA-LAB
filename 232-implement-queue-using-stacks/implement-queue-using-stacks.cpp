class MyQueue { // amortized O(1)
    stack<int>in,out;
public:
int peekEL=-1;

    MyQueue() {
        
    }
    
    void push(int x) {
         if(in.empty()) peekEL=x;
        in.push(x);
       
    }
    
    int pop() {
        if(out.empty()){ // in->out
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
            int val=out.top();
            out.pop();
            return val; }
        
    
    
    int peek() {
        if(out.empty()) return peekEL;
        else return out.top();
        
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
    };


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */