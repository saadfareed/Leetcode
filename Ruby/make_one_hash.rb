def make_one_hash(arr)
  hash = {}
  arr.each do |ele|
    ele.each do |k, v|
      hash[k] = v
    end
  end
  hash
end

arr = [{ a: 3, b: 2, c: 3, d: 4 }, { e: 3, f: 2 }, { g: 2, h: 3 }]
puts make_one_hash(arr)
