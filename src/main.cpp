// main.cpp — entry point. Wires config and subsystems together.

#include "gardenautofarm/settings.h"
#include "gardenautofarm/farmer.h"
#include "gardenautofarm/cycles.h"
#include "gardenautofarm/alerts.h"
#include "gardenautofarm/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gardenautofarm::Settings settings = gardenautofarm::Settings::load_default();
    gardenautofarm::Farmer farmer(settings.store_path);
    gardenautofarm::Cycles cycles(settings.store_path);
    gardenautofarm::Alerts alerts(settings.store_path);
    gardenautofarm::Cli cli(settings.store_path);
    std::fprintf(stderr, "[garden-autofarm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
