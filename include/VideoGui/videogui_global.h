#ifndef VIDEOGUI_GLOBAL_H
#define VIDEOGUI_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef VIDEOGUI_LIB
# define VIDEOGUI_EXPORT Q_DECL_EXPORT
#else
# define VIDEOGUI_EXPORT Q_DECL_IMPORT
#endif

#endif // VIDEOGUI_GLOBAL_H
