//
// Created by igoryan on 27.04.15.
//

#ifndef CLAN_CGAMEOBJECTS_H
#define CLAN_CGAMEOBJECTS_H

#include "precomp.h"

class CWorld;

class CGameObjects {
public:
    CGameObjects(CWorld *world);

    virtual void draw();

    virtual bool update();

protected:
    CWorld *mWorld;
};


#endif //CLAN_CGAMEOBJECTS_H
