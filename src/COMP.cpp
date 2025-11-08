#include "COMP.h"
#include <string>

double COMP::add(double A, double B) {
    return A + B;
}

double COMP::sub(double A, double B) {
    return A - B;
}

double COMP::mul(double A, double B) {
    return A * B;
}

std::string COMP::div(double A, double B) {
    if (A == 0.0 || B == 0.0) {
        return "error "Cannot calculate with 0"";
    }
    return std::to_string(A / B);
}
