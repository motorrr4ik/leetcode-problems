class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        hashmap = {}

        for char in s:
            if char in hashmap:
                hashmap[char] +=1
            else:
                hashmap[char] = 1
        
        for char in hashmap:
            if hashmap[char] == 1:
                print(s.index(char))
                return s.index(char)

        return -1
        