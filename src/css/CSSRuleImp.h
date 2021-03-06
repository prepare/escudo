/*
 * Copyright 2010-2013 Esrille Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CSSRULE_IMP_H
#define CSSRULE_IMP_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/css/CSSRule.h>

namespace org { namespace w3c { namespace dom { namespace bootstrap {

class CSSStyleSheetImp;
typedef std::shared_ptr<CSSStyleSheetImp> CSSStyleSheetPtr;

class CSSRuleImp;
typedef std::shared_ptr<CSSRuleImp> CSSRulePtr;

class CSSRuleImp : public ObjectMixin<CSSRuleImp>
{
    std::weak_ptr<CSSStyleSheetImp> parentStyleSheet;
    std::weak_ptr<CSSRuleImp> parentRule;

public:
    void setParentStyleSheet(const CSSStyleSheetPtr& sheet);
    void setParentRule(const CSSRulePtr& rule);

    // CSSRule
    virtual unsigned short getType();
    virtual std::u16string getCssText();
    virtual void setCssText(const std::u16string& cssText);
    virtual css::CSSRule getParentRule();
    css::CSSStyleSheet getParentStyleSheet();
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return css::CSSRule::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return css::CSSRule::getMetaData();
    }
};

}}}}  // org::w3c::dom::bootstrap

#endif  // CSSRULE_IMP_H
