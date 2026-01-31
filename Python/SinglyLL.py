"""
Single Linked List implementation in Python
"""


class Node:
    """
    Datatype for our Single Linked List
    """

    def __init__(self, info: int) -> None:
        """
        Initialize Node Object

        :param self: Reference of the node
        :param info: Information want to store in this node
        :type info: int
        """
        self.data: int = info
        self.next: Node | None = None


class SingleLinkedList:
    """
    Implementation of  Single Linked List
    """

    def __init__(self, head: Node | None = None) -> None:
        """
        Initialize single linked list object

        :param self: Reference of the linked list object
        :param head: Head node of this linked list
        :type head: Node | None
        """
        self.head: Node | None = head

    def insert_at_end(self, value: int) -> None:
        """
        Insert node at end of the linked list

        :param self: Reference of the linked list object
        :param value: Value of the node
        :type value: int
        """
        newNode = Node(value)

        # If linked list is empty
        if self.head is None:
            self.head = newNode
            return

        curr = self.head
        while curr.next is not None:
            curr = curr.next
        curr.next = newNode

    def insert_at_start(self, value: int) -> None:
        """
        Insert node at start of the linked list

        :param self: Reference of the linked list object
        :param value: Value of the node
        :type value: int
        """
        newNode = Node(value)

        # If linked list is empty
        if self.head is None:
            self.head = newNode
            return

        newNode.next = self.head
        self.head = newNode

    def insert_after(self, key: int, value: int) -> None:
        """
        Insert node after search key node in the linked list

        :param self: Reference of the linked list object
        :param key: Key value after which node will be inserted
        :param value: Value of the node
        :type key: int
        :type value: int
        """
        newNode = Node(value)

        # If linked list is empty
        if self.head is None:
            print("Linked List is empty!")
            return

        curr = self.head
        while curr.next is not None:
            if curr.data == key:
                newNode.next = curr.next
                curr.next = newNode
                return
            curr = curr.next
        print(f"Key {key} is not found in the linked list")

    def traverse(self) -> None:
        """
        Traverse the linked list

        :param self: Reference of the linked list object
        """
        # If linked list is empty
        if self.head is None:
            print("Linked list is empty!")
            return

        curr = self.head
        while curr is not None:
            print(curr.data, end="->")
            curr = curr.next
        print("End!")

    def search(self, key: int) -> None:
        """
        Search key in the linked list

        :param self: Reference of the linked list object
        :param key: Search key
        :type key: int
        """
        # If linked list is empty
        if self.head is None:
            print("Linked list is empty!")
            return

        curr = self.head
        pos: int = 1
        while curr is not None:
            if curr.data == key:
                print(f"Key {key} found at {pos} position")
                return
            curr = curr.next
            pos += 1
        print(f"Key {key} not present in the linked list!")


if __name__ == "__main__":
    """Test code for single linked list"""
    ll = SingleLinkedList()
    ll.insert_at_end(20)
    ll.insert_at_end(30)
    ll.insert_at_start(15)
    ll.traverse()

    ll.insert_at_start(10)
    ll.insert_after(20, 25)
    ll.traverse()

    ll.insert_at_start(5)
    ll.insert_at_end(35)
    ll.traverse()

    ll.search(30)
