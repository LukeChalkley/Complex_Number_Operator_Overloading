#pragma once

#include "cxxtest/TestSuite.h"
#include <iostream>

#include "complex.h"

class ComplexNumberTest : public CxxTest::TestSuite
{
public:
	void testAddition1(void)
	{
		/// (3+2i) + (1+7i) == 4+9i == 3 + 1 + (2+7)i

		std::cout << "Beginning addition tests." << std::endl;

		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 3, 2 };
		complex<int> rhs = complex<int>{ 1, 7 };

		complex<int> expectedAnswer = complex<int>{ 4, 9 };
		complex<int> actualAnswer = lhs + rhs;

		//std::cout << "\nExpected answer: " << lhs << " + " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " + " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testAddition2(void)
	{
		///(3+5i) + (4-3i) == 7 + 2i == 3+4 + (5-3)i

		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 3, 5 };
		complex<int> rhs = complex<int>{ 4, -3 };

		complex<int> expectedAnswer = complex<int>{ 7, 2 };
		complex<int> actualAnswer = lhs + rhs;

		//std::cout << "Expected answer: " << lhs << " + " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " + " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testAddition3(void)
	{
		///(3+5i) + (4-3i) == 7 + 2i == 3+4 + (5-3)i

		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 1, 2 };
		complex<int> rhs = complex<int>{ 3, 4 };

		complex<int> expectedAnswer = complex<int>{ 4, 6 };
		complex<int> actualAnswer = lhs + rhs;

		//std::cout << "Expected answer: " << lhs << " + " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " + " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testAdditionFail(void)
	{
		///(3+5i) + (4-3i) == 7 + 2i == 3+4 + (5-3)i

		TS_TRACE("This test should FAIL.");

		complex<int> lhs = complex<int>{ 1, 2 };
		complex<int> rhs = complex<int>{ 3, 4 };

		complex<int> expectedAnswer = complex<int>{ 1, 1 };
		complex<int> actualAnswer = lhs + rhs;

		//std::cout << "Expected answer: " << lhs << " + " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " + " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer != actualAnswer);
	}


	void testSubtraction1(void)
	{
		std::cout << "Beginning subtraction tests." << std::endl;

		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ -9, -2 };
		complex<int> rhs = complex<int>{ 2, 3 };

		complex<int> expectedAnswer = complex<int>{ -11, -5 };
		complex<int> actualAnswer = lhs - rhs;

		//std::cout << "Expected answer: " << lhs << " - " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " - " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testSubtraction2(void)
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 8, -3 };
		complex<int> rhs = complex<int>{ -6, 2 };

		complex<int> expectedAnswer = complex<int>{ 14, -5 };
		complex<int> actualAnswer = lhs - rhs;

		//std::cout << "Expected answer: " << lhs << " - " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " - " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testNegationBothPositive(void)
	{
		TS_TRACE("This test should PASS.");

		complex<int> number = complex<int>{ 2, 3 };

		complex<int> expectedAnswer = complex<int>{ -2, -3 };
		complex<int> actualAnswer = -number;

		//std::cout << "Expected answer: " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testNegationPosRealNegImag(void)
	{
		TS_TRACE("This test should PASS.");

		complex<int> number = complex<int>{ 2, -3 };

		complex<int> expectedAnswer = complex<int>{ -2, 3 };
		complex<int> actualAnswer = -number;

		//std::cout << "Expected answer: " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testNegationNegRealPosImag()
	{
		TS_TRACE("This test should PASS.");

		complex<int> number = complex<int>{ -2, 3 };

		complex<int> expectedAnswer = complex<int>{ 2, -3 };
		complex<int> actualAnswer = -number;

		//std::cout << "Expected answer: " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testNegationBothNegative(void)
	{
		TS_TRACE("This test should PASS.");

		complex<int> number = complex<int>{ -2, -3 };

		complex<int> expectedAnswer = complex<int>{ 2, 3 };
		complex<int> actualAnswer = -number;

		//std::cout << "Expected answer: " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testMultiplication()
	{
		std::cout << "Beginning multiplication tests." << std::endl;

		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 3, 2 };
		complex<int> rhs = complex<int>{ 1, 7 };

		complex<int> expectedAnswer = complex<int>{ -11, 23 };
		complex<int> actualAnswer = lhs * rhs;

		//std::cout << "Expected answer: " << lhs << " * " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " * " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testMultiplication2()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 1, 4 };
		complex<int> rhs = complex<int>{ 5, 1 };

		complex<int> expectedAnswer = complex<int>{ 1, 21 };
		complex<int> actualAnswer = lhs * rhs;

		//std::cout << "Expected answer: " << lhs << " * " << rhs << " = " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << lhs << " * " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testConjugate1()
	{
		std::cout << "Beginning conjugate tests." << std::endl;

		TS_TRACE("This test should PASS.");

		complex<int> number = complex<int>{ 3,2 };

		complex<int> expectedAnswer = complex<int>(3, -2);
		complex<int> actualAnswer = number.get_conjugate();

		//std::cout << "Conjugate of " << number << " should be " << expectedAnswer << std::endl;
		//std::cout << "Actual answer: " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);

		
	}

	void testConjugate2()
	{
		TS_TRACE("This test should PASS.");

		complex<int> number = complex<int>{3,-2};

		complex<int> expectedAnswer = complex<int>(3, 2);
		complex<int> actualAnswer = number.get_conjugate();

/*		std::cout << "Conjugate of " << number << " should be " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << actualAnswer << std::endl;*/		

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision()
	{
		std::cout << "Beginning division tests." << std::endl;

		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 20, -4 };
		complex<int> rhs = complex<int>{ 3, 2 };

		complex<int> expectedAnswer = complex<int>{ 4, -4 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision2()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 3, 2 };
		complex<int> rhs = complex<int>{ 4, -3 };

		complex<int> expectedAnswer = complex<int>{ 6/25, 17/25 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision3()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 4, 5 };
		complex<int> rhs = complex<int>{ 2, 6 };

		complex<int> expectedAnswer = complex<int>{ 19/20, -7/20 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision4()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 4, 7 };
		complex<int> rhs = complex<int>{ 1, -3 };

		complex<int> expectedAnswer = complex<int>{ -17/10, 19/10 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision5()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 2, -5 };
		complex<int> rhs = complex<int>{ -4, 3 };

		complex<int> expectedAnswer = complex<int>{ -23/25, 14/25 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision6()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 2, -1 };
		complex<int> rhs = complex<int>{ -3, 6 };

		complex<int> expectedAnswer = complex<int>{ -4/15, -1/5 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision7()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ 4, 5 };
		complex<int> rhs = complex<int>{ 2, 6 };

		complex<int> expectedAnswer = complex<int>{ 19/20, -7/20 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}

	void testDivision8()
	{
		TS_TRACE("This test should PASS.");

		complex<int> lhs = complex<int>{ -6, -3 };
		complex<int> rhs = complex<int>{ 4, 6 };

		complex<int> expectedAnswer = complex<int>{ -21 / 26, 6/13 };
		complex<int> actualAnswer = lhs / rhs;

		std::cout << "Expected answer: " << lhs << " / " << rhs << " = " << expectedAnswer << std::endl;
		std::cout << "Actual answer: " << lhs << " / " << rhs << " = " << actualAnswer << std::endl;

		TS_ASSERT(expectedAnswer == actualAnswer);
	}
};
