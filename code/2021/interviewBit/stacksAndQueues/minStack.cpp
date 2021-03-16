stack<int> first;
stack<int> second;
MinStack::MinStack() {
    while(!first.empty()){
        first.pop();
    }
    while(!second.empty()){
        second.pop();
    }
}

void MinStack::push(int x) {
    int minSoFar;
    if(second.empty()){
        minSoFar = x;
    }else{
        minSoFar = min(second.top(), x);
    }
    
    first.push(x);
    second.push(minSoFar);
}

void MinStack::pop() {
    if(first.empty()) return;
    first.pop();
    second.pop();
}

int MinStack::top() {
    if(!first.empty()) return first.top();
    return -1;
}

int MinStack::getMin() {
    if(first.empty()) return -1;
    return second.top();
}

