// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FileEntry.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8ErrorCallback.h"
#include "bindings/modules/v8/V8FileCallback.h"
#include "bindings/modules/v8/V8FileWriterCallback.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8FileEntry::wrapperTypeInfo = { gin::kEmbedderBlink, V8FileEntry::domTemplate, V8FileEntry::refObject, V8FileEntry::derefObject, V8FileEntry::trace, 0, 0, V8FileEntry::preparePrototypeObject, V8FileEntry::installConditionallyEnabledProperties, "FileEntry", &V8Entry::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FileEntry.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& FileEntry::s_wrapperTypeInfo = V8FileEntry::wrapperTypeInfo;

namespace FileEntryV8Internal {

static void createWriterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "createWriter", "FileEntry", 1, info.Length()), info.GetIsolate());
        return;
    }
    FileEntry* impl = V8FileEntry::toImpl(info.Holder());
    FileWriterCallback* successCallback;
    ErrorCallback* errorCallback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("createWriter", "FileEntry", "The callback provided as parameter 1 is not a function."));
            return;
        }
        successCallback = V8FileWriterCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("createWriter", "FileEntry", "The callback provided as parameter 2 is not a function."));
                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    impl->createWriter(successCallback, errorCallback);
}

static void createWriterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    FileEntryV8Internal::createWriterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void fileMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "file", "FileEntry", 1, info.Length()), info.GetIsolate());
        return;
    }
    FileEntry* impl = V8FileEntry::toImpl(info.Holder());
    FileCallback* successCallback;
    ErrorCallback* errorCallback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("file", "FileEntry", "The callback provided as parameter 1 is not a function."));
            return;
        }
        successCallback = V8FileCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("file", "FileEntry", "The callback provided as parameter 2 is not a function."));
                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    impl->file(successCallback, errorCallback);
}

static void fileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    FileEntryV8Internal::fileMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace FileEntryV8Internal

static const V8DOMConfiguration::MethodConfiguration V8FileEntryMethods[] = {
    {"createWriter", FileEntryV8Internal::createWriterMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"file", FileEntryV8Internal::fileMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8FileEntryTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "FileEntry", V8Entry::domTemplate(isolate), V8FileEntry::internalFieldCount,
        0, 0,
        0, 0,
        V8FileEntryMethods, WTF_ARRAY_LENGTH(V8FileEntryMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8FileEntry::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8FileEntryTemplate);
}

bool V8FileEntry::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8FileEntry::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

FileEntry* V8FileEntry::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8FileEntry::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8FileEntry::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink