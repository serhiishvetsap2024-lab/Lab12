#include "Queue.h"

Queue::Queue() {}

Queue::~Queue() {}

void Queue::input() {
    int n;
    std::cout << "Enter number of elements in the queue: ";
    std::cin >> n;

    data.clear();
    data.reserve(n);

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        data.push_back(value);
    }
}

void Queue::print() const {
    std::cout << "[ ";
    for (int v : data) std::cout << v << " ";
    std::cout << "]  (product = " << product() << ")";
}

long long Queue::product() const {
    long long p = 1;
    for (int v : data) p *= v;
    return p;
}

bool Queue::operator<=(const Queue& other) const {
    return this->product() <= other.product();
}

Queue& Queue::operator+=(int value) {
    data.push_back(value);
    return *this;
}

const std::vector<int>& Queue::getData() const {
    return data;
}

void Queue::addFrom(const Queue& other) {
    for (int v : other.data) {
        this->data.push_back(v);
    }
}
