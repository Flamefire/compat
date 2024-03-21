// Copyright 2024 Peter Dimov
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#include <boost/compat/invoke.hpp>
#include <boost/core/lightweight_test.hpp>

int f0()
{
    return -1;
}

int f1( int x1 )
{
    return x1;
}

int f2( int x1, int x2 )
{
    return 10*x1+x2;
}

int f3( int x1, int x2, int x3 )
{
    return 100*x1 + 10*x2 + x3;
}

int main()
{
    BOOST_TEST_EQ( boost::compat::invoke( f0 ), -1 );
    BOOST_TEST_EQ( boost::compat::invoke( f1, 1 ), 1 );
    BOOST_TEST_EQ( boost::compat::invoke( f2, 1, 2 ), 12 );
    BOOST_TEST_EQ( boost::compat::invoke( f3, 1, 2, 3 ), 123 );

    return boost::report_errors();
}
