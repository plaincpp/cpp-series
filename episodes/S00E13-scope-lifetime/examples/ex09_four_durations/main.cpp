// example: ex09_four_durations
// purpose: Show when objects with static, automatic and dynamic storage duration start and end.
// expect: ok
// in-video: yes
#include <iostream>
#include "tracer.h"
Tracer global_tracer("global");
void use_static() {
    static Tracer local_static("static");
}
int main() {
    Tracer automatic("automatic");
    Tracer* dynamic = new Tracer("dynamic");
    use_static();
    use_static();
    delete dynamic;
    std::cout << "main ends\n";
}
