// alerts.cpp — part of garden-autofarm.

#include "gardenautofarm/alerts.h"

#include <cstdio>

namespace gardenautofarm {

Alerts::Alerts(const std::string& config_path)
    : config_path_(config_path) {}

void Alerts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Alerts::run() {
    if (verbose_) std::fprintf(stderr, "[garden-autofarm] alerts: run\n");
    // core logic lives here
    return true;
}

}  // namespace gardenautofarm
