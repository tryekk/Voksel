//
//  game.hpp
//  Voksel
//
//  Created by Marat Isaw on 18.06.20.
//  Copyright © 2020 Marat Isaw. All rights reserved.
//

#ifndef GAME_HPP
#define GAME_HPP

#include "color.hpp"
#include "display.hpp"
#include "tensorMath.hpp"
using namespace tem;

class Game {
public:
    
    Game(Display& display, vec3 spawnPoint, int distance);
    
    void Update();
    
    ~Game();
    
private:
    
    void drawLineDown(int x, int y, RGB color);
    vec3 playerPosition;
    float playerAngle;
    int distance;
    Display& display;
    RGB* colormap;
    uint8_t* heightmap;
    int mapWidth;
    int mapHeight;
    
    float* yBuffer;
    int minimapWidth;    //= 128;
    int minimapHeight;   //= 128;
    float pixelWidth;      //= mapWidth / minimapWidth;
    float pixelHeight;     //= mapHeight / minimapHeight;
};

#endif /* GAME_HPP */
