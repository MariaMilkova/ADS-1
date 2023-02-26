// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value > 1) {
        for (int i = 2; i < value; i++) {
            if ((value % i) == 0) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    int k = 0;
    int m;
    for (m = 1; k < n; m++) {
        k += checkPrime(m);
    }
    m--;
    return m;
}

uint64_t nextPrime(uint64_t value) {
    int i = (value + 1);
    while (checkPrime(i) == false) {
        i++;
    }
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    uint64_t i = (hbound - 1);
    for (i; i > 1; i--) {
        if (checkPrime(i) == true) {
            sum += i;
        }
    }
    return sum;
}
