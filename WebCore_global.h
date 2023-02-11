#ifndef WEBCORE_GLOBAL_H
#define WEBCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WEBCORE_LIBRARY)
#  define WEBCORE_EXPORT Q_DECL_EXPORT
#else
#  define WEBCORE_EXPORT Q_DECL_IMPORT
#endif

#endif // WEBCORE_GLOBAL_H
