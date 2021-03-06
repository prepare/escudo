// Generated by esidl 0.3.0.
// This file is expected to be modified for the Web IDL interface
// implementation.  Permission to use, copy, modify and distribute
// this file in any software license is hereby granted.

#ifndef ORG_W3C_DOM_BOOTSTRAP_PAGETRANSITIONEVENTIMP_H_INCLUDED
#define ORG_W3C_DOM_BOOTSTRAP_PAGETRANSITIONEVENTIMP_H_INCLUDED

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/html/PageTransitionEvent.h>
#include "EventImp.h"

#include <org/w3c/dom/events/Event.h>
#include <org/w3c/dom/html/PageTransitionEvent.h>
#include <org/w3c/dom/html/PageTransitionEventInit.h>

namespace org
{
namespace w3c
{
namespace dom
{
namespace bootstrap
{
class PageTransitionEventImp : public ObjectMixin<PageTransitionEventImp, EventImp>
{
public:
    // PageTransitionEvent
    bool getPersisted();
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return html::PageTransitionEvent::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return html::PageTransitionEvent::getMetaData();
    }
};

}
}
}
}

#endif  // ORG_W3C_DOM_BOOTSTRAP_PAGETRANSITIONEVENTIMP_H_INCLUDED
