# frozen_string_literal: true

# Name: Shoaib Sabir
# Username: Shoaib019
# Question: find missing number in array
def missing_game_number(arr)
  (1..10).each do |num|
    arr << num if arr.exclude?(num)
  end
  arr.sort
end
