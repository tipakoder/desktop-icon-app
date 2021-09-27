/*
 * Window of application
 */

#include <gtkmm.h>

#ifndef WINDOW_WINDOW_H_
#define WINDOW_WINDOW_H_

class Window : public Gtk::Window{

public:
	Window();
	virtual ~Window();


protected:
  // Signal handlers:
  void on_application_save_clicked();
  // Widgets
  Gtk::Box application_container;
  Gtk::Entry application_shortname;
  Gtk::Entry application_name;
  Gtk::Entry application_comment;
  Gtk::Entry application_generic_name;
  Gtk::Entry application_execute;
  Gtk::Entry application_icon;
  Gtk::Entry application_categories;
  Gtk::CheckButton application_terminal;
  Gtk::Button application_save;
};

#endif /* WINDOW_WINDOW_H_ */
