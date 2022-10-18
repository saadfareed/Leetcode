#!/bin/python3

class Fibo:
	"""
	either create a Fibo object or call the generate
	method directly:

	obj = Fibo()
	obj.generate(10) -> generates a series of 10 traily numbers

	or

	Fibo.generate(10)
	"""

	@staticmethod
	def generate(length: int=5):
		"""
		generates the fibonacci series
		"""

		series = [0, 1]

		if length > 2:
			for i in range(2, length):
				nextElement = series[i-1] + series[i-2]
				series.append(nextElement)

		return series


if __name__ == '__main__':
	print(Fibo.generate())
