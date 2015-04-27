//
// Created by igoryan on 27.04.15.
//

#ifndef CLAN_CAPP_H
#define CLAN_CAPP_H

#include <ClanLib-3.0/ClanLib/application.h>



class CApp : public clan::Application {
public:
    CApp() {}
    virtual int main(const std::vector<std::string> &args);
};


#endif //CLAN_CAPP_H
