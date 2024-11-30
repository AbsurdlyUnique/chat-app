#include "versionReader.hh"

#include <fstream>
#include <string>

namespace utils {
std::string readVersion(const std::string& filePath) {
  std::ifstream file(filePath);
  std::string version;
  if (file.is_open()) {
    std::getline(file, version);
    file.close();
  } else {
    version = "unknown";  // Default version if file not found
  }
  return version;
}
}  // namespace utils
