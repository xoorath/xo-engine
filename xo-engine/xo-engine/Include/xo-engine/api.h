#pragma once

#ifdef XOENGINE_EXPORTS
#define XOENGINE_EXPORT __declspec(dllexport)
#else
#define XOENGINE_EXPORT __declspec(dllimport)
#endif

namespace xo::engine
{



    XOENGINE_EXPORT void api();
}
