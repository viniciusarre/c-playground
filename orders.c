double calculate_sales_tax(double order_subtotal) {
    return order_subtotal * 0.5;
}

double calculate_shipping_cost(double order_subtotal) {
    return order_subtotal * .1;
}

double calculate_order_total(double order_subtotal) {
    return (order_subtotal + calculate_sales_tax(order_subtotal) + calculate_shipping_cost(order_subtotal));
}