# Name: Shoaib Sabir
# Username: Shoaib019
# Approach: loop runs n times for each element and checks for appropriate conditions
def fizz_buzz(n)
	arr = []
		(1..n).each do |num|
			if (num.modulo(3).zero? && num.modulo(5).zero?) then arr << "FizzBuzz"
			elsif num.modulo(3).zero? then arr << "Fizz"
			elsif num.modulo(5).zero? then arr << "Buzz"
			else arr << num.to_s
			end
		end
	arr
end