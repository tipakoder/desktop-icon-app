#include "window/window.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "io.tipakoder.desktopicon");

  Window window_app;
  return app->run(window_app);
}
