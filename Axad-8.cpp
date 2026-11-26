class MinStack {
private:
    std::vector<std::pair<int,int>>stack;
    public:
    MinStack() {}
    void push(int value){
        int currentMin=stack.empty()
        ?value
        :std::min(value,stack.back().second);
        stack.push_back({value,currentMin});
    }
    void pop(){
        stack.pop_back();
    }
    int top(){
        return stack.back().first;
    }
    int getMin(){
        return stack.back().second;
    }
    

};
