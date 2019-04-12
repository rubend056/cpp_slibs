#ifndef MISC
#define MISC

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

#include <boost/filesystem.hpp>
#include <boost/format.hpp>

namespace fs = boost::filesystem;
using namespace std;

int getInt(string string);
string getExt(string name);
fs::path concatPath(fs::path path, string str);
fs::path concatPath(fs::path path, char * str);
vector<fs::path> listFolder(fs::path _path);


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