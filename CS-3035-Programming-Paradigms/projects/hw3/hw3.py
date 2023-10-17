# Dexter Kale - CS - 3035 - Section 05
class Entry:
    def __init__(self, priority, value):
        self.priority = priority
        self.value = value

    def __str__(self):
        return "Priority: " + str (self.priority) + " value: " + self.value

    def set_priority(self, priority):
        self.priority = priority

    def get_priority(self):
        return self.priority

    def get_value(self):
        return self.value

class PQ(object):
    def __init__(self):
        self.queue = []

    def add(self, priority, value):
        self.queue.append(Entry(priority, value))

    def remove_min(self):
        max = 0
        for i in range(len(self.queue)):
            if self.queue[i].get_priority() > self.queue[max].get_priority():
                max = i
        
        min = max
        for i in range(len(self.queue)):
            if self.queue[i].get_priority() < self.queue[min].get_priority():
                min = i

        item = self.queue[min]
        del self.queue[min]
        return item

    def set_priority(self, value, priority):
        for i in range(len(self.queue)):
            if self.queue[i].get_value() == value:
                self.queue[i].set_priority(priority)

    def size(self):
        return len(self.queue)

pq = PQ() 
pq.add(2, "Eat") 
pq.add(0, "Study for CS 3035") 
pq.add(3, "Sleep") 
pq.add(1, "Maintain Personal Relationships") 
pq.add(4, "Practice Good Personal Hygiene") 
pq.set_priority("Practice Good Personal Hygiene", 2) 
pq.set_priority("Eat", 4)

while pq.size() > 0: 
    print(pq.remove_min()) 
