#pragma once

/**
 * \brief The namespace for code specific to 343 Industries.
 */
namespace i343
{
	/**
	 * \brief The namespace for the dynamic library.
	 */
	namespace dynamic_math
	{
		/**
		 * \brief A trivial class to perform math.
		 * \details This is simply to provide sample functionality in order to demonstrate using
		 * native NuGet packages.
		 */
		class __declspec(dllexport) mathematics
		{
		public:
			/**
			 * \brief Returns the sum of two numbers.
			 * \param addend1 the first addend
			 * \param addend2 the second addend
			 * \return the sum
			 */
			static double add(double addend1, double addend2);
			/**
			 * \brief Returns the difference of two numbers.
			 * \param minuend the value from which to subtract
			 * \param subtrahend the value to subtract
			 * \return the difference
			 */
			static double subtract(double minuend, double subtrahend);
			/**
			 * \brief Returns the product of two numbers.
			 * \param multiplicand1 the first multiplicand
			 * \param multiplicand2 the second multiplicand
			 * \return the product
			 */
			static double multiply(double multiplicand1, double multiplicand2);
			/**
			 * \brief Returns the quotient of two numbers.
			 * \param dividend the value to divide
			 * \param divisor the value by which to divide
			 * \return the quotient
			 */
			static double divide(double dividend, double divisor);
		};
	}
}
