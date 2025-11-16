#include <iostream>
#include <vector>
#include <algorithm>
#include "Queue.h"

int main() {
    int n;
    std::cout << "Enter number of queues: ";
    std::cin >> n;

    std::vector<Queue> queues(n);

    
    for (int i = 0; i < n; i++) {
        std::cout << "\nQueue #" << (i + 1) << ":\n";
        queues[i].input();
    }

    
    std::sort(
        queues.begin(),
        queues.end(),
        [](const Queue& a, const Queue& b) {
            return a.product() > b.product();
        }
    );

    
    if (n >= 2) {
        Queue& maxQ = queues[0];
        Queue& minQ = queues[n - 1];

        minQ.addFrom(maxQ);
    }

    
    std::cout << "\n---- Sorted queues (descending product) ----\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Queue #" << (i + 1) << ": ";
        queues[i].print();
        std::cout << "\n";
    }

    return 0;
}
