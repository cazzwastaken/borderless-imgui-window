#pragma once
#include <string_view>
#include <d3d11.h>

namespace gui {
    // constant window size (logical pixels)
    constexpr int WIDTH = 500;
    constexpr int HEIGHT = 300;

    // Configuration flags
    inline bool isDPIAware = true;
    inline bool vSyncEnabled = true;

    // when this changes, exit threads
    // and close menu :)
    inline bool isRunning = true;

    // winapi window vars
    inline HWND window = nullptr;
    inline WNDCLASSEX windowClass = {};

    // points for window movement
    inline POINTS position = {};

    // direct x state vars
    inline ID3D11Device* device = nullptr;
    inline ID3D11DeviceContext* deviceContext = nullptr;
    inline IDXGISwapChain* swapChain = nullptr;
    inline ID3D11RenderTargetView* mainRenderTargetView = nullptr;

    // DPI scaling factor
    inline float dpiScale = 1.0f;

    // handle window creation & destruction
    void CreateHWindow(std::wstring_view title);
    void DestroyHWindow() noexcept;

    // handle device creation & destruction
    bool CreateDevice() noexcept;
    void DestroyDevice() noexcept;

    // handle render target creation & destruction
    void CreateRenderTarget() noexcept;
    void DestroyRenderTarget() noexcept;

    // handle ImGui creation & destruction
    void CreateImGui() noexcept;
    void DestroyImGui() noexcept;

    void BeginRender() noexcept;
    void EndRender() noexcept;
    void Render() noexcept;
}  // namespace gui
