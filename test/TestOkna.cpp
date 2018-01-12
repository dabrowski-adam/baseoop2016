#include <boost/test/unit_test.hpp>

#include "Okna.hpp"

BOOST_AUTO_TEST_SUITE(ProjectTest)

BOOST_AUTO_TEST_CASE(Okna_constructor) {
        Okna* okna = new Okna('?', false);
        BOOST_CHECK_EQUAL('?', okna->getSciana());
}

BOOST_AUTO_TEST_CASE(Okna_getOzdobne) {
        Okna* okna = new Okna(' ', true);
        BOOST_CHECK_EQUAL(true, okna->getOzdobne());
}


BOOST_AUTO_TEST_SUITE_END()
