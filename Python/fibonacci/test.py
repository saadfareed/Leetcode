from unittest import TestCase, main
from algorithm import Fibo


class FiboTestCase(TestCase):

	def setUp(self):
		self.fibo = Fibo()

	def test_instance(self):
		self.assertIsInstance(self.fibo, Fibo)

	def test_10_series(self):
		series = self.fibo.generate(10)
		self.assertEqual(sum(series), 88)

	def test_static_method(self):
		static_series = Fibo.generate(15)
		instance_series = self.fibo.generate(15)

		self.assertEqual(static_series, instance_series)


if __name__ == '__main__': main()
