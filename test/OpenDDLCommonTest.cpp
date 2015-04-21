/*-----------------------------------------------------------------------------------------------
The MIT License (MIT)

Copyright (c) 2014-2015 Kim Kulling

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
-----------------------------------------------------------------------------------------------*/
#include "gtest/gtest.h"

#include <openddlparser/OpenDDLCommon.h>

BEGIN_ODDLPARSER_NS

class OpenDDLCommonTest : public testing::Test {
};

TEST_F( OpenDDLCommonTest, createNameTest ) {
    bool ok( true );
    Name *name( nullptr );
    try {
        name = new Name( GlobalName, nullptr );
    } catch( ... ) {
        ok = false;
    }
    EXPECT_TRUE( ok );
}

TEST_F( OpenDDLCommonTest, CompareIdentifierTest ) {
    Identifier id1( 5, "test" ), id2( 5, "test" );
    bool equal( id1 == id2 );
    EXPECT_TRUE( equal );
}

END_ODDLPARSER_NS