import time
from threading import Thread
from queue import Queue

def producer(testQ):
    for x in range(6):
        time.sleep(1)
        testQ.put(x)
        print(x)

def consumer(testQ):
    while True:
        try:
            item = testQ.get()
        except Empty:
            continue
        else:
            time.sleep(2)
            print(item)

testQ = Queue()

thread1 = Thread (target=producer, args=(testQ,))
thread2 = Thread (target=consumer, args=(testQ,))

thread1.start()
thread2.start()
thread1.join()
thread2.join()
