class Foo(object):
    def __init__(self):
        self.lock1 = threading.Lock()
        self.lock2 = threading.Lock()
        self.lock3 = threading.Lock()
        pass


    def first(self, printFirst):
        """
        :type printFirst: method
        :rtype: void
        """
        
        # printFirst() outputs "first". Do not change or remove this line.
        self.lock1.acquire()
        printFirst()
        self.lock1.release()


    def second(self, printSecond):
        """
        :type printSecond: method
        :rtype: void
        """
        
        # printSecond() outputs "second". Do not change or remove this line.
        self.lock1.acquire()
        self.lock2.acquire()
        printSecond()
        self.lock1.release()
        self.lock2.release()
            
            
    def third(self, printThird):
        """
        :type printThird: method
        :rtype: void
        """
        
        # printThird() outputs "third". Do not change or remove this line.
        self.lock1.acquire()
        self.lock2.acquire()
        self.lock3.acquire()
        printThird()
        self.lock1.release()
        self.lock2.release()
        self.lock3.release()