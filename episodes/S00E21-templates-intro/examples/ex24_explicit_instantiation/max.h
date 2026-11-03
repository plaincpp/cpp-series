#pragma once
template <typename T>
T max_of(T a, T b);
extern template int max_of<int>(int, int);
extern template double max_of<double>(double, double);
