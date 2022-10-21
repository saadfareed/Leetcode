//Name: Muhammad Yousaf

//Username: yousafsabir

//Approach: first created a hashmap with key being the value and the value being the index of vector, then check if the difference is available in the vector and the returning two sum
fn main() {
    let nums = vec![1,2,3,4,5];
    let target: i32 = 5;
    let result = two_sum(nums, target)
    println!("{}", "Result");
    println!("{:?}", nums)
}

fn two_sum (nums: Vec<i32>, target:i32) -> Vec<i32> {
    let mut map: HashMap<i32, i32> = HashMap::new();

    for (i, num) in nums.iter().enumerate() {
        map.insert(*num, i as i32)
    }
    for (i, num) in nums.iter().enumerate() {
        let difference = target - num

        if let Some(&index) = map.get(&difference) {
            if index != i as i32 {
                return vec![i as i32, index]
            }
        }
    }
    vec![]
}