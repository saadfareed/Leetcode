from typing import List

class TrieNode:
    def __init__(self):
        self.children = {}
        self.word = None

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.word = word

class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        def dfs(node, i, j):
            char = board[i][j]
            curr_node = node.children.get(char)

            if not curr_node:
                return

            word = curr_node.word
            if word:
                result.append(word)
                curr_node.word = None 

            board[i][j] = '#' 

            for x, y in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]:
                if 0 <= x < m and 0 <= y < n and board[x][y] != '#':
                    dfs(curr_node, x, y)

            board[i][j] = char  

        trie = Trie()
        for word in words:
            trie.insert(word)

        m, n = len(board), len(board[0])
        result = []

        for i in range(m):
            for j in range(n):
                dfs(trie.root, i, j)

        return result

board1 = [["o","a","a","n"],["e","t","a","e"],["i","h","k","r"],["i","f","l","v"]]
words1 = ["oath","pea","eat","rain"]
solution = Solution()
output1 = solution.findWords(board1, words1)
print(output1) 

board2 = [["a","b"],["c","d"]]
words2 = ["abcb"]
output2 = solution.findWords(board2, words2)
print(output2) 
