# A binary tree node
class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None

# Find the path from node to given root of the tree. Stores teh path in a list path[], returns true if path exists, otherwise false

def findPath(root, path, k):
    if root is None:
        return False
    # Store this node in path vector. The node will be removed if not in path from root to k
    path.append(root.key)

    # See if the k is same as root's key
    if root.key == k
        return True

    # Check if k is found in left or right sub-tree

    if (root.left != None and findPath(root.left, path, k)) or (root.right != None and findPath(root.right, path, k)):
        return True

    # If not present in subtree rooted with root, remove root from path and return False
    path.pop()
    return False

# Return LCA if node n1, n2 are present in the given binary tree; otherwise return -1
def findLCA(root, n1, n2):
    path1 = []
    path2 = []
    if (findPath(root,path1, n1.key) == False or findPath(root, path2, n2.key) == False):
        return -1

    # Compare two paths to find the first different value
    i = 0
    while (i < len(path1) and i < len(path2)):
        if path1[i] != path2[i]:
            break
        i += 1
    # Return the parent of the first difference
    return path[i-1]
