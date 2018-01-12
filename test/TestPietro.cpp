#include <boost/test/unit_test.hpp>

#include "Pietro.hpp"

BOOST_AUTO_TEST_SUITE(ProjectTest)

BOOST_AUTO_TEST_CASE(Pietro_constructor) {
        Pietro* pietro = new Pietro('*');
        BOOST_CHECK_EQUAL('*', pietro->getSciana());
}


BOOST_AUTO_TEST_SUITE_END()
