# frozen_string_literal: true

# Name: Shoaib Sabir
# Username: Shoaib019
# Question: do multiplication without * operator
def inventing_multiplication(num1, num2)
  res = 0
  num2.times.each do |_num|
    res += num1
  end
  res
end
