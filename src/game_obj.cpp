#include "game_obj.h"

GameObj::GameObj() {}

GameObj::~GameObj() {}

void GameObj::update() {}

void GameObj::resize(int w, int h) {}

ofImage GameObj::getImage() { return obj_image_; }

ofVec2f GameObj::getPos() { return position_; }

std::tuple<int, int> GameObj::getDims() { return std::make_tuple(width, height); }