// Generated by esidl 0.3.0.
// This file is expected to be modified for the Web IDL interface
// implementation.  Permission to use, copy, modify and distribute
// this file in any software license is hereby granted.

#ifndef ORG_W3C_DOM_BOOTSTRAP_MESSAGEPORTIMP_H_INCLUDED
#define ORG_W3C_DOM_BOOTSTRAP_MESSAGEPORTIMP_H_INCLUDED

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/html/MessagePort.h>
#include "EventTargetImp.h"

#include <org/w3c/dom/events/EventTarget.h>
#include <org/w3c/dom/events/EventHandlerNonNull.h>
#include <org/w3c/dom/html/Transferable.h>

namespace org
{
namespace w3c
{
namespace dom
{
namespace bootstrap
{
class MessagePortImp : public ObjectMixin<MessagePortImp, EventTargetImp>
{
public:
    // MessagePort
    void postMessage(Any message);
    void postMessage(Any message, Sequence<html::Transferable> transfer);
    void start();
    void close();
    events::EventHandlerNonNull getOnmessage();
    void setOnmessage(events::EventHandlerNonNull onmessage);
    // Transferable
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return html::MessagePort::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return html::MessagePort::getMetaData();
    }
};

}
}
}
}

#endif  // ORG_W3C_DOM_BOOTSTRAP_MESSAGEPORTIMP_H_INCLUDED