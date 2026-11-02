#pragma once

inline int call_count = 0;

inline void count_call() {
    ++call_count;
}
