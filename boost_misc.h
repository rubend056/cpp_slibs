#ifndef BOOST_MISC
#define BOOST_MISC

#include <iostream>
#include <vector>
#include <cstring>

#include <boost/filesystem.hpp>
#include <boost/format.hpp>

namespace fs = boost::filesystem;

int getInt(std::string string);
std::string getExt(std::string name);
fs::path concatPath(fs::path path, std::string str);
fs::path concatPath(fs::path path, char * str);
std::vector<fs::path> listFolder(fs::path _path);

#endif