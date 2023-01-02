# Name: Areeb Alam
# Username: AreebAlam99
# Approach: Converted the number into an array of digits and checked if it was equal to its reverse or not.

def is_palindrome(x)
  return false if x < 0
  x.digits == x.digits.reverse ? true : false
end
