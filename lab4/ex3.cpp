#include <iostream>
#include <queue>
using namespace std;

int aplicantsWaiting = 0; // im lazy
int threshold = 5; // im still lazy

class Applicant
{
public:
    int applicant_num = 0;
    int time;
};

bool is_above_threshold(queue<Applicant> &q);
void display_applicants(queue<Applicant> &q);
void add_applicant(queue<Applicant> &q);
void remove_applicant(queue<Applicant> &q);
void update_applicants(queue<Applicant> &q);

// fn testing if the queue is above threshold, if so return true
bool is_above_threshold(queue<Applicant> &q)
{
    if (q.size() > threshold)
    {
        return true;
    }
    return false;
}

// fn displaying all aplicants in the queue
void display_applicants(queue<Applicant> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        cout << "Applicant number: " << q.front().applicant_num << endl;
        cout << "Time: " << q.front().time << endl;
        q.push(q.front());
        q.pop();
    }
}

// fn adding new aplicant to the queue
void add_applicant(queue<Applicant> &q)
{
    if(is_above_threshold(q)){
        cout << "Queue is full" << endl;
        return;
    }
    Applicant p;
    p.applicant_num = q.size() + 1;
    p.time = 0;
    q.push(p);
    update_applicants(q);
    ++aplicantsWaiting;
    cout << "Added aplicant" << endl;
    cout << "Aplicants waiting: " << aplicantsWaiting << endl;
    return;
}

// fn removing oldest aplicant from the queue
void remove_applicant(queue<Applicant> &q)
{
    q.pop();
    --aplicantsWaiting;
    cout << "Aplicants waiting: " << aplicantsWaiting << endl;
    update_applicants(q);
    return;
}

// fn updating all aplicants time and number
void update_applicants(queue<Applicant> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        q.front().time++;
        q.front().applicant_num = i + 1;
        q.push(q.front());
        q.pop();
    }
}

int main()
{
    queue<Applicant> eit;

    // adding 5 applicants to the queue
    for (int i = 0; i < 5; i++)
    {
        add_applicant(eit);
    }

    // displaying all applicants
    display_applicants(eit);

    //last applicant number
    cout << "Last applicant number: " << eit.back().applicant_num << endl;

    remove_applicant(eit);
    remove_applicant(eit);
    display_applicants(eit);
    //waiting for service
    cout << "Waiting for service: " << aplicantsWaiting << endl;
    
}