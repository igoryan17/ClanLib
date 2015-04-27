//
// Created by igoryan on 27.04.15.
//
#include <ClanLib-3.0/ClanLib/core.h>
#include <ClanLib-3.0/ClanLib/display.h>
#include <ClanLib-3.0/ClanLib/gl.h>
#include <ClanLib-3.0/ClanLib/application.h>

using namespace clan;

class DisplayProgram
{
public:
    static int main(const std::vector<std::string> &args)
    {
        SetupCore setup_core;
        SetupDisplay setup_display;
        SetupGL setup_gl;

        DisplayWindow window("Hello World", 640, 480);

        Canvas canvas(window);
        InputDevice keyboard = window.get_ic().get_keyboard();
        clan::Font font(canvas, "Tahoma", 30);	// The clan prefix is required on linux due to a namespace conflict

        while (!keyboard.get_keycode(keycode_escape))
        {
            // Draw with the canvas:
            canvas.clear(Colorf::cadetblue);

//            Draw::line(canvas, 0, 110, 640, 110, Colorf::yellow);
            font.draw_text(canvas, 100, 100, "Hello World!", Colorf::lightseagreen);

            // Draw any remaining queued-up drawing commands on canvas:
            canvas.flush();

            // Present the frame buffer content to the user:
            window.flip();

            // Read messages from the windowing system message queue, if any are available:
            KeepAlive::process();
        }

        return 0;
    }
};

// Create global application object:
// You MUST include this line or the application start-up will fail to locate your application object.
Application app(&DisplayProgram::main);
