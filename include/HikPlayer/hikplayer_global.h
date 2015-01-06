#ifndef HIKPLAYER_GLOBAL_H
#define HIKPLAYER_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef HIKPLAYER_LIB
# define HIKPLAYER_EXPORT Q_DECL_EXPORT
#else
# define HIKPLAYER_EXPORT Q_DECL_IMPORT
#endif

#endif // HIKPLAYER_GLOBAL_H
