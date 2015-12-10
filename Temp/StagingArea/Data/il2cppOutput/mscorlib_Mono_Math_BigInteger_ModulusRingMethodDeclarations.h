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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1039;
// Mono.Math.BigInteger
struct BigInteger_t1040;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6039 (ModulusRing_t1039 * __this, BigInteger_t1040 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6040 (ModulusRing_t1039 * __this, BigInteger_t1040 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1040 * ModulusRing_Multiply_m6041 (ModulusRing_t1039 * __this, BigInteger_t1040 * ___a, BigInteger_t1040 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1040 * ModulusRing_Difference_m6042 (ModulusRing_t1039 * __this, BigInteger_t1040 * ___a, BigInteger_t1040 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1040 * ModulusRing_Pow_m6043 (ModulusRing_t1039 * __this, BigInteger_t1040 * ___a, BigInteger_t1040 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1040 * ModulusRing_Pow_m6044 (ModulusRing_t1039 * __this, uint32_t ___b, BigInteger_t1040 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
