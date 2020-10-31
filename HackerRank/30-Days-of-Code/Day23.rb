class Node
    attr_accessor :left,:right,:data
  def initialize data
      @left=@right=nil
      @data=data
    end
end
class Solution
    def insert (root,data)
        if root==nil
            return Node.new(data)
        else
            if data<=root.data
                cur=self.insert(root.left,data)
                root.left=cur
            else
                cur=self.insert(root.right,data)
                root.right=cur
            end
        end
        return root
    end

    def levelOrder(root)
        return -1 if root.nil?
        arr = Array.new
        queue = Queue.new
        queue.enq(root)
        result = nil

        while !queue.empty?
            value = queue.deq
            arr.push(value.data)
            queue.enq(value.left) if value.left
            queue.enq(value.right) if value.right
        end
        print arr.join(' ')
    end
end

myTree=Solution.new
root=nil
T=gets.to_i
for i in 1..T
    data=gets.to_i
    root=myTree.insert(root,data)
end
myTree.levelOrder(root)
