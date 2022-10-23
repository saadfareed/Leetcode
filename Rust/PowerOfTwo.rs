// Name: Muhammad Yousaf
// Username: yousafsabir
// Approach: performing bitwise AND on number and (number -1), which if number is power of two, always returns 0
fn main() {
    let num: i32 = 127;
    let result = power_of_two(num);
    if result {
        println!("{}", "Given Number is power of two")
    } else {
        println!("{}", "Given Number is not power of two")
    }
}

fn power_of_two(num: i32) -> bool {
    if (num & (num - 1)) != 0 {
        return false
    } else {
        return true
    }
}
