// farmer.cpp — part of garden-autofarm.

#include "gardenautofarm/farmer.h"

#include <cstdio>

namespace gardenautofarm {

Farmer::Farmer(const std::string& config_path)
    : config_path_(config_path) {}

void Farmer::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Farmer::run() {
    if (verbose_) std::fprintf(stderr, "[garden-autofarm] farmer: run\n");
    // core logic lives here
    return true;
}

}  // namespace gardenautofarm
