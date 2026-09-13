/* meme-theme-switcher.c
 *
 * Copyright 2025 Giovanni
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "gtk/gtk.h"
#include "meme-theme-switcher.h"

struct _MemeThemeSwitcher {
    AdwBin parent_instance;
};

G_DEFINE_FINAL_TYPE (MemeThemeSwitcher, meme_theme_switcher, ADW_TYPE_BIN)

static void meme_theme_switcher_class_init (MemeThemeSwitcherClass *klass) {
    GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);
    gtk_widget_class_set_template_from_resource (widget_class, "/io/github/vani_tty1/memerist/theme-switcher.ui");
}

static void meme_theme_switcher_init (MemeThemeSwitcher *self) {
    gtk_widget_init_template (GTK_WIDGET (self));
}
