/* Copyright (c) 2019  Roger Ferrer <rofirrim@gmail.com>
 *
 * This file is part of libadwaitamm.
 *
 * libadwaitamm is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 2.1 of the License,
 * or (at your option) any later version.
 *
 * libadwaitamm is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// We always need to generate the .defs for all types because the code
// using deprecated API is generated unconditionally and only disabled
// at compile time.
#undef LIBADWAITA_DISABLE_DEPRECATED

#include <glibmm_generate_extra_defs/generate_extra_defs.h>
#include <libadwaita-1/adwaita.h>
#include <iostream>

int main(int, char**)
{
  adw_init ();

  std::cout << get_defs(ADW_TYPE_ABOUT_DIALOG);
  std::cout << get_defs(ADW_TYPE_ABOUT_WINDOW);
  std::cout << get_defs(ADW_TYPE_ACTION_ROW);
  std::cout << get_defs(ADW_TYPE_ANIMATION);
  std::cout << get_defs(ADW_TYPE_ANIMATION_TARGET);
  std::cout << get_defs(ADW_TYPE_APPLICATION);
  std::cout << get_defs(ADW_TYPE_APPLICATION_WINDOW);
  std::cout << get_defs(ADW_TYPE_AVATAR);
  std::cout << get_defs(ADW_TYPE_BIN);
  std::cout << get_defs(ADW_TYPE_BREAKPOINT_CONDITION);
  std::cout << get_defs(ADW_TYPE_BREAKPOINT);
  std::cout << get_defs(ADW_TYPE_BUTTON_CONTENT);
  std::cout << get_defs(ADW_TYPE_CALLBACK_ANIMATION_TARGET);
  std::cout << get_defs(ADW_TYPE_CAROUSEL);
  std::cout << get_defs(ADW_TYPE_CAROUSEL_INDICATOR_DOTS);
  std::cout << get_defs(ADW_TYPE_CAROUSEL_INDICATOR_LINES);
  std::cout << get_defs(ADW_TYPE_CLAMP);
  std::cout << get_defs(ADW_TYPE_CLAMP_LAYOUT);
  std::cout << get_defs(ADW_TYPE_CLAMP_SCROLLABLE);
  std::cout << get_defs(ADW_TYPE_COMBO_ROW);
  std::cout << get_defs(ADW_TYPE_DIALOG);
  std::cout << get_defs(ADW_TYPE_EASING);
  std::cout << get_defs(ADW_TYPE_ENTRY_ROW);
  std::cout << get_defs(ADW_TYPE_ENUM_LIST_ITEM);
  std::cout << get_defs(ADW_TYPE_ENUM_LIST_MODEL);
  std::cout << get_defs(ADW_TYPE_EXPANDER_ROW);
  std::cout << get_defs(ADW_TYPE_FLAP);
  std::cout << get_defs(ADW_TYPE_FOLD_THRESHOLD_POLICY);
  std::cout << get_defs(ADW_TYPE_HEADER_BAR);
  std::cout << get_defs(ADW_TYPE_LEAFLET);
  std::cout << get_defs(ADW_TYPE_LEAFLET_PAGE);
  std::cout << get_defs(ADW_TYPE_MESSAGE_DIALOG);
  std::cout << get_defs(ADW_TYPE_NAVIGATION_DIRECTION);
  std::cout << get_defs(ADW_TYPE_PASSWORD_ENTRY_ROW);
  std::cout << get_defs(ADW_TYPE_PREFERENCES_GROUP);
  std::cout << get_defs(ADW_TYPE_PREFERENCES_PAGE);
  std::cout << get_defs(ADW_TYPE_PREFERENCES_ROW);
  std::cout << get_defs(ADW_TYPE_PREFERENCES_WINDOW);
  std::cout << get_defs(ADW_TYPE_PROPERTY_ANIMATION_TARGET);
  std::cout << get_defs(ADW_TYPE_SPLIT_BUTTON);
  std::cout << get_defs(ADW_TYPE_SPRING_ANIMATION);
  std::cout << get_defs(ADW_TYPE_SQUEEZER);
  std::cout << get_defs(ADW_TYPE_SQUEEZER_PAGE);
  std::cout << get_defs(ADW_TYPE_STATUS_PAGE);
  std::cout << get_defs(ADW_TYPE_STYLE_MANAGER);
  std::cout << get_defs(ADW_TYPE_SWIPE_TRACKER);
  std::cout << get_defs(ADW_TYPE_SWIPEABLE);
  std::cout << get_defs(ADW_TYPE_TAB_BAR);
  std::cout << get_defs(ADW_TYPE_TAB_PAGE);
  std::cout << get_defs(ADW_TYPE_TAB_VIEW);
  std::cout << get_defs(ADW_TYPE_TIMED_ANIMATION);
  std::cout << get_defs(ADW_TYPE_TOAST);
  std::cout << get_defs(ADW_TYPE_TOAST_OVERLAY);
  std::cout << get_defs(ADW_TYPE_TOOLBAR_VIEW);
  std::cout << get_defs(ADW_TYPE_VIEW_STACK);
  std::cout << get_defs(ADW_TYPE_VIEW_STACK_PAGE);
  std::cout << get_defs(ADW_TYPE_VIEW_SWITCHER);
  std::cout << get_defs(ADW_TYPE_VIEW_SWITCHER_BAR);
  std::cout << get_defs(ADW_TYPE_VIEW_SWITCHER_TITLE);
  std::cout << get_defs(ADW_TYPE_WINDOW);
  std::cout << get_defs(ADW_TYPE_WINDOW_TITLE);

  return 0;
}
