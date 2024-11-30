
#include "configReader.hh"

#include <cstdlib>
#include <fstream>
#include <nlohmann/json.hpp>

namespace utils {
std::string getApiName() {
  const char* envApiName = std::getenv("API_NAME");
  if (envApiName) {
    return std::string(envApiName);
  }

  // Fallback to app.json
  std::ifstream appFile("app.json");
  if (appFile.is_open()) {
    nlohmann::json appJson;
    appFile >> appJson;
    appFile.close();
    return appJson.value("apiName", "Default API Name");
  }

  return "Default API Name";
}
}  // namespace utils
