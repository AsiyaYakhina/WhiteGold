#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t699;
// System.AsyncCallback
struct AsyncCallback_t161;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t589;
// System.IO.Stream
struct Stream_t701;
// System.Exception
struct Exception_t301;
// System.Threading.WaitHandle
struct WaitHandle_t755;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3610 (ReceiveRecordAsyncResult_t699 * __this, AsyncCallback_t161 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t589* ___initialBuffer, Stream_t701 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t701 * ReceiveRecordAsyncResult_get_Record_m3611 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t589* ReceiveRecordAsyncResult_get_ResultingBuffer_m3612 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t589* ReceiveRecordAsyncResult_get_InitialBuffer_m3613 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3614 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t301 * ReceiveRecordAsyncResult_get_AsyncException_m3615 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3616 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t755 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3617 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3618 (ReceiveRecordAsyncResult_t699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3619 (ReceiveRecordAsyncResult_t699 * __this, Exception_t301 * ___ex, ByteU5BU5D_t589* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3620 (ReceiveRecordAsyncResult_t699 * __this, Exception_t301 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3621 (ReceiveRecordAsyncResult_t699 * __this, ByteU5BU5D_t589* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
