
#pragma once

#include <pqxx/pqxx>
#include <string>

namespace utils {
pqxx::connection createConnection(const std::string& connectionString);
}
