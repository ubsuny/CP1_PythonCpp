// def findN(overflow):
//     n = 0
//     fN = 2
//     while(fN**2 < overflow):
//         fN = fN**2
//         n += 1
//         print(fN,n)
//     return n

#include <cmath>
#include <list>

extern "C" int findN(int overflow) {
    int n = 0;
    int fN = 2;
    while (pow(fN,2) < overflow) {
        fN = pow(fN, 2);
        n = n + 1;
    }
    return n;
}

extern "C" int findNStep(int overflow, int step) {
    int n = 0;
    int fN = 2;
    int count = 0;
    while (count < step) {
        count = count +  1;
        fN = pow(fN, 2);
    }
    if (fN > overflow) {
        return 0;
    }
    else {
        return fN;
    }
}

extern "C" long int findNLong(long int overflow) {
    long int n = 0;
    long int fN = 2;
    while (pow(fN,2) < overflow) {
        fN = pow(fN, 2);
        n = n + 1;
    }
    return n;
}

extern "C" long int findNStepLong(long int overflow, long int step) {
    long int n = 0;
    long int fN = 2;
    long int count = 0;
    while (count < step) {
        count = count +  1;
        fN = pow(fN, 2);
    }
    if (fN > overflow) {
        return 0;
    }
    else {
        return fN;
    }
}