class MyQueue {
public:
 stack<int>st1;
        stack<int>st2;
    MyQueue() {
       
        int top=-1;
        int s_index=-1;
    }
    
    void push(int x) {
       /* if(top==-1){
           s_index++;
        }
        top++;
        st1[top]=x;
        */
        st1.push(x);   
        
    }
    
    int pop() {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int pop_element=st2.top();
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return pop_element;
        //return st1[s_index++];
    }
    
    int peek() {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int peek_element=st2.top();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return peek_element;


        //return st1[top];
    }
    
    bool empty() {
       /* if(top==-1){
            return true;
        }
        return false;
        */
        return st1.empty();
    }
};
/*
Time Complexity:- O(n)
Space Complexity:- O(n)
*/

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
