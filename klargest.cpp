#include <vector>
#include <queue>
using namespace std;

int kth_largest(vector<int> values, int k){
    priority_queue<int> pq;
    int kth_largest;

    for(int i = 0; i < values.size(); i++){
        pq.push(values.at(i));
    }

    for(int i = 0; i < k; i++){
        kth_largest = pq.top();
        pq.pop();
    }
    return kth_largest;
}