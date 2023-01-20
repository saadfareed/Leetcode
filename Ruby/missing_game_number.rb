# frozen_string_literal: true

def missing_game_number(arr)
  (1..10).each do |num|
    arr << num if arr.exclude?(num)
  end
  arr.sort
end
