class Node:
    def __init__(self, name, number):
        self.number = number
        self.left = None        #instanza nodo sinistro
        self.right = None       #instanza nodo destro
        self.name = name
    
    def printNode(self):
        print(self.name,self.number)

    def insertNode(self,name,number):
        if self.number:
            if number < self.number:
                if self.left is None:
                    self.left = Node(name,number)
                else:
                    self.left.insertNode(name,number)
            elif number > self.number:
                if self.right is None:
                    self.right = Node(name,number)
                else:
                    self.right.insertNode(name,number)
        else:
            self.number = number

    def printTree(self):
        if self.left:
            self.left.printTree()
        self.printNode()
        if self.right:
            self.right.printTree()

    def printPreOrdine(self):
        self.printNode()
        if self.left:
            self.left.printTree() 
        if self.right:
            self.right.printTree()
    
    def printPostOrdine(self):
        if self.left:
            self.left.printTree() 
        if self.right:
            self.right.printTree()
        self.printNode()

    def getDeep(self):
        cont, contLeft, contRight = 0, 0, 0

        if self.left:
            contLeft += self.left.getDeep() + 1
        if self.right:
            contRight += self.right.getDeep() + 1
        if contRight < contLeft:
            n = contLeft
        else:
            n = contRight
        
        return n

    def findNode(self, number):
        n = 0
        if self.number != number:
            if number < self.number:
                if self.left is None:
                    return None
                else:
                    n = self.left.findNode(number)
            elif number > self.number:
                if self.right is None:
                    return None
                else:
                    n = self.right.findNode(number)
        else:
            n = self.number

        return n

def main():

    file = open("rubrica.csv","r")
    righe = file.readlines()
    conta = 0
    for riga in righe[1:]:
        ls = riga.split(",")
        if conta == 0:
            rubrica = Node(ls[0],ls[1][:-1])
        else:
            rubrica.insertNode(ls[0],ls[1][:-1])
        conta+=1


    rubrica.printTree()


if __name__ == "__main__":
    main()