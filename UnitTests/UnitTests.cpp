#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "..\TDDEducation\Soundex.h"

using namespace ::testing;

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
	Soundex soundex;
	ASSERT_THAT(soundex.encode("A"), Eq("A"));
}

int main(int argc, char** argv)
{
	// The following line must be executed to initialize Google Mock
	// (and Google Test) before running the tests.
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}

