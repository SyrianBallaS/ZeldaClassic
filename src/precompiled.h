
#pragma once

#if defined(ZC_PCH)

//globally remove extraneous bullshit
//

// Need to pretend we don't have C++11 support
#define BOOST_NO_CXX11_VARIADIC_TEMPLATES
#define BOOST_NO_CXX11_DELETED_FUNCTIONS
#define BOOST_NO_CXX11_RVALUE_REFERENCES
#define BOOST_NO_CXX11_DECLTYPE
#define BOOST_NO_CXX11_NULLPTR

// Boost
#include <../boost/boost/any.hpp>
#include <../boost/boost/array.hpp>
#include <../boost/boost/optional.hpp>
#include <../boost/boost/smart_ptr.hpp>
#include <../boost/boost/variant.hpp>
#include <../boost/boost/move/unique_ptr.hpp>
#include <../boost/boost/move/make_unique.hpp>

//c standard lib
#include <math.h>
#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//c++ stl (these are already found in common headers)
#include <string>
#include <map>
#include <vector>
#include <set>

//allegro
#include "zc_alleg.h"

//zc
#include "zc_malloc.h"

//Mem Debug
#define VLD_FORCE_ENABLE 0
#if (VLD_FORCE_ENABLE == 1)
#include "../vld/src/vld.h"
#endif // (VLD_FORCE_ENABLE == 1)
#endif

