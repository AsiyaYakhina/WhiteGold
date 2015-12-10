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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t846;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t646;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t847;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t739;
// System.Security.Cryptography.Oid
struct Oid_t848;
// System.Byte[]
struct ByteU5BU5D_t589;
// System.Security.Cryptography.DSA
struct DSA_t648;
// System.Security.Cryptography.RSA
struct RSA_t640;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4281 (PublicKey_t846 * __this, X509Certificate_t646 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t847 * PublicKey_get_EncodedKeyValue_m4282 (PublicKey_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t847 * PublicKey_get_EncodedParameters_m4283 (PublicKey_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t739 * PublicKey_get_Key_m4284 (PublicKey_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t848 * PublicKey_get_Oid_m4285 (PublicKey_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t589* PublicKey_GetUnsignedBigInteger_m4286 (Object_t * __this /* static, unused */, ByteU5BU5D_t589* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t648 * PublicKey_DecodeDSA_m4287 (Object_t * __this /* static, unused */, ByteU5BU5D_t589* ___rawPublicKey, ByteU5BU5D_t589* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t640 * PublicKey_DecodeRSA_m4288 (Object_t * __this /* static, unused */, ByteU5BU5D_t589* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
