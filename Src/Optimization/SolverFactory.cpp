#include "SolverFactory.hpp"

std::unique_ptr<ISolver> SolverFactory::create(std::string_view method) {
    throw std::logic_error("Not implemented");
    return std::unique_ptr<ISolver>();
}
