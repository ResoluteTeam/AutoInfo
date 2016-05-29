#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
public:
    Car(std::string _number, std::string _fuelType, float _fuelCount);

private:
        std::string number;
        std::string fuelType;
        float fuelCount;
public:
        std::string getNumber();
        std::string getFuelType();
        float getFuelCount();
};

#endif // CAR_H
