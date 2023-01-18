# frozen_string_literal: true

# Name: Areeb Alam
# Username: AreebAlam99
# Approach: Converted the number into an array of digits and checked if it was equal to its reverse or not.

def palindrome?(num)
  return false if num.negative?

  num.digits == num.digits.reverse
end
