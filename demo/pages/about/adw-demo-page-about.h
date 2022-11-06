#pragma once

#include <libadwaitamm.h>
#include "namedclass.h"

namespace Adw {

class DemoPageAbout;

class DemoPageAbout_Class : public Glib::NamedClass {
public:
  const Glib::Class &init();

  static void class_init_function(void *g_class, void *class_data);

  static Glib::ObjectBase *wrap_new(GObject *);
};

class DemoPageAbout : public Adw::Bin {
public:
  DemoPageAbout(const DemoPageAbout&) = delete;
  DemoPageAbout& operator=(const DemoPageAbout&) = delete;

  ~DemoPageAbout() noexcept override;

  static GType get_type() G_GNUC_CONST;

  static DemoPageAbout* wrap(GObject *);

  void demo_run();

protected:
  explicit DemoPageAbout(GtkWidget *obj);

private:
  static DemoPageAbout_Class demo_page_about_class_;
  friend class DemoPageAbout_Class;

  static void instance_init_function(GTypeInstance *instance, void *g_class);

  static void demo_run_cb(GObject* self);
};

} // namespace Adw
