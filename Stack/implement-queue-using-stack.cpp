class MyQueue {
public:
stack <int> input, output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        //shift from input to output
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        int x=output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        //shift from input to output
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
        
    }
    
    bool empty() {
        if(output.size()+input.size()==0) return 1;
        return 0;
        
    }
};
