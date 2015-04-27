//
// Created by igoryan on 27.04.15.
//

#include "CProgram.h"
#include "CApp.h"

int CProgram::main(const std::vector<std::string> &args)
{
    clan::SetupCore setup_core;
    clan::SetupDisplay setup_display;
    clan::SetupGL  setup_gl;
    clan::SetupSWRender setup_swrender;
    clan::SetupSound stup_sound;
    CApp app;
    int retval = app.main(args);
}

clan::Application app(&CProgram::main);