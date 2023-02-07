# frozen_string_literal: true

# Name: Shoaib Sabir
# Username: Shoaib019
# Approach: take hash and initialize it with zero run loop over string
#           increase count every time in hash key which is character
#           then use max_by built in method to find letter with max count
def find_max_frequency_character(str)
  hash = Hash.new(0)
  str.each_char do |ch|
    hash[ch] += 1
  end
  hash.max_by { |_, v| v }.first
end
