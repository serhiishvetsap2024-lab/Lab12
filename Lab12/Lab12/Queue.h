#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <iostream>

class Queue {
private:
    std::vector<int> data;

public:
    Queue();
    ~Queue();

    void input();
    void print() const;

    long long product() const;

    
    bool operator<=(const Queue& other) const;

    
    Queue& operator+=(int value);

    
    const std::vector<int>& getData() const;

    
    void addFrom(const Queue& other);
};

#endif
