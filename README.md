[![C/C++ CI Fedora 40](https://github.com:KurtBoehm/libadwaitamm/actions/workflows/meson-fedora.yml/badge.svg)](https://github.com:KurtBoehm/libadwaitamm/actions/workflows/meson-fedora.yml)

## About

`libadwaitamm` is a C++ binding for the [GNOME Adwaita](https://gnome.pages.gitlab.gnome.org/libadwaita/) library.
The [original binding](https://github.com/rofirrim/libadwaitamm) appears to be abandoned since the end of 2022 and only wraps the API of version 1.2.
This library aims to extend this binding up to version 1.5, which is current version of `libadwaita` at time of writing, as well as future versions.

Currently, the updates are very incomplete and encompass the parts of `libadwaita` that I have been interested in for my own projects, as well as some general updates that (hopefully) improve things.

## How to build

`libadwaitamm` depends on the following packages, listed together with the versions used for testing:

- `meson 1.4.1`
- `glibmm 2.80.0`
- `pangomm 2.52.0`
- `gtkmm 4.14.0`
- `libadwaita 1.5.2`
- `mm-common 1.0.6`
  - This is only needed when building in maintainer mode, which is the default when not building from a tarball.

It is, however, very likely that somewhat older versions of these dependencies (apart from `libadwaita`) are sufficient to compile this project.

## Issues and comments

Known issues:

- **The API is not stable. There are no immediate plans to stabilize it.**
- The documentation may be a bit “iffy” as it has not been reviewed yet.
- The author of the fork is quite new to the C++ bindings of GTK and related libraries.
  Therefore, `Glib::RefPtr`, raw pointers, and references might be used in places where another type might be more appropriate/consistent with the existing bindings.

Feel free to raise issues to keep track of problems and improvements in the wrapper.

Please, be mindful that this is free software that may be developed on contributors’ free time and as such it does not come with any sort of guaranteed support of any kind.
This development is made available in the hope it can be useful to the community.
