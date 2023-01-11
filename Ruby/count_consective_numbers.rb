# Name: Shoaib Sabir
# Username: Shoaib019
# Approach: make hash count as value and number as key then find max value return its key
def count_consective_numbers(arr)
  hash_one = {}
  arr.each do |val|
      hash_one[val] = arr.count(val)
  end
  hash_one.max_by {|k,v| v}.first
end
