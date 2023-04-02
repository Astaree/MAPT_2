#include <iostream>
#include <queue>

using namespace std;

//fill queue with consecutive integers
template <typename T>
void fillQ(queue<T>& q, int n){
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
}

 //output the queue
template <typename T>
void displayQ(const queue<T>& q){
    queue<T> q2 = q;
    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
}
//chanfe the size of the queue and if the new size is smaller than the old one, remove the elements from the front and
//cout "removed"
//if the new size is larger than the old one, do nothing
template <typename T>
void changeQsize(queue<T>& q, int n){
    if (n < q.size()) {
        for (int i = 0; i < q.size() - n; i++) {
            q.pop();
            cout << "removed" << endl;
        }
    }
}


//Using the function, add 4 elements to the queue
template <typename T>
void add4(queue<T>& q){
    for (int i = 0; i < 4; i++) {
        q.push(i);
    }
}

int main() {
    queue<int> q;
    // Inserting integer numbers from 1 to 12 into the queue
    fillQ(q, 12);
    displayQ(q);
    // Change the size of the queue to 5
    changeQsize(q, 5);
    displayQ(q);
    // Change the size of the queue to 10
    changeQsize(q, 10);
    displayQ(q);
    // Add 4 elements to the queue
    add4(q);
    displayQ(q);
}

