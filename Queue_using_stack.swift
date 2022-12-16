class MyQueue {

    var enqueue = [Int]()
    var dequeue = [Int]()
    
    let queue = DispatchQueue(label: "queue", qos: .utility)

    func push(_ x: Int) {
        queue.sync {
            enqueue.append(x)
        }
    }
    
    func pop() -> Int {
        queue.sync {
            if dequeue.isEmpty {
                while !enqueue.isEmpty {
                    let removedValue = enqueue.removeLast()
                    dequeue.append(removedValue)
                }
            }

            return dequeue.removeLast()
        }
    }
    
    func peek() -> Int {
        queue.sync {
            return dequeue.last ?? enqueue.first!
        }
    }
    
    func empty() -> Bool {
        queue.sync {
            return enqueue.isEmpty && dequeue.isEmpty
        }
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * let obj = MyQueue()
 * obj.push(x)
 * let ret_2: Int = obj.pop()
 * let ret_3: Int = obj.peek()
 * let ret_4: Bool = obj.empty()
 */
