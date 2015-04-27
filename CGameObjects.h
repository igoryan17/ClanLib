//
// Created by igoryan on 27.04.15.
//

#ifndef CLAN_CGAMEOBJECTS_H
#define CLAN_CGAMEOBJECTS_H

#include "precomp.h"

class World;

class CGameObjects {
public:
    CGameObjects();

    virtual void draw();

    virtual bool update();

protected:
    World *mWorld;
};


#endif //CLAN_CGAMEOBJECTS_H
