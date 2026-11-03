// example: ex09_global_flags_pitfall
// purpose: Show that -Werror in CMAKE_CXX_FLAGS also stops the build of library code that you do not own.
// expect: compile-error
// expect-match: unused parameter 'level'
// flags: -Werror
// in-video: yes
#include "vendor_log.h"

int main() {
    log_message("build started", 1);
}
