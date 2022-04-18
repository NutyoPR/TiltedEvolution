#pragma once

#include "OverlayClient.hpp"

struct TransportService;

namespace TiltedPhoques
{
struct OverlayRenderHandler;
}

struct OverlayClient : TiltedPhoques::OverlayClient
{
    OverlayClient(TransportService& aTransport, TiltedPhoques::OverlayRenderHandler* apHandler);
    virtual ~OverlayClient() noexcept;

    bool OnProcessMessageReceived(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefProcessId source_process,
                                  CefRefPtr<CefProcessMessage> message) override;

    TP_NOCOPYMOVE(OverlayClient);

private:
    void ProcessConnectMessage(CefRefPtr<CefListValue> aEventArgs);
    void ProcessDisconnectMessage();
    void ProcessChatMessage(CefRefPtr<CefListValue> aEventArgs);

    TransportService& m_transport;
};