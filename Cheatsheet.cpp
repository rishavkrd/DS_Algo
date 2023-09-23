#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

class Arrays{
	
};

class Strings{
	vector<string> tokenization(string input){
        string input;
        vector<string> tokenlist;
        char* token = strtok((char*) input.c_str(), ",");
        while(token!=NULL){
            token = strtok(NULL, ",");
            tokenlist.push_back(token);
        }
    }
};
class SlidingWindow{
    // a. Structure: 
	// 		i. For all the elements
	// 			1) While (condition not satisfied) fix it
	// 			2) Approach the solution
};
		
class Sorting{
    // a. Merge Sort Structure:
	// 	b. if(s<=e)
	// 		i. Merge sort (0,mid)
	// 		ii. Merge sort (mid+1, e)
	// 	c. Merge (left half, right half)
};
class BinarySearch{
		// a. Lower_bound, Upper_bound usage
		// 	i. Structure:
		// 	ii. While(s<=e)
		// 		1) Pivot = (s+e)/2
		// 		2) Equal
		// 			a) Return/lower/upper
		// 		3) Pivot < target
        //             b) s = pivot + 1;
		// 		4) Pivot > target
        //             c) e = pivot - 1;

};

class Recursion{
    vector<string> subsets(string input){
        //Input: abc. Output: ["",a,b,c,ab,ac,bc,abc]
        // Output includes/excludes first letter, Input is substr(1)
        return vector<string>();
    }
    vector<string> permutaions(string input){
        //Input: abc. Output: [abc,acb,bac,bca,cab,cba]
        //Swap ith letter with all the letters after it. Recursively permute i+1th string
        //Note on backtracking: After swapping, swap back to original. (is not clear to me)
    }

};
class Node{
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class LinkedList{
    virtual Node* reverse(Node* head) = 0;
    virtual Node* kreverse(Node* head, int k) = 0;
    //Runner Technique (fast and slow pointers)
        //a. Detecting a cycle
        //b. Finding the middle element
        //c. Finding the kth element from the end
        //d. Finding the intersection point of two linked lists
        //e. Detecting the palindrome?
};

class StacksQueues{
    virtual vector<int> maxSubarray(vector<int> input, int k) = 0;
        //Input: [1,3,-1,-3,5,3,6,7], k = 3. Output: [3,3,5,5,6,7]
};

class BinaryTrees{
    virtual void buildTree() = 0;
    virtual void printLevelOrder(Node* root) = 0;
    virtual void levelOrderBuildTree(Node* root) = 0;
    virtual int height(Node* root) = 0;
    virtual int diameter(Node* root) = 0;
    virtual bool isBalanced(Node* root) = 0;
    virtual bool isBST(Node* root) = 0;
    virtual int maxPathSum(Node* root) = 0;
    virtual void nodeAtK(Node* root, int k) = 0;
};

class BST{
    virtual Node* minHeightBST(vector<int> input) = 0;
    virtual void flatten(Node* root) = 0;
};

class PriorityQueue{
    virtual void initializePriorityQueue() = 0; //Min, Max heap
    virtual void findKNearestCabs() = 0;
    virtual void runningMedian() = 0;
    virtual void kWayMerge() = 0;

};

class Graph{
    virtual void buildGraph() = 0;
    virtual void bfs() = 0;
    virtual void dfs() = 0;
    // virtual void topologicalSort() = 0;
    virtual void dijkstra() = 0;
    virtual void cycleInUndirected() = 0;   
        // Cycle exists if except parent if a node repeats.
        //needs a visited array and a parent pointer.
    virtual void cycleInDirected() = 0;
        //Cycle exists if durring the exploration of a node, it is visited again.
        //Needs a visited and a dp array.
    virtual void shortestGridPath() = 0; 
        //Dijkstra's algorithm
    virtual void largestIsland() = 0;
        //2D DFS with sinking islands and choosing sum of all valid explored islands.
    virtual void largestSubsequence() = 0;
        //2D DFS with choosing max of all valid explored paths.
    
};

class DynamicProgramming{
    virtual void fibonacci() = 0;
    virtual void coinChange() = 0;
    virtual void longestIncreasingSubsequence() = 0;
    virtual void longestCommonSubsequence() = 0;
    virtual void longestCommonSubstring() = 0;
    virtual void editDistance() = 0;
    virtual void knapsack() = 0;
    virtual void subsetSum() = 0;
    virtual void rodCutting() = 0;
    virtual void matrixChainMultiplication() = 0;
    virtual void wordBreak() = 0;
    virtual void coinChange() = 0;
    virtual void minCostPath() = 0;
    virtual void minJumps() = 0;
    virtual void minPalindromicCuts() = 0;
    virtual void minPalindromicPartitions() = 0;
    virtual void minPalindromicSubsequence() = 0;
    virtual void maxPalindromicSubsequence() = 0;
    virtual void maxPalindromicSubstring() = 0;
    virtual void longestPalindromicSubstring() = 0;
};