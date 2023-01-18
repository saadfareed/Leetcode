hash = {"abcd": 4, "abc": 3, "abcdf": 5, "ab": 2 }
puts Hash[hash.sort_by {|k,_| k.size}]