#include <boost/test/unit_test.hpp>

#include "Drzwi.hpp"

BOOST_AUTO_TEST_SUITE(ProjectTest)

BOOST_AUTO_TEST_CASE(Drzwi_constructor) {
        Drzwi* drzwi = new Drzwi('*');
        BOOST_CHECK_EQUAL('*', drzwi->getSciana());
}


BOOST_AUTO_TEST_SUITE_END()
