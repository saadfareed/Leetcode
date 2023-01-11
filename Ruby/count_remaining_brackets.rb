# Name: Shoaib Sabir
# Username: Shoaib019
# Approach: deduct open from close bracket to get remaining brackets
def count_remaining_brackets(str)
	open_brackets = str.count('(')
    close_brackets = str.count(')')
    remaining  = open_brackets - close_brackets
    remaining.negative? ? remaining.abs : remaining
end