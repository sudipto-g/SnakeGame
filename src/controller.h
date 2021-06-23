#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
    private:
        void ChangeDirection(Snake &snake, Snake::Direction input,
                           Snake::Direction opposite) const;
    
    public:
        void HandleInput(bool &running, Snake &snake) const;
};

#endif