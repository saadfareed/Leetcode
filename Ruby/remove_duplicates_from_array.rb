# Name: Areeb Alam
# Username: AreebAlam99
# Approach: Just used uniq to remove duplicates and returned count :p.

def remove_duplicates(nums)
  nums.uniq!
  nums.count
end
