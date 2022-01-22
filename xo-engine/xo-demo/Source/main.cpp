#include <inttypes.h>

#include <xo-engine/api.h>

#include <xo-math/Dimension.h>

#include <stb/stb_image.h>

#if CONFIG == CONFIG_TEST
#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>
#endif

using namespace xo;
using namespace xo::math;
using namespace xo::engine;

int main(int argc, char* argv[]) {
#if CONFIG == CONFIG_TEST
    Catch::Session session;

    int returnCode = session.applyCommandLine(argc, argv);
    if (returnCode != 0)
    {
        return returnCode;
    }
    returnCode = session.run();

    return returnCode;
#else
    api();
    Dimension<uint32_t, 2> screenSize = { 1920, 1080 };
    (void)screenSize;
#endif

}

#if CONFIG == CONFIG_TEST
unsigned int Factorial(unsigned int number) {
    return number <= 1 ? number : Factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed from main", "[factorial main]") {
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}
#endif