#include <crow/app.h>

#include <routes/baseRoute.hh>
#include <routes/routeRegistrar.hh>

namespace routes {
void registerRoutes(crow::SimpleApp& app) {
  // Register the base route ("/")
  baseRoute::setup(app);
}
}  // namespace routes
