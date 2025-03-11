#include <stdio.h>
#include <stdlib.h>

int demandFunction(int price, int daysLeft) {
    return (100 - price) / (daysLeft + 1);
}

void predictPrices(int seats, int days, int basePrice) {
    int prices[days];

    prices[days - 1] = basePrice;

    for (int t = days - 2; t >= 0; t--) {
        int demand = demandFunction(prices[t + 1], t);

        if (seats > demand) {
            prices[t] = prices[t + 1] + (rand() % 10 - 5);
        } else {
            prices[t] = prices[t + 1] - (rand() % 10 + 5);
        }

        if (prices[t] < basePrice / 2) prices[t] = basePrice / 2;
        if (prices[t] > basePrice * 1.5) prices[t] = basePrice * 1.5;

        seats -= demand;
        if (seats < 0) seats = 0;
    }

    printf("\nPredicted Prices Per Day Until Departure:\n");
    for (int t = 0; t < days; t++) {
        printf("Day %d: $%d\n", t + 1, prices[t]);
    }
}

int main() {
    int seats, days, basePrice;

    printf("Enter total seats on the flight: ");
    scanf("%d", &seats);
    printf("Enter number of days until departure: ");
    scanf("%d", &days);
    printf("Enter base ticket price: ");
    scanf("%d", &basePrice);

    predictPrices(seats, days, basePrice);

    return 0;
}
