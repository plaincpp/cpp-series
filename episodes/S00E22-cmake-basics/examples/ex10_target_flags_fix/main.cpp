// example: ex10_target_flags_fix
// purpose: Put the warning flags on your own target, so that the library code builds with its own flags.
// expect: ok
// in-video: yes
#include "vendor_log.h"

int main() {
    log_message("build started", 1);
}
