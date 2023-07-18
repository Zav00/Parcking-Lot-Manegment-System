#ifndef PARCKING_LOT_MANEGMENT__SYSTEM_USER_H
#define PARCKING_LOT_MANEGMENT__SYSTEM_USER_H
#include <string>
class User {
private:
    std::string name;
    std::string vehicleSize;
public:
    User(const std::string &name, const std::string &vehicleSize)
            : name(name), vehicleSize(vehicleSize) {}

    const std::string &getName() const {
        return name;
    }

    const std::string &getVehicleSize() const {
        return vehicleSize;
    }
};
#endif //PARCKING_LOT_MANEGMENT__SYSTEM_USER_H
