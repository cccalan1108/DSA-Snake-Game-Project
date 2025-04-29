#ifndef DSAP_CUSTOM_CONTROLLER_H
#define DSAP_CUSTOM_CONTROLLER_H

#include "ISnakeController.h"

class CustomController : public ISnakeController {
public:
    DirectionType NextDirection(const Game&, size_t) override {
        return DirectionType::kRight;
    }
private:
    DirectionType type_;
};

#endif // DSAP_CUSTOM_CONTROLLER_H
