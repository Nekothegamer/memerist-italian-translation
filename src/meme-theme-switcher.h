#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define MEME_TYPE_THEME_SWITCHER (meme_theme_switcher_get_type())
G_DECLARE_FINAL_TYPE (MemeThemeSwitcher, meme_theme_switcher, MEME, THEME_SWITCHER, AdwBin)

G_END_DECLS
