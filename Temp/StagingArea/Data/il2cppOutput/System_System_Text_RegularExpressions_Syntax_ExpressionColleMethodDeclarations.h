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

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t921;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t922;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
extern "C" void ExpressionCollection__ctor_m4775 (ExpressionCollection_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionCollection_Add_m4776 (ExpressionCollection_t921 * __this, Expression_t922 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern "C" Expression_t922 * ExpressionCollection_get_Item_m4777 (ExpressionCollection_t921 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionCollection_set_Item_m4778 (ExpressionCollection_t921 * __this, int32_t ___i, Expression_t922 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
extern "C" void ExpressionCollection_OnValidate_m4779 (ExpressionCollection_t921 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
