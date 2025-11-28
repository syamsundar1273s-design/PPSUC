#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

    // Read cost price and selling price
    scanf("%d", &costPrice);
    scanf("%d", &sellingPrice);

    // Compare selling price with cost price
    if (sellingPrice > costPrice) {
        printf("Profit
");
    } else if (sellingPrice < costPrice) {
        printf("Loss
");
    } else {
        printf("No Profit and No Loss
");
    }

    return 0;
}

