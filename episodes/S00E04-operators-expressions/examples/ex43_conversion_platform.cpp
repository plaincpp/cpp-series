// example: ex43_conversion_platform
// purpose: Prove that unsigned + long gives long on LP64, so the result type depends on the platform.
// expect: ok
template <typename A, typename B>
constexpr bool same = false;

template <typename A>
constexpr bool same<A, A> = true;

static_assert(sizeof(long) > sizeof(unsigned int));
static_assert(same<decltype(1u + 1L), long>);

int main() {
}
