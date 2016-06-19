#include <gtkmm.h>
using namespace std;

void screen(unsigned int width = 640, unsigned int height = 480, string title = "GTK Window"){
  Gtk::Window window;
  window.set_default_size(width, height);
  window.set_title(title);

  Gtk::Main::run(window);
}

int main (int argc, char *argv[])
{
  Gtk::Main kit(argc, argv);
  screen();
  return 0;
}
