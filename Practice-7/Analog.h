#include <string>

class Analog {
private:
    int pin;
    int value;
public:
    explicit Analog(int pin);
    int getValue() const;
    std::string toString();
    int getPin() const;
    void setPin(int pin);
    void read();
};
