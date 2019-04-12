#ifndef MISC
#define MISC

// #include <string>


template<typename T>
T clamp(T v, T l, T h) {
  if (v < l)return l;
  else if (v > h) return h;
  else return v;
}

template<typename T>
T wrap(T v, T l, T h) {
  if (l > h)return v; else {
    T r = h - l;
    while (v < l)v += r;
    while (v > h)v -= r;
  }
  return v;
}

#endif