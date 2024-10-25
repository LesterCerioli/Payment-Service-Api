#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include <string>

extern "C" {
    const char* processPayment(int paymentId);
}

#endif // PAYMENT_HPP