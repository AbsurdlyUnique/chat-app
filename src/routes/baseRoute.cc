#include <crow/app.h>
#include <crow/json.h>

#include <configReader.hh>
#include <routes/baseRoute.hh>
#include <versionReader.hh>

namespace baseRoute {
void setup(crow::SimpleApp& app) {
  CROW_ROUTE(app, "/")([]() {
    // read the API version and name
    std::string version = utils::readVersion("version.txt");
    std::string name = utils::getApiName();

    // return a JSON response
    crow::json::wvalue response;
    response["status"] = "success";
    response["message"] = "Welcome to " + name + " API";
    response["version"] = version;
    response["name"] = name;

    return response;
  });
}
}  // namespace baseRoute
