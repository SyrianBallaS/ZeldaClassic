
#pragma once

#if defined(ZC_PCH)

//globally remove extraneous bullshit
//

// Boost
#include <boost/any.hpp>
#include <boost/array.hpp>
#include <boost/optional.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/variant.hpp>
#include <boost/move/unique_ptr.hpp>
#include <boost/move/make_unique.hpp>

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

#endif

