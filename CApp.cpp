//
// Created by igoryan on 27.04.15.
//

#include "CApp.h"
#include "precomp.h"

int CApp::main(const std::vector<std::string> &args)
{
    clan::DisplayWindowDescription desc;
    desc.set_title("316 panzers");
    desc.set_size(clan::Size(800, 600), true);
    clan::DisplayWindow window(desc);
    clan::SoundOutput output(40000);

}