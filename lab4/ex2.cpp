#include <iostream>
#include <queue>

using namespace std;

void limitQueueSize(queue<int>& q, int limit) {
    while (q.size() > limit) {
        cout << "Queue is full! Removing element " << q.front() << endl;
        q.pop();
    }
}

template <typename T>
void displayQ(const queue<T>& q){
    for(T i : q){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    queue<int> q;
    // Inserting integer numbers from 1 to 12 into the queue
    for (int i = 1; i <= 12; i++) {
        q.push(i);
    }
    displayQ(q);
}

