#include <gtest/gtest.h>
#include <string>

// clang-format off
const std::string INPUT = "2\n1 1 1 1 1 1\n1000 999 998 5 5 6";
const std::string EXPECTED_OUTPUT = "0.2041\n1.4189";

// clang-format on
std::string calculate_inscribed_sphere_radius(const std::string& stream)
{
  return "";
}

TEST(validation, test)
{
  EXPECT_STREQ(EXPECTED_OUTPUT.c_str(), calculate_inscribed_sphere_radius(INPUT).c_str());
}