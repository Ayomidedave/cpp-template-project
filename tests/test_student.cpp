#include <gtest/gtest.h>
#include "student_class.h"
using namespace homework_sep30;

TEST(StudentTest, BasicFunctionality)
{
  Student student;

  student.setName("Oreoluwa");
  EXPECT_EQ(student.getName(), "Oreoluwa");

  student.setAge(16);
  EXPECT_EQ(student.getAge(), 19);

  student.setGrade(7.4);
  EXPECT_EQ(student.getGrade(), 7.4);
}

TEST(GenerateStudentInfoTest, GenerateRandomStudent)
{
  auto [name, age, grade] = generateStudentInfo();

  // Check age is within the expected range
  EXPECT_GE(age, 18);
  EXPECT_LE(age, 25);

  // Check grade is within the expected range
  EXPECT_GE(grade, 0.0);
  EXPECT_LE(grade, 10.0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
