#CICLARE SU DUE LISTE CONTEMPORANEAMENTE
#saluti = ["buongiorno","ciao","ehi"]
#nomi = ["prof","Luca","tu"]

#for saluto,nome in zip(saluti,nomi):
    #print(f"{saluto} {nome}")

class Node:
    def __init__(self,value):
        self.value = value
        self.left = None #istanza nodo sx
        self.right = None #istanza nodo dx
        self.profondita = 0

    def printNode(self):
        print(self.value)
    def insertNode(self,value):
        if self.value: #se self.value è assegnata
            if value < self.value:
                if self.left is None:
                    self.left = Node(value)
                else:
                    self.left.insertNode(value)
            elif value > self.value:
                if self.right is None:
                    self.right = Node(value)
                else:
                    self.right.insertNode(value)
        else:self.value = value
    
    def printTree(self):
        if self.left:
            self.left.printTree()
        print(self.value)
        if self.right:
            self.right.printTree()

    def calculateDepth(self):
        if self.left:
            return self.left.calculateDepth()+1
        elif self.right:
            return self.right.calculateDepth()+1
        else: return 0
    
    def findNode(self,value):
        tro = False
        if value == self.value:
            tro = True
        if self.left:
            if self.left.findNode(value): 
                tro = True
        if self.right:
            if self.right.findNode(value): 
                tro = True
        return tro
       
    



def main():
    albero = Node(60)
    albero.insertNode(70)
    albero.insertNode(50)
    albero.insertNode(36)
    albero.insertNode(23)
    albero.insertNode(34)
    albero.insertNode(55)
    albero.printTree()

    albero.calculateDepth()
    albero.findNode(55)
    


if __name__=="__main__":
    main()