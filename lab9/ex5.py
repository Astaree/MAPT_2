class squareDict:
    def __init__(self, n):
        self.square = {i: i*i for i in range(1, n+1)}

    def printDict(self):
        for key, value in self.square.items():
            print(f"Key: {key}, Value: {value}, Type: {type(value)}")


if __name__ == "__main__":
    n = 5
    obj = squareDict(n)
    obj.printDict()
