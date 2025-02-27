#include <concepts>

#include <ystdlib/testlib/hello.hpp>

#include <catch2/catch_test_macros.hpp>

namespace {
template <typename T>
requires std::integral<T>

[[nodiscard]] auto square(T x) -> T {
    return x * x;
}
};  // namespace

TEST_CASE("dummy") {
    REQUIRE((169 == square(ystdlib::testlib::hello().size())));
}
