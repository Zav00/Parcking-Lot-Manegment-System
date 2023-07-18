#ifndef PARCKING_LOT_MANEGMENT__SYSTEM_PARKINGSPACE_H
#define PARCKING_LOT_MANEGMENT__SYSTEM_PARKINGSPACE_H
#include <string>

class ParkingSpace {
private:
    int spaceNumber;
    std::string size;
    bool available;
public:

    ParkingSpace(int spaceNumber, const std::string &size)
            : spaceNumber(spaceNumber), size(size), available(true) {}

    int getSpaceNumber() const {
        return spaceNumber;
    }

    const std::string &getSize() const {
        return size;
    }

    bool isAvailable() const {
        return available;
    }

    void occupy() {
        available = false;
    }

    void release() {
        available = true;
    }

};

#endif //PARCKING_LOT_MANEGMENT__SYSTEM_PARKINGSPACE_H
