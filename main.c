#include <stdio.h>
#include "orders.h"

int main(int argc, char *argv[]) {
    printf("Grand total: %1f", calculate_order_total(50.00));
}