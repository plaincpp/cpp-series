// AddressSanitizer reads default options from this function. The check
// for the initialization order problem is off by default; this turns it on.
// It has no effect in a build without AddressSanitizer.
// Source: https://github.com/google/sanitizers/wiki/AddressSanitizerFlags
// and https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco
extern "C" const char* __asan_default_options() {
    return "check_initialization_order=1";
}
