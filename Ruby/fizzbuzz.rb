# frozen_string_literal: true

# Name: Shoaib Sabir
# Username: Shoaib019
# Approach: loop runs number times for each element and checks for appropriate conditions
def fizz_buzz(number)
  arr = []
  (1..number).each do |num|
    arr << if num.modulo(3).zero? && num.modulo(5).zero? then 'FizzBuzz'
           elsif num.modulo(3).zero? then 'Fizz'
           elsif num.modulo(5).zero? then 'Buzz'
           else
             num.to_s
           end
  end
  arr
end
