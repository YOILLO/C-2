#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <string>

class Number {
private:
    int value;
    std::string stringValue;

public:
    Number(int val);
    Number(const Number& other);
    Number(Number&& other) noexcept;

    ~Number();

    Number& operator=(const Number& other);

    Number& operator=(Number&& other) noexcept;

    int getValue() const;

    std::string getStringValue() const;

    void display() const;
};

#endif // NUMBER_HPP
