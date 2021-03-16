#include <iostream>
#include <allegro5/allegro.h>


using namespace std;
int main(int argc, char *argv[])
{
    al_init();

    ALLEGRO_DISPLAY *display = nullptr;
    display = al_create_display(1080, 720);
    if(!display)
    {
        cout << "Display failed" << endl;
        return -1;
    }
    al_set_window_title(display, "ALLEGRO Tutorial 1");

    ALLEGRO_COLOR white = al_map_rgb(255,255,255);
    ALLEGRO_COLOR grey = al_map_rgb(128,128,128);
    al_clear_to_color(white);
    al_flip_display();
    al_rest(5);

    al_clear_to_color(grey);
    al_flip_display();
    al_rest(5);
    al_destroy_display(display);
    return 0;
}
