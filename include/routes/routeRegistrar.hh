#pragma once

#include <crow/app.h>

#include "crow.h"

namespace routes {
// Function to register all routes in the application
void registerRoutes(crow::SimpleApp& app);
}  // namespace routes
