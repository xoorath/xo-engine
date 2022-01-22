#pragma once

#ifdef XOMATH_EXPORTS
#define XOMATH_EXPORT __declspec(dllexport)
#else
#define XOMATH_EXPORT __declspec(dllimport)
#endif