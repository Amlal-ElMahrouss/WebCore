#ifndef WEBCORE_H
#define WEBCORE_H

#include "WebCore_global.h"

class WEBCORE_EXPORT WebCoreSingleton
{
public:
    WebCoreSingleton();
    ~WebCoreSingleton();

    WebCoreSingleton& operator=(const WebCoreSingleton&) = default;
    WebCoreSingleton(const WebCoreSingleton&) = default;



};

#endif // WEBCORE_H
