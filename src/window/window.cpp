/*
 * Application window realization
 */

#include "window.h"
#include <iostream>
#include <gtkmm.h>

// Initialize

Window::Window() : Gtk::Window(Gtk::WINDOW_TOPLEVEL) {
	set_title("Tag creator");
	set_default_size (400, 600);

	// Container settings
	application_container.set_orientation(Gtk::ORIENTATION_VERTICAL);
	application_container.set_spacing(12);
	application_container.set_margin_top(12);
	application_container.set_margin_bottom(12);
	application_container.set_margin_left(12);
	application_container.set_margin_right(12);

	// Short name for tag
	application_shortname.set_placeholder_text("Desktop filename (short unique)");
	application_container.add(application_shortname);

	// Name of target application
	application_name.set_placeholder_text("Application name");
	application_container.add(application_name);

	// Comment of target application
	application_comment.set_placeholder_text("Application comment (subtitle)");
	application_container.add(application_comment);

	// Generic name of target application
	application_generic_name.set_placeholder_text("Application generic name (Text Editor)");
	application_container.add(application_generic_name);

	// Execute command witch launch on click on tag
	application_execute.set_placeholder_text("Execute command");
	application_container.add(application_execute);

	// Application icon path
	application_icon.set_placeholder_text("Icon path");
	application_container.add(application_icon);

	// Categories of application
	application_categories.set_placeholder_text("Categories (ide;text-editor;..)");
	application_container.add(application_categories);

	// Terminal check button
	application_terminal.set_label("Terminal");
	application_container.add(application_terminal);

	// Save tag button
	application_save.set_label("Save tag");
	application_save.signal_clicked().connect(sigc::mem_fun(*this, &Window::on_application_save_clicked));
	application_container.add(application_save);

	// Adding container on window
	add(application_container);

	show_all_children();
}


Window::~Window(){

}

void Window::on_application_save_clicked() {
	std::cout << "Hello World" << std::endl;
}
