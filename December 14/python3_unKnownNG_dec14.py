class Tree():
    def __init__(self, data):
        self.data = data
        self.right = None
        self.left = None

class distanceFromK:
    def distanceK(self, root, k, target):
        def destination(root, node):
            if (root == None): 
                return None

            if (root == target): 
                return root

            lc = destination(root.left,target)
            if len(lc) > 0:
                lc.append(root)
                return lc
            rc = destination(root.right, target)
            if len(rc) > 0:
                rc.append(root)
                return rc
            return []
        def path(root, k):
            if (root == None): 
                return None

            if (k == 0): 
                return root.val

            return path(root.left, k - 1) + path(root.right, k - 1) 

        path = destination(root, target)
        res = path(path[0], k)
        for i in range(1, len(path)):
            curr_node = path[i]
            prev_node = path[i - 1]
            if (i < k):
                if (prev_node == curr_node.left):
                    res += path(curr_node.right, k - i - 1)
                else:
                    res += path(curr_node.left, k - i - 1)
            elif (i == k):
                res.append(curr_node.val)
            else:
                break
        return res
    

