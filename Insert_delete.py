class RandomizedSet:

    def __init__(self):
        # Store the index of each val in self.arr.
        self.indices = {}
        # Store all vals.
        self.arr = []

    def insert(self, val: int) -> bool:
        # Return False if val is already present as requested.
        if val in self.indices: return False
        
        # Append val to the array.
        # Store its index in the hashmap
        self.arr.append(val)
        self.indices[val] = len(self.arr)-1
        return True
    
    def remove(self, val: int) -> bool:
        # Return False if val is not present as requested.
        if val not in self.indices: return False
        
        # Get the index of the val that needs to be removed.
        i = self.indices[val]
        
        # Update the index of arr[-1] in the indices.
        self.indices[self.arr[-1]] = i
        
        # Move the last element to the i th position.
        self.arr[i] = self.arr[-1]
        
        # remove the last element, and remove the index of val
        self.indices.pop(val)
        self.arr.pop()
        
        return True

    def getRandom(self) -> int:
        return random.choice(self.arr)
