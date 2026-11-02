// AddressSanitizer reads default options from this function. The check
// for the initialization order problem is off by default; this turns it on,
// so the sanitizer build proves that the fix has no such problem.
// Source: https://github.com/google/sanitizers/wiki/AddressSanitizerFlags
extern "C" const char* __asan_default_options() {
    return "check_initialization_order=1";
}
