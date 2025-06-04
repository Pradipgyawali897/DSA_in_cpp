//This is the algorithm with the time complexity of this is O(n)
//Each day is considerd to be the best selling day 

#include <iostream>

int main() {
    int sample[] = {5, 6, 4, 7, 8};
    int maxprofit = 0;
    int bestbuy = sample[0];

    int n = sizeof(sample) / sizeof(int);
    for (int i = 1; i < n; i++) {
        // Update max profit if selling today is better
        if (sample[i] - bestbuy > maxprofit) {
            maxprofit = sample[i] - bestbuy;
        }

        // Update bestbuy if today's price is lower
        if (sample[i] < bestbuy) {
            bestbuy = sample[i];
        }
    }

    std::cout << "The max profit is " << maxprofit << std::endl;
    return 0;
}
