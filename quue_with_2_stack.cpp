#include<iostream>
#include<stack>
using namespace std;
class queue{
private:
	stack<int> s1,s2;
public:
	void enqueue(int value){
		s1.push(value);
	}
	void dequeue(){
		if(s2.empty()){
			if(s1.empty()) cout<<"empty queue";
			else{
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
			}
		}
		s2.pop();
	}
};
int main(){
	queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.dequeue();
}
