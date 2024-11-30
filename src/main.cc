#include "routes/routeRegistrar.hh"

int main() {
  crow::SimpleApp app;

  // Register all routes
  routes::registerRoutes(app);

  // Start the app
  app.port(8080).multithreaded().run();

  return 0;
}
