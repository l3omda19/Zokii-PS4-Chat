# Zokii PS4 Chat

Prototype PS4 in-game chat project.

This ZIP contains the source/layout for a PS4 PRX-style project. It is NOT a compiled `.prx`; compiling requires a compatible PS4 SDK/toolchain.

Features planned:
- In-game chat UI
- Message input
- Player list
- Online/offline status
- PS4-friendly controller navigation

See `src/chat.cpp` for the prototype logic.


## GitHub Actions

The `.github/workflows/build.yml` workflow builds the source with OpenOrbis and uploads the resulting PRX as a GitHub Actions artifact.

1. Create a GitHub repository.
2. Upload all files from this ZIP.
3. Push to `main` or `master`, or use **Actions → Build Zokii PS4 Chat PRX → Run workflow**.
4. Download the `Zokii-PS4-Chat-PRX` artifact if the build succeeds.

The workflow uses the public OpenOrbis PS4 toolchain. The official project documents `create-lib` as the tool used to generate PS4-compatible library PRX files.
