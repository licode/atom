/*-----------------------------------------------------------------------------
| Copyright (c) 2014, Nucleic
|
| Distributed under the terms of the BSD 3-Clause License.
|
| The full license is in the file LICENSE, distributed with this software.
|----------------------------------------------------------------------------*/
#pragma once

#include <Python.h>

#if PY_MAJOR_VERSION >= 3

#define Py23Str_Check PyUnicode_Check
#define Py23Str_AS_STRING PyUnicode_AsUTF8
#define Py23Str_FromString PyUnicode_FromString
#define Py23Bytes_Check PyBytes_Check
#define Py23Bytes_AS_STRING PyBytes_AS_STRING
#define Py23Int_Check PyLong_Check
#define Py23Int_FromLong PyLong_FromLong
#define Py23Int_AsLong PyLong_AsLong
#define Py23Number_Int PyNumber_Long
#define Py23Int_AsSsize_t PyLong_AsSsize_t
#define Py23Int_FromSsize_t PyLong_FromSsize_t

#else

#define Py23Str_Check PyString_Check
#define Py23Str_AS_STRING PyString_AS_STRING
#define Py23Str_FromString PyString_FromString
#define Py23Bytes_Check PyString_Check
#define Py23Bytes_AS_STRING PyString_AS_STRING
#define Py23Int_Check( ob ) ( PyInt_Check( ob ) || PyLong_Check( ob ) )
#define Py23Int_FromLong PyInt_FromLong
#define Py23Int_AsLong PyInt_AsLong
#define Py23Number_Int PyNumber_Int
#define Py23Int_AsSsize_t PyInt_AsSsize_t
#define Py23Int_FromSsize_t PyInt_FromSsize_t

#endif