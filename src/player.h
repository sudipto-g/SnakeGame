#ifndef PLAYER_H
#define PLAYER_h

#include "snake.h"
#include "SDL.h"

class Player {
  private:
  const Snake &snake;
  const SDL_Point &food;

 public:
  Player(const Snake &snake, const SDL_Point &food);
  ~Player();
  void play();
};

#endif