# Dexter Kale - CS3035 - 05
class MyNode:
    def __init__(self, value, next_element):
        self.value = value
        self.next_element = next_element

    def __str__(self):
        return str(value)

    def get_value(self):
        return self.value

    def get_next_element(self):
        return self.next_element

class MyLinkedList:
    def __init__(self, head):
        self.head = head

    def print_list(self):
        tempNode = self.head
        print(tempNode.get_value())
        
        while tempNode.next_element != None:
            tempNode = tempNode.get_next_element()
            print(str(tempNode.get_value()))    
            
def outerFunction():
    
    hiddenNum = 5

    def innerFunctionPrint():

        print(hiddenNum)
    
    innerFunctionPrint()

outerFunction()
outerFunction()
outerFunction()

node5 = MyNode(5, None)
node4 = MyNode(4, node5)
node3 = MyNode(3, node4)
node2 = MyNode(2, node3)
node1 = MyNode(1, node2)

newList = MyLinkedList(node1)
newList.print_list()
