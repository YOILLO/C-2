#include <iostream>
#include <vector>
#include <list>
#include "number.h"

void processVector(const std::vector<Number>& numbers) {
    for (const auto& num : numbers) {
        num.display();
    }
}

void modifyNumber(Number& num) {
    num = Number(num.getValue() + 1);
}

int main() {
    Number n1(10);
    n1.display();

    Number* n2 = new Number(20);
    n2->display();

    std::vector<Number> numbers;
    numbers.push_back(n1);
    numbers.push_back(*n2); // Копируем объект

    processVector(numbers);

    modifyNumber(numbers[0]);
    numbers[0].display();

    delete n2;

    std::list<Number> numberList;
    numberList.emplace_back(30);
    numberList.emplace_back(40);

    for (const auto& num : numberList) {
        num.display();
    }

    return 0;
}
