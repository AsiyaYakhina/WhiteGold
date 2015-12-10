#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t969;
// System.IO.TextReader
struct TextReader_t1076;
// System.Text.Encoding
struct Encoding_t760;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t968  : public Object_t
{
};
struct Console_t968_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t969 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t969 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1076 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t760 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t760 * ___outputEncoding_4;
};
