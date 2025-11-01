# TODO

## Core Upgrades

### x64 Architecture
- [ ] Update project configuration to target x64 platform
- [ ] Remove x86-specific code or compiler flags
- [ ] Update build outputs to target `x64/Release` and `x64/Debug`
- [ ] Verify all dependencies support x64

### ImGui Modernization
- [ ] Remove embedded ImGui and include it as a submodule
- [ ] Update project references to use submodule paths
- [ ] Verify all ImGui API calls are compatible with latest version
- [ ] Add full x64 support for the project

## Code Quality

### Code Cleanup
- [ ] Refactor code to current coding style/standards
- [ ] Review and modernize C++ usage (leverage C++14/C++17 features)
- [ ] Add proper error handling and logging
- [ ] Document public APIs and complex logic

### Code Formatting
- [ ] Create `.clang-format` configuration file
- [ ] Run clang-format across entire codebase
- [ ] Add format checking to CI/CD pipeline

## CI/CD & Automation

### GitHub Actions
- [ ] Create `.github/workflows/build.yml` for automatic builds on push to `main`
- [ ] Create `.github/workflows/release.yml` for automated releases
  - Build x64 Release binary
  - Create GitHub release with artifacts
  - Add version tagging
- [ ] Add status badges to README.md

### Build System
- [ ] Consider adding CMake support for cross-platform potential
- [ ] Document build requirements (VS2022, Windows SDK version, etc.)

## Documentation

- [ ] Update README.md with new build instructions (x64, DirectX 11)
- [ ] Add CONTRIBUTING.md with development guidelines
- [ ] Document ImGui submodule setup process
- [ ] Add changelog tracking (CHANGELOG.md)

## Nice-to-Have

- [ ] Add CMake presets for common build configurations
- [ ] Add pre-commit hooks for formatting and linting
- [ ] Consider adding a configuration file (JSON/INI) for runtime settings
- [ ] Add performance profiling hooks
- [ ] Create example/demo customization guide
