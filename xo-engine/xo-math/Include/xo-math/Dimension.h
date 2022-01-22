#pragma once

#include "xo-math-internal.h"

namespace xo::math {
    
    template<typename T, size_t COUNT>
    struct Dimension {
        T Values[COUNT];
    };

    template<typename T>
    struct Dimension<T, 1> {
        union {
            T Values[1];
            T X;
        };
    };

    template<typename T>
    struct Dimension<T, 2> {
        union {
            T Values[2];
            struct {
                T X, Y;
            };
        };
    };

    template<typename T>
    struct Dimension<T, 3> {
        union {
            T Values[3];
            struct {
                T X, Y, Z;
            };
        };
    };

}