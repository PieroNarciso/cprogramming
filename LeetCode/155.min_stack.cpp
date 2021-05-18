#include <iostream>
#include <vector>

using namespace std;

class MinStack {
public:
	// "Val": "MinElement"
	vector<pair<int, int>> stack;

    /** initialize your data structure here. */
    MinStack() {
		this->stack = {};
    }
    
    void push(int val) {
		if (this->stack.empty()) {
			this->stack.push_back(pair<int, int>(val, val));
		} else {
			int minLast = this->stack.back().second;
			if (minLast >= val) {
				this->stack.push_back(pair<int, int>(val, val));
			} else {
				this->stack.push_back(pair<int, int>(val, minLast));
			}
		}
    }
    
    void pop() {
		this->stack.pop_back();
    }
    
    int top() {
		return this->stack.back().first; 
    }
    
    int getMin() {
		return this->stack.back().second;
    }

};
