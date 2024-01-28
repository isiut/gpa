#include <iostream>

struct Grades
{
    float sum;
    float total;
};

Grades regular(void)
{
    // Multipliers
    float a = 4;
    float b = 3;
    float c = 2;
    float d = 1;
    float f = 0;

    float aN;
    float bN;
    float cN;
    float dN;
    float fN;

    std::cout << "Regular A's: ";
    std::cin >> aN;

    std::cout << "Regular B's: ";
    std::cin >> bN;

    std::cout << "Regular C's: ";
    std::cin >> cN;

    std::cout << "Regular D's: ";
    std::cin >> dN;

    std::cout << "Regular F's: ";
    std::cin >> fN;

    float sum = aN + bN + cN + dN + fN;
    float total = a * aN + b * bN + c * cN + d * dN + f * fN;

    Grades result;
    result.sum = sum;
    result.total = total;

    return result;
}

Grades honors(void)
{
    // Multipliers
    float a = 4.75;
    float b = 3.75;
    float c = 2.75;
    float d = 1;
    float f = 0;

    float aN;
    float bN;
    float cN;
    float dN;
    float fN;

    std::cout << "Honors A's: ";
    std::cin >> aN;

    std::cout << "Honors B's: ";
    std::cin >> bN;

    std::cout << "Honors C's: ";
    std::cin >> cN;

    std::cout << "Honors D's: ";
    std::cin >> dN;

    std::cout << "Honors F's: ";
    std::cin >> fN;

    float sum = aN + bN + cN + dN + fN;
    float total = a * aN + b * bN + c * cN + d * dN + f * fN;

    Grades result;
    result.sum = sum;
    result.total = total;

    return result;
}

Grades ap(void)
{
    // Multipliers
    float a = 5;
    float b = 4;
    float c = 3;
    float d = 1;
    float f = 0;

    float aN;
    float bN;
    float cN;
    float dN;
    float fN;

    std::cout << "AP A's: ";
    std::cin >> aN;

    std::cout << "AP B's: ";
    std::cin >> bN;

    std::cout << "AP C's: ";
    std::cin >> cN;

    std::cout << "AP D's: ";
    std::cin >> dN;

    std::cout << "AP F's: ";
    std::cin >> fN;

    float sum = aN + bN + cN + dN + fN;
    float total = a * aN + b * bN + c * cN + d * dN + f * fN;

    Grades result;
    result.sum = sum;
    result.total = total;

    return result;
}

int main(void)
{
    Grades regularGrades = regular();
    float regularSum = regularGrades.sum;
    float regularTotal = regularGrades.total;

    Grades honorsGrades = honors();
    float honorsSum = honorsGrades.sum;
    float honorsTotal = honorsGrades.total;

    Grades apGrades = ap();
    float apSum = apGrades.sum;
    float apTotal = apGrades.total;

    float totalTotal = regularTotal + honorsTotal + apTotal;
    float totalSum = regularSum + honorsSum + apSum;

    float result = totalTotal / totalSum;

    std::cout << "Your Weighted GPA: " << result << '\n';

    return 0;
}