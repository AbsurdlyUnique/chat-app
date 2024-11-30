#include "utils/dbConnection.hh"

#include <iostream>
#include <pqxx/pqxx>

namespace utils {
pqxx::connection createConnection(const std::string& connectionString) {
  try {
    return pqxx::connection(connectionString);
  } catch (const std::exception& e) {
    std::cerr << "Database connection failed: " << e.what() << std::endl;
    throw;
  }
}
}  // namespace utils
