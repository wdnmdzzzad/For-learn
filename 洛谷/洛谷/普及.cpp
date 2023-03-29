#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
//税收与补贴（教会我快读）

//#define MAX (100000+100)
//int x, r, m, n, p, d[MAX];//r代表成本价,x代表期望价格，d代表价位
//double Min = -1e9, Max = 1e9;//答案区间，开始无穷大
//inline void read(int& a)
//{
//    register char c = getchar(); bool f = 0;
//    for (a = 0; c < '0' || '9' < c; c = getchar())
//        if (c == '-') f = 1;//要写快读记得判负数，有-1
//    for (; '0' <= c && c <= '9'; c = getchar())
//        a = (a << 3) + (a << 1) + (c ^ 48);
//    if (f) a = -a;
//}
//int main()
//{
//    read(x); read(m); read(n); r = m;//记录成本价
//    while (m != -1 && n != -1)
//    {
//        d[m] = n;
//        for (int i = p + 1; i < m; i++)
//            d[i] = d[i - 1] + (n - d[p]) / (m - p);//此处递推、未知价格销量，(n-d[p])/(m-p)是公差
//        p = m;//记录上一次的m。
//        read(m); read(n);
//    }read(m);//此时m是最后输入的数
//    while (d[p] > m)
//        p++, d[p] = d[p - 1] - m;//继续递推，递推完成后p就是d>0的范围
//    for (register int i = r; i <= p; i++)//从成本到p的递推
//    {
//        double ans = (d[x] * (x - r) - d[i] * (i - r)) * 1.0 / (d[i] - d[x]);
//        //求(x+d[i])*(i-r)<=（x+d[x_])+(x_-r)的通解，x_是期望价格
//        double g = d[i] - d[x];//判断解的符号,g为正是小于，反之为大于。
//        if (g > 0) Max = min(Max, ans);//取所有"x<=..."中的最小值
//        else Min = max(Min, ans);//取所有"x>=..."中的最大值
//    }
//    //此时[Min,Max]就是答案的范围，取绝对值最小的输出。
//    if (Min > 0) printf("%d", (int)ceil(Min));//Max>Min>0，答案为Min上取整
//    else if (Max < 0) printf("%d", (int)floor(Max));//Min<Max<0，答案为Max下取整
//    else puts("0");//Min<0<Max，显然是0绝对值最小
//    //此处应有Min>Max，输出"NO SOLUTION"的情况，不过其实并没有这个点，所以就省略了。
//    return 0;
//}

//机器人走路

//int num1,num2, gene1[110], gene2[110], f[110][110];//状态定义
//int value[6][6] =
//{
//	{0,0,0,0,0,0},
//	{0,5,-1,-2,-1,-3},
//	{0,-1,5,-3,-2,-4},
//	{0,-2,-3,5,-2,-2},
//	{0,-1,-2,-2,5,-1},
//	{0,-3,-4,-2,-1,0}
//};
//int main()
//{
//	cin >> num1;
//	for (int i = 1; i <= num1; i++)
//	{
//		char t;
//		cin >> t;
//		switch (t)
//		{
//		case'A':
//			gene1[i] = 1; break;
//		case'C':
//			gene1[i] = 2; break;
//		case'G':
//			gene1[i] = 3; break;
//		case'T':
//			gene1[i] = 4; break;
//		}
//	}
//	cin >> num2; 
//	for (int i = 1; i < num2; i++)
//	{
//		char t;
//		cin >> t;
//		switch (t)
//		{
//		case'A':
//			gene2[i] = 1; break;
//		case'C':
//			gene2[i] = 2; break;
//		case'G':
//			gene2[i] = 3; break;
//		case'T':
//			gene2[i] = 4; break;
//		}
//	}//至此，输入结束
//
//	for(int i=1;i<=num1;i++)
//}
//int dp[100][100] = { 0 };
//
//int robot_ways_final(int N, int Start, int Aim, int K) //N为格子数，Start为起始位置，Aim为目标位置，K为步数
//{
//	if (N < 2 || K<1 || Aim<1 || Aim>N || Start>N || Start < 1)
//	{
//		return 0;
//	}
//	dp[Aim][0] = 1;
//	for (int rest = 1; rest < K; rest++)
//	{
//		dp[1][rest] = dp[2][rest - 1];
//		for (int Cur = 2; Cur < N; Cur++)
//		{
//			dp[Cur][rest] = dp[Cur - 1][rest - 1] + dp[Cur + 1][rest - 1];
//		}
//		dp[N][rest] = dp[N - 1][rest - 1];
//	}
//	return dp[Start][K];
//}
//
//int main()
//{
//	int ways1 = robot_ways_final(7, 2, 5, 6);
//	int ways2 = robot_ways_final(7, 2, 5, 4);
//	int ways3 = robot_ways_final(7, 2, 5, 5);
//	cout << ways1 << " " << ways2 << " " << ways3 << endl;
//	return 0;
//}

//数字转字符串方法

//int dp[100] = { 0 };
//int toCharArray_ways(string s)
//{
//	if (s.length() == 0)
//	{
//		return 0;
//	}
//	int N = s.length();
//	dp[N] = 1;
//	for (int i = N - 1; i >= 0; i--)
//	{
//		if (s[i] != '0')
//		{
//			int ways = dp[i + 1];
//			if (i + 1 < s.length() && (s[i] - '0') * 10 + s[i + 1] - '0' < 27)
//			{
//				ways += dp[i + 2];
//			}
//			dp[i] = ways;
//		}
//	}
//	return dp[0];
//}
//
//int main()
//{
//	string s = "7210231231232031203123";
//	int convert_ways = toCharArray_ways(s);
//	cout << convert_ways;
//	return 0;
//}

//高精度加法

//int main(){
//	char s1[505], s2[505];
//	scanf("%s%s", &s1, &s2);
//	int la = strlen(s1),lb = strlen(s2),lc = la > lb ? la : lb;
//	int a[505] = { 0 }, b[505] = { 0 }, c[505] = { 0 };
//	for (int i = 0; i < la; i++){
//		a[la - i] = s1[i] - '0';
//	}
//	for (int i = 0; i < lb; i++){
//		b[lb - i] = s2[i] - '0';
//	}
//	for (int i = 1; i <= lc; i++){
//		c[i] += a[i] + b[i];
//		c[i + 1] = c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//	if (c[lc+1] == 0 && lc > 0)lc--;
//	for (int i = lc; i > 0; i--){
//		cout << c[i];
//	}
//	return 0;
//}


//高精度减法

//char s1[10090], s2[10090], s3[10090];
//int a[10090], b[10090], c[10090];
//int flag = 0;
//bool cmp(char s1[], char s2[]){
//	int u = strlen(s1), v = strlen(s2);
//	if (u != v)return u > v;
//	for (int i = 0; i < u; i++){
//		if (s1[i] != s2[i])return s1[i] > s2[i];
//	}
//	return true;
//}
//int main(){
//	int la, lb, lc;
//	scanf("%s%s", &s1, &s2);
//	if (!cmp(s1, s2)){
//		flag=1;
//		strcpy(s3, s1);
//		strcpy(s1, s2);
//		strcpy(s2, s3);
//	}
//	la = strlen(s1);
//	lb = strlen(s2);
//	for (int i = 0; i < la; i++)
//		a[la - i] = s1[i] - '0';
//	for (int i = 0; i < lb; i++)
//		b[lb - i] = s2[i] - '0';
//	lc = max(la, lb);
//	for (int i = 1; i < lc; i++){
//		if (a[i] < b[i]){
//			a[i + 1]--;
//			a[i] += 10;
//		}
//		c[i] = a[i] - b[i];
//	}
//	while (c[lc] == 0 && lc > 0)lc--;
//	if (flag == 1)cout << "-";
//	for (int i = lc; i > 0; i--)
//		cout << c[i];
//	return 0;
//}

//class Info {
//public:
//	int height;
//	int nodes;
//	Info(int h, int n) {
//		height = h;
//		nodes = n;
//	}
//};
//template<class T>
//bool isF(BinaryTreeNode<T>) {
//	if (head == NULL) {
//		return true;
//	}
//	Info data = f(head);
//	return data.nodes == (1 << data.height - 1);
//}
//template<class T>
//Info f(BinaryTreeNode<T> x) {
//	if (x == NULL) {
//		return Info(0, 0);
//	}
//	Info leftData = f(x.left);
//	Info rightData = f(x.right);
//	int height = max(leftData.height, rightData.height) + 1;
//	int nodes = leftData.nodes + rightData.nodes + 1;
//	return Info(height, nodes);
//}


//二叉树的ADT实现

//二叉树实现
template<class T> class BinaryTree;
template<class T>//二叉树结点ADT
class BinaryTreeNode {
	friend class BinaryTree<T>;//声明二叉树类为友元类
public:
	T value;//二叉树结点数据域
	BinaryTreeNode<T>* left;//指向左子树的指针
	BinaryTreeNode<T>* right;//指向右子树的指针
	BinaryTreeNode<T>* parent;//指向父结点的指针
	BinaryTreeNode(const T& data = T())
		: left(nullptr)
		, right(nullptr)
		, parent(nullptr)
		, value(data)
	{}
	//BinaryTreeNode();//缺省构造函数
	//BinaryTreeNode(const T& ele);//给定数据的构造
	//BinaryTreeNode(const T& ele, BinaryTreeNode<T>* l, BinaryTreeNode<T>* r);//子树构造结点
	//T value()const;//返回当前结点数据
	//BinaryTreeNode<T>* leftchild()const;//返回左子树
	//BinaryTreeNode<T>* rightchild()const;//返回右子树
	//void setLeftchild(BinaryTreeNode<T>*);//设置左子树
	//void setRightchild(BinaryTreeNode<T>*);//设置右子树
	//void setValue(const T& val);//设置数据域
	//bool isLeaf()const;//判断是否为叶结点
	BinaryTreeNode<T>& operator=(const BinaryTreeNode<T>& Node);//重载赋值操作符
};

template<class T>//二叉树ADT
class BinaryTree {
	typedef BinaryTreeNode<T> Node;
public:
	BinaryTree() :root(nullptr) {}//构造函数
	~BinaryTree() { dele(); }//析构函数
	Node* Root() { return root; };//返回根结点
	BinaryTreeNode<T>* Parent(BinaryTreeNode<T>* root, BinaryTreeNode<T>* current)
	{
		BinaryTreeNode<T>* tmp;
		if (root == NULL)return(NULL);
		if (current == root->left || current == root->right)return root;//如果孩子是current则返回parent
		if (Parent(root->left, current) != NULL)return Parent(root->left, current);
		if (Parent(root->right, current) != NULL)return Parent(root->right, current);
		return NULL;
	}
	BinaryTreeNode<T>* Parent(BinaryTreeNode<T>* current)
	{
		using std::stack;//使用STL中的栈
		stack <BinaryTreeNode<T>*> aStack;
		BinaryTreeNode<T>* pointer = root;
		aStack.push(NULL);//栈底监视哨
		while (pointer)//或者!aStack.empty()
		{
			if (current == pointer->right || current == pointer->left)//如果pointer的孩子是current则返回parent
				return pointer;
			if (pointer->right != NULL)
				aStack.push(pointer->right);//非空右孩子入栈
			if (pointer->left != NULL)
				pointer = pointer->left;//左路下降
			else {//左子树访问完毕，转向访问右子树
				pointer = aStack.top();
				aStack.pop();//栈顶元素退栈
			}
		}
	}
	/*BinaryTreeNode<T>* LeftSibling(BinaryTreeNode<T>* current);//左兄
	BinaryTreeNode<T>* RightSibling(BinaryTreeNode<T>* current);//右兄
	void CreateTree(const T& info, BinaryTree<T>& leftTree, BinaryTree<T>& rightTree);//构造新树*/

	bool isEmpty()const;//判定二叉树是否为空树
	bool isBalanced(BinaryTreeNode<T> head) {//是否是平衡二叉树
		return process1(head).isBalanced;
		//return process2(head).isBalanced;
	}
	bool isCBT(BinaryTreeNode<T> head) {//是否为完全二叉树
		if (head == NULL) {
			return true;
		}
		using std::list;
		list<BinaryTreeNode<T>>test_list = new list<T>();
		//是否遇到过左右两个孩子不双全的结点
		bool leaf = false;
		Node l = NULL;
		Node r = NULL;
		test_list.push_back(head);
		while (!test_list.empty()) {
			head = test_list.pop_front();
			l = head.left;
			r = head.right;
			if ((leaf && (l != NULL || r != NULL)) || (l == NULL && r != NULL)) {
				//如果遇到了不双全的结点后，又发现当前结点不是叶结点
				return false;
			}
			if (l != NULL) {
				test_list.push_back(l);
			}
			if (r != NULL) {
				test_list.push_back(r);
			}
			if (l == NULL || r == NULL) {
				leaf = true;
			}
		}
		return true;
	}
	bool checkBST(BinaryTreeNode<T> head) {//是否为二叉搜索树
		int preValue = INT_MIN;
		if (head == NULL) {
			return true;
		}
		bool isLeftBst = checkBST(head.left);
		if (!isLeftBst) {
			return false;
		}
		if (head.value <= preValue) {
			return false;
		}
		else {
			preValue = head.value;
		}
		return checkBST(head.right);
	}
	void PreOrder(BinaryTreeNode<T>* root);//前序遍历二叉树或其子树
	void PostOrder(BinaryTreeNode<T>* root);//后序遍历二叉树或其子树
	void LevelOrder()//层序遍历
	{
		using std::queue;//使用STL的队列
		queue<BinaryTreeNode<T>*>aQueue;
		BinaryTreeNode<T>* pointer = root;//保存输入参数
		if (pointer)
			aQueue.push(pointer);//根结点入队列
		while (!aQueue.empty())
		{//队列非空
			pointer = aQueue.front();//取队列首结点
			aQueue.pop();//当前结点出队列
			Visit(pointer->value());//访问当前结点
			if (pointer->leftchild())
				aQueue.push(pointer->leftchild());//左子树进队列
			if (pointer->rightchild())
				aQueue.push(pointer->rightchild());//右子树进队列
		}
	}
	void DepthOrder(BinaryTreeNode<T>* root)//深度优先遍历
	{
		if (root != NULL) {
			//Visit(root);前序
			DepthOrder(root->leftchild());//递归访问左子树
			//Visit(root);中序
			DepthOrder(root->rightchild());//递归访问右子树
			//Visit(root);后序
		}
	}
	void PreOrderWithoutRecusion() {//前序遍历无递归
		using std::stack;//使用STL中的stack
		stack<BinaryTreeNode<T>*>aStack;
		BinaryTreeNode<T>* pointer = root;
		aStack.push(NULL);//栈底监视哨
		while (pointer)//或者！aStack.empty()
		{
			Visit(pointer->value);//访问当前结点
			if (pointer->right != NULL)//右孩子入栈
				aStack.push(pointer->right);
			if (pointer->left != NULL)
				pointer = pointer->left;//左路下降
			else {//左子树访问完毕，转向访问右子树
				pointer = aStack.top();
				aStack.pop();//栈顶元素退栈
			}
		}
	}
	void InOrderWithoutRecusion(BinaryTreeNode<T>* root) {//中序遍历无递归
		using std::stack;//使用STL中的stack
		stack < BinaryTreeNode<T>*>aStack;
		BinaryTreeNode<T>* pointer = root;
		while (!aStack.empty() || pointer)
		{
			if (pointer)
			{
				//Visit(pointer->value());//前序访问点
				aStack.push(pointer);//当前结点地址入栈
				//当前链接结构指向左孩子
				pointer = pointer->left;
			}//end if
			else {//左子树访问完毕，转向访问右子树
				pointer = aStack.top();
				aStack.pop();//栈顶元素退栈
				cout << pointer->value << " ";//访问当前结点
				//当前链接结构指向右孩子
				pointer = pointer->right;
			}//end else
		}//end else
	}
	Node lowestAncestor(Node head, Node o1, Node o2) {
		if (head == NULL || head == o1 || head == o2) {//base case
			return head;
		}
		Node left = lowestAncestor(head.left, o1, o2);
		Node right = lowestAncestor(head.right, o1, o2);
		if (left != NULL && right != NULL) {
			return head;
		}
		return left != NULL ? left : right;
	}
	Node getSuccessorNode(Node node) {//寻找后继结点
		if (node == NULL) {
			return node;
		}
		if (node.right != NULL) {
			return LeftMost(node.right);
		}
		else {//无右子树
			Node parent = node.parent;
			while (parent != NULL && parent.left != node) {//当前结点是其父结点右孩子
				node = parent;
				parent = node.parent;
			}
			return parent;
		}
	}
	class ReturnType {
	public:
		ReturnType(bool isB, int hei) {
			isBalanced = isB;
			height = hei;
		}

	private:
		bool isBalanced;
		int height;
	};
	class ReturnData {
	public:
		bool isBST;
		int my_min;
		int my_max;
		ReturnData(bool is, int mi, int ma) {
			isBST = is;
			my_min = mi;
			my_max = ma;
		}
	};
	ReturnType process1(BinaryTreeNode<T> x) {
		if (x == NULL) {
			return ReturnType(true, 0);
		}
		ReturnType leftData = process(x->left);
		ReturnType rightData = process(x->right);
		int height = max(leftData.height, rightData.height) + 1;
		bool isBalanced = leftData.isBalanced && rightData.isBalanced && abs(leftData.height - rightData.height) < 2;
		return ReturnType(isBalanced, height);
	}
	ReturnData process2(BinaryTreeNode<T> x) {
		if (x == NULL) {
			return;
		}
		ReturnData leftData = process(x.left);
		ReturnData rightData = process(x.right);
		bool isBST;
		int my_min, my_max;

		int my_min = x.value;
		int my_max = x.value;
		if (leftData != NULL) {
			my_min = min(my_min, leftData.my_min);
			my_max = max(my_max, leftData.my_max);
		}
		if (rightData != NULL) {
			my_min = min(my_min, rightData.my_min);
			my_max = max(my_max, rightData.my_max);
		}
		bool isBST = true;
		if (leftData != NULL && (!leftData.isBST || leftData.my_max >= x.value)) {
			isBST = false;
		}
		if (rightData != NULL && (!rightData.isBST || x.value >= rightData.my_min)) {
			isBST = false;
		}
		return ReturnData(isBST, min, max);
	}
	enum Tags { Left, Right };
	class StackElement {//栈元素的定义
	public:
		//定义枚举类型标志位
		BinaryTreeNode<T>* pointer;//指向二叉树结点的指针
		Tags tag;//标志位
	};
	void PostOrderWithoutRecursion() {//后序遍历无递归
		using std::stack;//使用STL的栈
		StackElement element;
		stack<StackElement> aStack;
		BinaryTreeNode<T>* pointer;
		pointer = root;
		while (!aStack.empty() || pointer)
		{
			while (pointer != NULL)//沿非空指针压栈，并左路下降
			{
				element.pointer = pointer;
				element.tag = Left;
				aStack.push(element);//把标志位为Left的结点压入栈
				pointer = pointer->left;
			}
			element = aStack.top();//获得栈顶元素，并退栈
			aStack.pop();
			pointer = element.pointer;
			if (element.tag == Left)//如果从左子树回来
			{
				element.tag = Right;//设置标志位为Right
				aStack.push(element);
				pointer = pointer->right;
			}
			else {//如果从右子树回来
				Visit(pointer->value);//访问当前结点
				pointer = NULL;//设置point指针为空，以继续弹栈
			}
		}
	}
	void Visit(BinaryTreeNode<T> p) {//访问函数，打印版
		cout << p.value << " ";
	}
	bool Delete(const T& data) {//删除
		Node* pCur = root;
		Node* pParent = nullptr;
		while (pCur) {
			if (data == pCur->value) {
				break;
			}
			else if (data < pCur->value) {
				pParent = pCur;
				pCur = pCur->left;
			}
			else {
				pParent = pCur;
				pCur = pCur->right;
			}
		}
		if (!pCur)//没找到
			return false;
		if (pCur->left && pCur->right) {//左右孩子都有
			//在pCur右子树中找最小节点，和pCur交换值，然后删除
			Node* R_Min = pCur->right;
			Node* MParent = pCur;
			while (R_Min->left) {
				MParent = R_Min;
				R_Min = R_Min->left;
			}
			pCur->value = R_Min->value;
			if (MParent->left == R_Min)
				MParent->left = nullptr;
			else
				MParent->right = nullptr;
			delete R_Min;
		}
		else if (pCur->left) {//只有左子树
			if (!pParent) {//删除节点为根节点
				root = pCur->left;
				delete pCur;
			}
			else
			{
				if (pCur == pParent->left)
					pParent->left = pCur->left;
				else
					pParent->right = pCur->left;
				delete pCur;
			}
		}
		else {//只有右子树或者空树
			if (!pParent) {//删除节点为根节点
				root = pCur->right;
				delete pCur;
			}
			else {
				if (pCur == pParent->left)
					pParent->left = pCur->right;
				else
					pParent->right = pCur->right;
				delete pCur;
			}
		}
		return true;
	}
	bool Insert(const T& data) {//插入
		if (nullptr == root) {
			root = new Node(data);
			return true;
		}
		Node* Cur = root;
		Node* Parent = nullptr;
		while (Cur) {
			Parent = Cur;
			if (data < Cur->value)
				Cur = Cur->left;
			else if (data > Cur->value)
				Cur = Cur->right;
			else
				return false;
		}
		if (data < Parent->value) {
			Parent->left = new Node(data);
		}
		else
			Parent->right = new Node(data);
		return true;
	}
	Node* Find(const T& data) {//寻找
		Node* ptr = root;
		while (ptr) {
			if (data == ptr->value)
				return ptr;
			else if (data < ptr->value)
				ptr = ptr->left;
			else
				ptr = ptr->right;
		}
		return nullptr;
	}
	Node* LeftMost(BinaryTreeNode<T>* current) {//寻找最底层左树
		if (!root)
			return nullptr;
		Node* ptr = root;
		while (ptr->left)
			ptr = ptr->left;
		return ptr;
	}
	Node* RightMost(BinaryTreeNode<T>* current) {//寻找最底层右树
		if (!root)
			return nullptr;
		Node* ptr = root;
		while (ptr->right)
			ptr = ptr->right;
		return ptr;
	}
	void InOrder(BinaryTreeNode<T>* root) {//中序遍历递归
		stack<Node*> sa;
		Node* ptr = root;
		while (!sa.empty() || ptr) {
			while (ptr) {
				sa.push(ptr);
				ptr = ptr->left;
			}
			cout << sa.top()->value << " ";
			ptr = sa.top()->right;
			sa.pop();
		}
		cout << endl;
	}
	string serialByPre(Node* head) {
		if (head == NULL) {
			return "#_";
		}
		string res = to_string(head->value) + " #_";
		res += serialByPre(head->left);
		res += serialByPre(head->right);
		return res;
	}
private:
	Node* root;
	void dele() {
		stack<Node*> sa;
		Node* ptr = root;
		while (!sa.empty() || ptr) {
			while (ptr) {
				sa.push(ptr);
				ptr = ptr->left;
			}
			ptr = sa.top()->right;
			delete sa.top();
			sa.pop();
		}
	}
};

//测试二叉树功能

void test() {
	int arr[] = { 5,3,4,1,7,8,2,6,0,9 };
	BinaryTree<int> tree;
	for (auto e : arr) {
		tree.Insert(e);
	}
	tree.InOrderWithoutRecusion(tree.Root());
	cout << endl;
	tree.PostOrderWithoutRecursion();
	cout << endl;
	tree.PreOrderWithoutRecusion();
	cout << endl;
	cout << tree.serialByPre(tree.Root()) << endl;
	tree.Delete(5);
	cout << endl;
	tree.InOrder(tree.Root());
	cout << tree.Find(6)->value << endl;
	cout << tree.LeftMost(tree.Root())->value << endl;
	cout << tree.RightMost(tree.Root())->value << endl;
}

int main() {
	void test();
	return 0;
}

//二叉搜索树实现

//#ifndef _BINARY_SEARCH_TREE_HPP_
//#define _BINARY_SEARCH_TREE_HPP_
//
//#include <iomanip>
//#include <iostream>
//using namespace std;
//
//template <class T>
//class BSTNode {
//public:
//	T key;            // 关键字(键值)
//	BSTNode* left;    // 左孩子
//	BSTNode* right;    // 右孩子
//	BSTNode* parent;// 父结点
//	BSTNode(T value, BSTNode* p, BSTNode* l, BSTNode* r) :key(value), parent(), left(l), right(r) {}
//};
//
//template <class T>
//class BSTree {
//private:
//	BSTNode<T>* mRoot;    // 根结点
//
//public:
//	BSTree();
//	~BSTree();
//
//	// 前序遍历"二叉树"
//	void preOrder();
//	// 中序遍历"二叉树"
//	void inOrder();
//	// 后序遍历"二叉树"
//	void postOrder();
//
//	// (递归实现)查找"二叉树"中键值为key的节点
//	BSTNode<T>* search(T key);
//	// (非递归实现)查找"二叉树"中键值为key的节点
//	BSTNode<T>* iterativeSearch(T key);
//
//	// 查找最小结点：返回最小结点的键值。
//	T minimum();
//	// 查找最大结点：返回最大结点的键值。
//	T maximum();
//
//	// 找结点(x)的后继结点。即，查找"二叉树中数据值大于该结点"的"最小结点"。
//	BSTNode<T>* successor(BSTNode<T>* x);
//	// 找结点(x)的前驱结点。即，查找"二叉树中数据值小于该结点"的"最大结点"。
//	BSTNode<T>* predecessor(BSTNode<T>* x);
//
//	// 将结点(key为节点键值)插入到二叉树中
//	void insert(T key);
//
//	// 删除结点(key为节点键值)
//	void remove(T key);
//
//	// 销毁二叉树
//	void destroy();
//
//	// 打印二叉树
//	void print();
//private:
//	// 前序遍历"二叉树"
//	void preOrder(BSTNode<T>* tree) const;
//	// 中序遍历"二叉树"
//	void inOrder(BSTNode<T>* tree) const;
//	// 后序遍历"二叉树"
//	void postOrder(BSTNode<T>* tree) const;
//
//	// (递归实现)查找"二叉树x"中键值为key的节点
//	BSTNode<T>* search(BSTNode<T>* x, T key) const;
//	// (非递归实现)查找"二叉树x"中键值为key的节点
//	BSTNode<T>* iterativeSearch(BSTNode<T>* x, T key) const;
//
//	// 查找最小结点：返回tree为根结点的二叉树的最小结点。
//	BSTNode<T>* minimum(BSTNode<T>* tree);
//	// 查找最大结点：返回tree为根结点的二叉树的最大结点。
//	BSTNode<T>* maximum(BSTNode<T>* tree);
//
//	// 将结点(z)插入到二叉树(tree)中
//	void insert(BSTNode<T>*& tree, BSTNode<T>* z);
//
//	// 删除二叉树(tree)中的结点(z)，并返回被删除的结点
//	BSTNode<T>* remove(BSTNode<T>*& tree, BSTNode<T>* z);
//
//	// 销毁二叉树
//	void destroy(BSTNode<T>*& tree);
//
//	// 打印二叉树
//	void print(BSTNode<T>* tree, T key, int direction);
//};
//
///*
// * 构造函数
// */
//template <class T>
//BSTree<T>::BSTree() :mRoot(NULL)
//{
//}
//
///*
// * 析构函数
// */
//template <class T>
//BSTree<T>::~BSTree()
//{
//	destroy();
//}
//
///*
// * 前序遍历"二叉树"
// */
//template <class T>
//void BSTree<T>::preOrder(BSTNode<T>* tree) const
//{
//	if (tree != NULL)
//	{
//		cout << tree->key << " ";
//		preOrder(tree->left);
//		preOrder(tree->right);
//	}
//}
//
//template <class T>
//void BSTree<T>::preOrder()
//{
//	preOrder(mRoot);
//}
//
///*
// * 中序遍历"二叉树"
// */
//template <class T>
//void BSTree<T>::inOrder(BSTNode<T>* tree) const
//{
//	if (tree != NULL)
//	{
//		inOrder(tree->left);
//		cout << tree->key << " ";
//		inOrder(tree->right);
//	}
//}
//
//template <class T>
//void BSTree<T>::inOrder()
//{
//	inOrder(mRoot);
//}
//
///*
// * 后序遍历"二叉树"
// */
//template <class T>
//void BSTree<T>::postOrder(BSTNode<T>* tree) const
//{
//	if (tree != NULL)
//	{
//		postOrder(tree->left);
//		postOrder(tree->right);
//		cout << tree->key << " ";
//	}
//}
//
//template <class T>
//void BSTree<T>::postOrder()
//{
//	postOrder(mRoot);
//}
//
///*
// * (递归实现)查找"二叉树x"中键值为key的节点
// */
//template <class T>
//BSTNode<T>* BSTree<T>::search(BSTNode<T>* x, T key) const
//{
//	if (x == NULL || x->key == key)
//		return x;
//
//	if (key < x->key)
//		return search(x->left, key);
//	else
//		return search(x->right, key);
//}
//
//template <class T>
//BSTNode<T>* BSTree<T>::search(T key)
//{
//	search(mRoot, key);
//}
//
///*
// * (非递归实现)查找"二叉树x"中键值为key的节点
// */
//template <class T>
//BSTNode<T>* BSTree<T>::iterativeSearch(BSTNode<T>* x, T key) const
//{
//	while ((x != NULL) && (x->key != key))
//	{
//		if (key < x->key)
//			x = x->left;
//		else
//			x = x->right;
//	}
//
//	return x;
//}
//
//template <class T>
//BSTNode<T>* BSTree<T>::iterativeSearch(T key)
//{
//	iterativeSearch(mRoot, key);
//}
//
///*
// * 查找最小结点：返回tree为根结点的二叉树的最小结点。
// */
//template <class T>
//BSTNode<T>* BSTree<T>::minimum(BSTNode<T>* tree)
//{
//	if (tree == NULL)
//		return NULL;
//
//	while (tree->left != NULL)
//		tree = tree->left;
//	return tree;
//}
//
//template <class T>
//T BSTree<T>::minimum()
//{
//	BSTNode<T>* p = minimum(mRoot);
//	if (p != NULL)
//		return p->key;
//
//	return (T)NULL;
//}
//
///*
// * 查找最大结点：返回tree为根结点的二叉树的最大结点。
// */
//template <class T>
//BSTNode<T>* BSTree<T>::maximum(BSTNode<T>* tree)
//{
//	if (tree == NULL)
//		return NULL;
//
//	while (tree->right != NULL)
//		tree = tree->right;
//	return tree;
//}
//
//template <class T>
//T BSTree<T>::maximum()
//{
//	BSTNode<T>* p = maximum(mRoot);
//	if (p != NULL)
//		return p->key;
//
//	return (T)NULL;
//}
//
///*
// * 找结点(x)的后继结点。即，查找"二叉树中数据值大于该结点"的"最小结点"。
// */
//template <class T>
//BSTNode<T>* BSTree<T>::successor(BSTNode<T>* x)
//{
//	// 如果x存在右孩子，则"x的后继结点"为 "以其右孩子为根的子树的最小结点"。
//	if (x->right != NULL)
//		return minimum(x->right);
//
//	// 如果x没有右孩子。则x有以下两种可能：
//	// (01) x是"一个左孩子"，则"x的后继结点"为 "它的父结点"。
//	// (02) x是"一个右孩子"，则查找"x的最低的父结点，并且该父结点要具有左孩子"，找到的这个"最低的父结点"就是"x的后继结点"。
//	BSTNode<T>* y = x->parent;
//	while ((y != NULL) && (x == y->right))
//	{
//		x = y;
//		y = y->parent;
//	}
//
//	return y;
//}
//
///*
// * 找结点(x)的前驱结点。即，查找"二叉树中数据值小于该结点"的"最大结点"。
// */
//template <class T>
//BSTNode<T>* BSTree<T>::predecessor(BSTNode<T>* x)
//{
//	// 如果x存在左孩子，则"x的前驱结点"为 "以其左孩子为根的子树的最大结点"。
//	if (x->left != NULL)
//		return maximum(x->left);
//
//	// 如果x没有左孩子。则x有以下两种可能：
//	// (01) x是"一个右孩子"，则"x的前驱结点"为 "它的父结点"。
//	// (01) x是"一个左孩子"，则查找"x的最低的父结点，并且该父结点要具有右孩子"，找到的这个"最低的父结点"就是"x的前驱结点"。
//	BSTNode<T>* y = x->parent;
//	while ((y != NULL) && (x == y->left))
//	{
//		x = y;
//		y = y->parent;
//	}
//
//	return y;
//}
//
///*
// * 将结点插入到二叉树中
// *
// * 参数说明：
// *     tree 二叉树的根结点
// *     z 插入的结点
// */
//template <class T>
//void BSTree<T>::insert(BSTNode<T>*& tree, BSTNode<T>* z)
//{
//	BSTNode<T>* y = NULL;
//	BSTNode<T>* x = tree;
//
//	// 查找z的插入位置
//	while (x != NULL)
//	{
//		y = x;
//		if (z->key < x->key)
//			x = x->left;
//		else
//			x = x->right;
//	}
//
//	z->parent = y;
//	if (y == NULL)
//		tree = z;
//	else if (z->key < y->key)
//		y->left = z;
//	else
//		y->right = z;
//}
//
///*
// * 将结点(key为节点键值)插入到二叉树中
// *
// * 参数说明：
// *     tree 二叉树的根结点
// *     key 插入结点的键值
// */
//template <class T>
//void BSTree<T>::insert(T key)
//{
//	BSTNode<T>* z = NULL;
//
//	// 如果新建结点失败，则返回。
//	if ((z = new BSTNode<T>(key, NULL, NULL, NULL)) == NULL)
//		return;
//
//	insert(mRoot, z);
//}
//
///*
// * 删除结点(z)，并返回被删除的结点
// *
// * 参数说明：
// *     tree 二叉树的根结点
// *     z 删除的结点
// */
//template <class T>
//BSTNode<T>* BSTree<T>::remove(BSTNode<T>*& tree, BSTNode<T>* z)
//{
//	BSTNode<T>* x = NULL;
//	BSTNode<T>* y = NULL;
//
//	if ((z->left == NULL) || (z->right == NULL))
//		y = z;
//	else
//		y = successor(z);
//
//	if (y->left != NULL)
//		x = y->left;
//	else
//		x = y->right;
//
//	if (x != NULL)
//		x->parent = y->parent;
//
//	if (y->parent == NULL)
//		tree = x;
//	else if (y == y->parent->left)
//		y->parent->left = x;
//	else
//		y->parent->right = x;
//
//	if (y != z)
//		z->key = y->key;
//
//	return y;
//}
//
///*
// * 删除结点(z)，并返回被删除的结点
// *
// * 参数说明：
// *     tree 二叉树的根结点
// *     z 删除的结点
// */
//template <class T>
//void BSTree<T>::remove(T key)
//{
//	BSTNode<T>* z, * node;
//
//	if ((z = search(mRoot, key)) != NULL)
//		if ((node = remove(mRoot, z)) != NULL)
//			delete node;
//}
//
///*
// * 销毁二叉树
// */
//template <class T>
//void BSTree<T>::destroy(BSTNode<T>*& tree)
//{
//	if (tree == NULL)
//		return;
//
//	if (tree->left != NULL)
//		return destroy(tree->left);
//	if (tree->right != NULL)
//		return destroy(tree->right);
//
//	delete tree;
//	tree = NULL;
//}
//
//template <class T>
//void BSTree<T>::destroy()
//{
//	destroy(mRoot);
//}
//
///*
// * 打印"二叉查找树"
// *
// * key        -- 节点的键值
// * direction  --  0，表示该节点是根节点;
// *               -1，表示该节点是它的父结点的左孩子;
// *                1，表示该节点是它的父结点的右孩子。
// */
//template <class T>
//void BSTree<T>::print(BSTNode<T>* tree, T key, int direction)
//{
//	if (tree != NULL)
//	{
//		if (direction == 0)    // tree是根节点
//			cout << setw(2) << tree->key << " is root" << endl;
//		else                // tree是分支节点
//			cout << setw(2) << tree->key << " is " << setw(2) << key << "'s " << setw(12) << (direction == 1 ? "right child" : "left child") << endl;
//
//		print(tree->left, tree->key, -1);
//		print(tree->right, tree->key, 1);
//	}
//}
//
//template <class T>
//void BSTree<T>::print()
//{
//	if (mRoot != NULL)
//		print(mRoot, mRoot->key, 0);
//}
//
//#endif


//选择排序

void swap(int arr[], int i, int j) {
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}

//void selectionSort(int arr[]) {
//	int length = sizeof(arr) / sizeof(arr[0]);
//	if (arr == NULL || length < 2)
//	{
//		return;
//	}
//	for (int i = 0; i < length - 1; i++)
//	{//1~N-1
//		int minIndex = i;
//		for (int j = i + 1; j < length; j++) {//i~N-1上找最小值下标
//			minIndex = arr[j] < arr[minIndex] ? j : minIndex;
//		}
//		swap(arr, i, minIndex);
//	}
//}
//
//void bubbleSort(int arr[]) {
//	int length = sizeof(arr) / sizeof(arr[0]);
//	if (arr == NULL || length < 2) {
//		return;
//	}
//	for (int i = length - 1; i > 0; i--) {//0~i
//		for (int j = 0; j < i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				swap(arr, j, j + 1);
//			}
//		}
//	}
//}
//
//void insertionSort(int arr[]) {
//	int length = sizeof(arr) / sizeof(arr[0]);
//	if (arr == NULL || length < 2) {
//		return;
//	}
//	//0~0有序
//	//0~i想有序
//	for (int i = 1; i < length; i++) {//0~i做到有序
//		for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
//			swap(arr, j, j + 1);
//		}
//	}
//}
//int process(int arr[],int L,int R) {//L初始值为0，R初始值为数组长度-1
//	if (L == R) {//arr[L...R]范围上只有一个数，直接返回，basecase
//		return arr[L];
//	}
//	int mid = L + ((R - L) >> 1);//中点
//	int leftMax = process(arr, L, mid);
//	int rightMax = process(arr, mid, R);
//	return max(leftMax, rightMax);
//}

//void merge(int arr[], int L, int M, int R) {
//	int* help = new int[R - L + 1];
//	int i = 0;
//	int p1 = L;
//	int p2 = M + 1;
//	while (p1 <= M && p2 <= R) {
//		help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
//	}
//	while (p1 <= M) {
//		help[i++] = arr[p1++];
//	}
//	while (p2 <= R) {
//		help[i++] = arr[p2++];
//	}
//	for (i = 0; i < (sizeof(help) / sizeof(help[0])); i++) {
//		arr[L + i] = help[i];
//	}
//}
//void process(int arr[], int L, int R) {//L初始值为0，R初始值为数组长度-1
//	if (L == R) {//arr[L...R]范围上只有一个数，直接返回，basecase
//		return;
//	}
//	int mid = L + ((R - L) >> 1);//中点
//	process(arr, L, mid);
//	process(arr, mid + 1, R);
//	merge(arr, L, mid, R);
//}
//void mergeSort(int arr[])
//{
//	int length = sizeof(arr) / sizeof(arr[0]);
//	if (arr == NULL || length < 2)return;
//	process(arr, 0, length - 1);
//}
//int merge(int arr[], int l, int m, int r) {
//	int* help = new int[r - l + 1];
//	int i = 0;
//	int p1 = l;
//	int p2 = m + 1;
//	int res = 0;
//	while (p1 <= m && p2 <= r) {
//		res += arr[p1] < arr[p2] ? (r - p2 + 1) * arr[p1] : 0;
//		help[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
//	}
//	while (p1 <= m) {
//		help[i++] = arr[p1++];
//	}
//	while (p2 <= r) {
//		help[i++] = arr[p2++];
//	}
//	for (i = 0; i < sizeof(help) / sizeof(help[0]); i++) {
//		arr[l + i] = help[i];
//	}
//	return res;
//}
//
//void process(int arr[], int l, int r) {
//	if (l == r) {
//		return;
//	}
//	int mid = l + ((r - 1) >> 1);
//	process(arr, l, mid);
//	process(arr, mid + 1, r);
//	merge(arr, l, mid, r);
//}
//
//void smallSum(int arr[]) {
//	int length = sizeof(arr) / sizeof(arr[0]);
//	if (arr == NULL || length < 2) {
//		return;
//	}
//	process(arr, 0, length - 1);
//}

////这是一个处理arr[l...r]的函数
////默认以arr[r]做划分，arr[r]->p <p =p >p
////返回等于区域（左边界，右边界），所以返回一个长度为2的数组res，res[0],res[1]
//int* partition(int arr[], int L, int R) {
//	int less = L - 1;//<区右边界
//	int more = R;//>区左边界
//	while (L < more) {//L表示当前数的位置 arr[R]->划分值
//		if (arr[L] < arr[R]) {//当前数<划分值
//			swap(arr, ++less, L++);
//		}
//		else if (arr[L] > arr[R]) {//当前数>划分值
//			swap(arr, --more, L);
//		}
//		else {
//			L++;
//		}
//	}
//	swap(arr, more, R);
//	int p[2] = { less + 1,more };
//	return p;
//}
//void quickSort(int arr[], int L, int R)
//{
//	if (L < R) {
//		int random = rand() % (R - L + 1) + L;
//		swap(arr, random, R);
//		//int p[] = { partition(arr, L, R)[0],partition(arr,L,R)[1] };
//		int* p = partition(arr, L, R);
//		quickSort(arr, L, p[0]-1);//<区
//		quickSort(arr, p[1]+1, R);//>区
//	}
//}
//

//int getDigit(int need_getditit, int d) {
//	for (int i = 0; i < d - 1; i++) {
//		need_getditit = need_getditit / 10;
//	}
//	need_getditit = need_getditit % 10;
//	return need_getditit;
//}
//
////某个数现在处在index位置,往上继续移动
//void heapInsert(int arr[], int index) {
//	while (arr[index] > arr[(index - 1) / 2]) {
//		swap(arr, index, (index - 1) / 2);
//		index = (index - 1) / 2;
//	}
//}
//
////某个数在index位置，能否往下移动
//void heapify(int arr[], int index, int heapSize) {
//	int left = index * 2 + 1;//左孩子的下标
//	while (left < heapSize) {//下方还有孩子时
//		//两个孩子中，谁更大，谁把下标给largest
//		int largest = (left + 1 < heapSize) && (arr[left + 1] > arr[left]) ? left + 1 : left;
//		//父和子之间,谁更大，谁把下标给largest
//		largest = arr[largest] > arr[index] ? largest : index;
//		if (largest == index) {
//			break;
//		}
//		swap(arr, largest, index);
//		index = largest;
//		left = index * 2 + 1;
//	}
//}
//void heapSort(int arr[], int length) {
//
//	if (arr == NULL || length < 2) {
//		return;
//	}
//	//for (int i = 0; i < length; i++)//O(N)
//	//{
//	//	heapInsert(arr, i);//O(logN)
//	//}
//	for (int i = length - 1; i >= 0; i--) {
//		heapify(arr, i, length);
//	}
//	int heapSize = length;
//	swap(arr, 0, --heapSize);
//	while (heapSize > 0) {//O(N)
//		heapify(arr, 0, heapSize);//O(logN)
//		swap(arr, 0, --heapSize);//O(1)
//	}
//}
//
////arr[begin..end]排序
//void radixSort2(int arr[], int L, int R, int digit) {
//	const int radix = 10;
//	int i = 0, j = 0;
//	//有多少个数准备多少个辅助空间
//	int* bucket = new int[R - L + 1];
//	for (int d = 1; d <= digit; d++) {//有多少位就进出几次
//		//10个空间
//		//count[i]当前位是(0~i)的数字有多少个
//		int count[10] = { 0 };//count[0..9]
//		for (i = L; i <= R; i++) {
//			j = getDigit(arr[i], d);
//			count[j]++;
//		}
//		for (i = 1; i < radix; i++) {
//			count[i] = count[i] + count[i - 1];
//		}
//		for (i = R; i >= L; i--) {
//			j = getDigit(arr[i], d);
//			bucket[count[j] - 1] = arr[i];
//			count[j]--;
//		}
//		for (i = L, j = 0; i <= R; i++, j++) {
//			arr[i] = bucket[j];
//		}
//	}
//}
//
////仅为非负数
//int maxbits(int arr[], int length) {
//	int MAX = INT_MAX;
//	for (int i = 0; i < length; i++)
//	{
//		MAX = max(MAX, arr[i]);
//	}
//	int res = 0;
//	while (MAX != 0) {
//		res++;
//		MAX /= 10;
//	}
//	return res;
//}
//void radixSort1(int arr[], int length) {
//	if (arr == NULL || length < 2) {
//		return;
//	}
//	radixSort2(arr, 0, length - 1, maxbits(arr, length));
//}

//链表算法

//class Node {
//public: int value;
//	  Node* next;
//	  bool operator!=(const Node& node)const {
//		  if (this->value != node.value)
//			  return true;
//		  else
//			  return false;
//	  }
//	  bool operator==(const Node& node)const {
//		  if (this->value == node.value)
//			  return true;
//		  else
//			  return false;
//	  }
//	  Node(int data) {
//		  this->value = data;
//	  }
//};
//Node listPartition(Node head, int pivot) {
//	Node sH = NULL;
//	Node sT = NULL;
//	Node eH = NULL;
//	Node eT = NULL;
//	Node mH = NULL;
//	Node mT = NULL;
//	Node next = NULL;
//	while (head != NULL)
//	{
//		next = *head.next;
//		head.next = NULL;
//	}
//	if (head.value < pivot) {
//		if (sH == NULL) {
//			sH = head;
//			sT = head;
//		}
//		else if (head.value == pivot) {
//			if (eH == NULL) {
//				eH = head;
//				eT = head;
//			}
//			else {
//				*eT.next = head;
//				eT = head;
//			}
//		}
//		else {
//			if (mH == NULL) {
//				mH = head;
//				mT = head;
//			}
//			else {
//				*mT.next = head;
//				mT = head;
//			}
//		}
//		head = next;
//	}
//	//small and equal reconnect
//	if (sT != NULL) {
//		*sT.next = eH;
//		eT = eT == NULL ? sT : eT;//下一步，谁去连大于区的头，谁就变成eT
//	}
//	if (eT != NULL) {//如果小于区域和等于区域，不是都没有
//		*eT.next = mH;
//	}
//	return sH != NULL ? sH : (eH != NULL ? eH : mH);
//}
//Node* getLoopNode(Node head) {
//	if (head == NULL || head.next == NULL || head.next->next == NULL) {
//		return NULL;
//	}
//	Node* n1 = head.next;//n1->slow
//	Node* n2 = head.next->next;//n2->fast
//	while (n1 != n2) {
//		if (n2->next == NULL || n2->next->next == NULL) {
//			return NULL;
//		}
//		n2 = n2->next->next;
//		n1 = n1->next;
//	}
//	*n2 = head;//n2->walk again from head
//	while (n1 != n2) {
//		n1 = n1->next;
//		n2 = n2->next;
//	}
//	return n1;
//}
//Node noLoop(Node head1, Node head2) {
//	if (head1 == NULL || head2 == NULL) {
//		return NULL;
//	}
//	Node cur1 = head1;
//	Node cur2 = head2;
//	int n = 0;
//	while (cur1.next != NULL) {
//		n++;
//		cur1 = *cur1.next;
//	}
//	while (cur2.next != NULL) {
//		n--;
//		cur2 = *cur2.next;
//	}
//	if (cur1 != cur2) {
//		return NULL;
//	}
//	//n:链表1长度减去链表2长度的值
//	cur1 = n > 0 ? head1 : head2;//谁长，谁的头变成cur1
//	cur2 = cur1 == head1 ? head2 : head1;//谁短，谁的头变成cur2
//	n = abs(n);
//	while (n != 0) {
//		cur1 = *cur1.next;
//		cur2 = *cur2.next;
//	}
//	return cur1;
//}
//Node bothLoop(Node head1, Node loop1, Node head2, Node loop2) {
//	Node cur1 = NULL;
//	Node cur2 = NULL;
//	if (loop1 == loop2) {
//		cur1 = head1;
//		cur2 = head2;
//		int n = 0;
//		while (cur1 != loop1) {
//			n++;
//			cur1 = *cur1.next;
//		}
//		while (cur2 != loop2) {
//			n--;
//			cur2 = *cur2.next;
//		}
//		cur1 = n > 0 ? head1 : head2;
//		cur2 = cur1 == head1 ? head2 : head1;
//		n = abs(n);
//		while (n != 0) {
//			n--;
//			cur1 = *cur1.next;
//		}
//		while (cur1 != cur2) {
//			cur1 = *cur1.next;
//			cur2 = *cur2.next;
//		}
//		return cur1;
//	}
//	else {
//		cur1 = *loop1.next;
//		while (cur1 != loop1) {
//			if (cur1 == loop2) {
//				return loop1;
//			}
//			cur1 = *cur1.next;
//		}
//		return NULL;
//	}
//}

//int main() {
//	int arr1[] = { 0,50,42,5,9,20,45,2,7 };
//	int length = sizeof(arr1) / sizeof(arr1[0]);
//	//heapSort(arr1,length);
//	radixSort1(arr1, length);
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//	return 0;
//}

//打印凹凸线

////递归过程，来到了某一结点
////i是结点的层数，n一共的层数，down==true 凹 down=false 凸
//void printfProcess(int i, int n, bool down) {
//	if (i > n) {
//		return;
//	}
//	printfProcess(i + 1, n, true);
//	string a_or_t = down ? "凹" : "凸";
//	cout << a_or_t;
//	printfProcess(i + 1, n, false);
//}
//
//void printfAllFolds(int n)
//{
//	printfProcess(1, n, true);
//}

//图

//class Node;
//class Edge{
//public:
//	int weight;
//	Node* from;
//	Node* to;
//	Edge();
//	Edge(int _weight, Node* _from, Node* _to){
//		weight = _weight;
//		from = _from;
//		to = _to;
//	}
//};
//class Node {
//public:
//	Node(int val) {
//		value = val;
//		in = 0;
//		out = 0;
//	}
//	int value;
//	int in; //入度,有多少个边指向此结点
//	int out;	//出度，有多少条边由此结点发散
//	list<Node*> nexts;  //此结点是from的情况下，邻居结点
//	list<Edge*> edges;	//从此结点出发，发散出边的集合
//};
//class Graph {
//public:
//	map<int, Node*> nodes;// 点序号和结点的映射集合
//	set<Edge*> edges;	//边的集合
//};
//Graph* CreateGraph(int matrix[][3], int n){	//n表示边数 即matrix.size()
//	Graph* graph = new Graph;
//	for (int i = 0; i != n; i++)
//	{
//		int weight = matrix[i][0];
//		int from = matrix[i][1];
//		int to = matrix[i][2];
//		if (graph->nodes.find(from) == graph->nodes.end())
//		{
//			graph->nodes[from] = new Node(from);
//		}
//
//		if (graph->nodes.find(to) == graph->nodes.end())
//		{
//			graph->nodes[to] = new Node(to);
//		}
//		Node* fromnode = graph->nodes[from];
//		Node* tonode = graph->nodes[to];
//		Edge* newedge = new Edge(weight, fromnode, tonode);
//		fromnode->nexts.push_back(tonode);
//		fromnode->out++;
//		fromnode->edges.push_back(newedge);
//		tonode->in++;
//		graph->edges.insert(newedge);
//
//	}
//	return graph;
//}
////宽度(广度)优先遍历
//void bfs(Node* node){
//	if (node == NULL){
//		return;
//	}
//	deque<Node*> deq;
//	set<Node*> set;
//	deq.push_back(node);
//	set.insert(node);
//	while (deq.size() != 0){
//		Node* cur = deq.front();	//保存deq队列首元
//		deq.pop_front();//出队列打印
//		cout << cur->value << " ";
//		for (Node* next : cur->nexts){
//			if (set.find(next) == set.end()){
//				deq.push_back(next);
//				set.insert(next);
//			}
//		}
//	}
//	cout << endl;
//}
////图的深度优先遍历
//void dfs(Node* node){
//	if (node == NULL){
//		return;
//	}
//	deque<Node*> deq;
//	set<Node*> set;
//	deq.push_back(node);
//	set.insert(node);
//	cout << node->value << " ";
//	while (deq.size() != 0){
//		Node* cur = deq.back();
//		deq.pop_back();
//		for (Node* next : cur->nexts){
//			if (set.find(next) == set.end()){
//				deq.push_back(cur);
//				deq.push_back(next);
//				set.insert(next);
//				cout << next->value << " ";
//				break;
//			}
//		}
//	}
//}
//set<int> sortedTopology(Graph graph) {
//	//key:某一个node
//	//value:剩余的入度
//	map<Node, int>inMap;
//	//入度为0的点，才能进这个队列
//	queue<Node>zeroInquere;
//	for(Node node:graph.nodes.)
//}

//字母计数

//int judge(char input[], int count[], int i) {
//	int flag = 0, flag2 = 0, count2[26] = { 0 }, sum = 0, for_math = 1, number = 1, number1 = 0;
//	while (input[i]!='\0') {
//		if (input[i] == '(') {
//			i = judge(input, count2, i + 1);
//			for (int j = 0; j < 26; j++) {
//				count[j] = count[j] + count2[j];
//			}
//			continue;
//		}
//		else if (input[i] == ')') {
//			flag = i;//flag用来计最后一个数字的下标
//			while (input[flag + 1] >= '0' && input[flag + 1] <= '9')flag++;
//			sum = 0, for_math = 1, flag2 = flag;//flag2用来给i赋值，使其跳到数字之后的第一个字母或是括号去
//			for (flag; flag > i; flag--) {
//				number = input[flag] - '0';
//				sum = sum + number * for_math;
//				for_math = for_math * 10;
//			}
//			for (int j = 0; j < 26; j++) {
//				count[j] = count[j] * sum;
//			}
//			i = flag2 + 1;
//			return i;
//		}
//		else if (input[i] >= 'a' && input[i] <= 'z') {
//			flag = i;
//			if (input[i + 1] >= '0' && input[i + 1] <= '9') {
//				while (input[flag + 1] >= '0' && input[flag + 1] <= '9') flag++;
//				sum = 0, for_math = 1, flag2 = flag;
//				for (flag; flag > i; flag--) {
//					number = input[flag] - '0';
//					sum = sum + number * for_math;
//					for_math = for_math * 10;
//				}
//				while ((input[flag] != '(' && input[flag] != ')') && (flag != -1 && (input[flag] >= '9' || input[flag] <= '0'))) {
//					count[input[flag] - 'a'] = count[input[flag] - 'a'] + sum;
//					flag--;
//				}
//				i = flag2 + 1;
//				continue;
//			}
//			else {
//				number1 = input[i] - 'a';
//				count[number1]++;
//				i++;
//				continue;
//			}
//		}
//		return 0;
//	}
//}
//
//void test(char input[]) {
//	int i = 0,count[26]={0};
//	judge(input, count, i);
//	for (int j = 0; j < 26; j++) {
//		if (count[j] == 0)continue;
//		char ch = j + 'a';
//		cout << ch << ":" << count[j] << endl;
//	}
//}
//	int main() {
//		char input[51];
//		scanf("%s", input);
//		test(input);
//		return 0;
//	}

//前缀树实现

//#include <iostream>
//#include <string>
//#include <string.h>
//
//using namespace std;
//const int MaxBranchNum = 26;//可以扩展
//class TrieNode {
//public:
//    string word;
//    int path;  //该字符被划过多少次，用以统计以该字符串作为前缀的字符串的个数
//    int End; //以该字符结尾的字符串
//    TrieNode* nexts[MaxBranchNum];
//
//    TrieNode(){
//        word = "";
//        path = 0;
//        End = 0;
//        memset(nexts, NULL, sizeof(TrieNode*) * MaxBranchNum);
//    }
//
//};
//
//class TrieTree {
//private:
//    TrieNode* root;
//public:
//    TrieTree();
//    ~TrieTree();
//    //插入字符串str
//    void insert(string str);
//    //查询字符串str是否出现过，并返回作为前缀几次
//    int search(string str);
//    //删除字符串str
//    void Delete(string str);
//    void destory(TrieNode* root);
//    //打印树中的所有节点
//    void printAll();
//    //打印以str作为前缀的单词
//    void printPre(string str);
//    //按照字典顺序输出以root为根的所有单词
//    void Print(TrieNode* root);
//    //返回以str为前缀的单词的个数
//    int prefixNumbers(string str);
//};
//
//TrieTree::TrieTree()
//{
//    root = new TrieNode();
//}
//
//
//TrieTree::~TrieTree()
//{
//    destory(root);
//}
//
//void TrieTree::destory(TrieNode* root)
//{
//    if (root == nullptr)
//        return;
//    for (int i = 0; i < MaxBranchNum; i++)
//    {
//        destory(root->nexts[i]);
//    }
//    delete root;
//    root = nullptr;
//}
//
//
//void TrieTree::insert(string str)
//{
//    if (str == "")
//        return;
//    char* buf = new char[str.size()];
//    strcpy(buf, str.c_str());
//    TrieNode* node = root;
//    int index = 0;
//    for (int i = 0; i < strlen(buf); i++)
//    {
//        index = buf[i] - 'a';
//        if (node->nexts[index] == nullptr)
//        {
//            node->nexts[index] = new TrieNode();
//        }
//        node = node->nexts[index];
//        node->path++;//有一条路径划过这个节点
//    }
//    node->End++;
//    node->word = str;
//}
//
//int TrieTree::search(string str)
//{
//    if (str == "")
//        return 0;
//    char* buf = new char[str.size()];
//    strcpy(buf, str.c_str());
//    TrieNode* node = root;
//    int index = 0;
//    for (int i = 0; i < strlen(buf); i++)
//    {
//        index = buf[i] - 'a';
//        if (node->nexts[index] == nullptr)
//        {
//            return 0;
//        }
//        node = node->nexts[index];
//    }
//    if (node != nullptr)
//    {
//        return node->End;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//void TrieTree::Delete(string str)
//{
//    if (str == "")
//        return;
//    char* buf = new char[str.size()];
//    strcpy(buf, str.c_str());
//    TrieNode* node = root;
//    TrieNode* tmp;
//    int index = 0;
//    for (int i = 0; i < str.size(); i++)
//    {
//        index = buf[i] - 'a';
//        tmp = node->nexts[index];
//        if (--node->nexts[index]->path == 0)
//        {
//            delete node->nexts[index];
//        }
//        node = tmp;
//    }
//    node->End--;
//}
//
//int TrieTree::prefixNumbers(string str)
//{
//    if (str == "")
//        return 0;
//    char* buf = new char[str.size()];
//    strcpy(buf, str.c_str());
//    TrieNode* node = root;
//    int index = 0;
//    for (int i = 0; i < strlen(buf); i++)
//    {
//        index = buf[i] - 'a';
//        if (node->nexts[index] == nullptr)
//        {
//            return 0;
//        }
//        node = node->nexts[index];
//    }
//    return node->path;
//}
//void TrieTree::printPre(string str)
//{
//    if (str == "")
//        return;
//    char* buf = new char[str.size()];
//    strcpy(buf, str.c_str());
//    TrieNode* node = root;
//    int index = 0;
//    for (int i = 0; i < strlen(buf); i++)
//    {
//        index = buf[i] - 'a';
//        if (node->nexts[index] == nullptr)
//        {
//            return;
//        }
//        node = node->nexts[index];
//    }
//    Print(node);
//}
//
//void TrieTree::Print(TrieNode* node)
//{
//    if (node == nullptr)
//        return;
//    if (node->word != "")
//    {
//        cout << node->word << " " << node->path << endl;
//    }
//    for (int i = 0; i < MaxBranchNum; i++)
//    {
//        Print(node->nexts[i]);
//    }
//}
//
//void TrieTree::printAll()
//{
//    Print(root);
//}

//前缀树附属main函数

//int main()
//{
//    cout << "Hello world!" << endl;
//    TrieTree trie;
//    string str = "li";
//    cout << trie.search(str) << endl;
//    trie.insert(str);
//    cout << trie.search(str) << endl;
//    trie.Delete(str);
//    cout << trie.search(str) << endl;
//    trie.insert(str);
//    cout << trie.search(str) << endl;
//
//    trie.insert(str);
//    cout << trie.search(str) << endl;
//
//    trie.Delete("li");
//    cout << trie.search(str) << endl;
//    trie.Delete("li");
//    cout << trie.search(str) << endl;
//    trie.insert("lia");
//    trie.insert("lic");
//    trie.insert("liab");
//    trie.insert("liad");
//    trie.Delete("lia");
//    cout << trie.search("lia") << endl;
//    cout << trie.prefixNumbers("lia") << endl;
//    return 0;
//}

//时间表

//class Program {
//public:
//	int start;
//	int end;
//	Program(int start, int end) {
//		this->start = start;
//		this->end = end;
//	}
//};
//class ProgramComparator {
//public:
//	bool operator()(Program o1, Program o2) {
//		return o1.end < o2.end;
//	}
//};
//int bestArrange(Program programs[], int proSize,int timePoint) {
//	sort(programs, programs+proSize, ProgramComparator());
//	int result = 0;
//	for (int i = 0; i < proSize; i++) {
//		if (timePoint <= programs[i].start) {
//			result++;
//			timePoint = programs[i].end;
//		}
//	}
//	return result;
//}

//最少钱

//int getLeastMoney(int lengthArray[],int arraySize) {
//	using::multiset;
//	multiset<int> lengthSortedArray;
//	int sum = 0;
//	for (int i = 0; i < arraySize; i++) {
//		lengthSortedArray.insert(lengthArray[i]);
//	}
//	while (lengthSortedArray.size() != 1) {
//		multiset<int>::iterator it = lengthSortedArray.begin();
//		int sum2 = *it + *(++it);
//		lengthSortedArray.erase(lengthSortedArray.begin());
//		lengthSortedArray.erase(it);
//		lengthSortedArray.insert(sum2);
//		sum += sum2;
//	}
//	return sum;
//}
//
//int main() {
//	int arr[5] = { 10,20,30,20,10};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	cout << getLeastMoney(arr, size);
//	return 0;
//}

//class program {
//public:
//	int cost;
//	int profit;
//	program(int cost, int profit) {
//		this->cost = cost;
//		this->profit = profit;
//	}
//};
//class rule1 {
//public:
//	bool operator()(const program& o1,const program& o2)const{
//		if (o1.cost != o2.cost) {
//			return o1.cost < o2.cost;
//		}
//		else
//			return o1.profit < o2.profit;
//	}
//};
//class rule2 {
//public:
//	bool operator() (const program& o1,const program& o2)const{
//		if (o1.profit != o2.profit) {
//			return o1.profit > o2.profit;
//		}
//		else
//			return o1.cost > o2.cost;
//	}
//};
//void erase(int cost, int profit, multiset<program, rule1>* costSortedArray) {
//	for (multiset<program, rule1>::iterator it2 = costSortedArray->begin(); it2 != costSortedArray->end(); ++it2) {
//		if ((*it2).cost == cost && (*it2).profit == profit) {
//			costSortedArray->erase(it2);
//			return;
//		}
//	}
//}
//int findMaximizedCapital(program programs[], int proSize, int k, int m) {
//	using::multiset;
//	multiset<program, rule1>* costSortedArray=new multiset<program, rule1>[proSize];
//	multiset<program, rule2>* profitSortedArray= new multiset<program, rule2>[proSize];
//	multiset<program, rule1>::iterator it1;
//	for (int i = 0; i < proSize; i++) {
//		costSortedArray->insert(programs[i]);
//	}
//	for (int i = 0; i < k; i++) {
//		it1 = costSortedArray->begin();
//		while (!costSortedArray->empty() && it1!=costSortedArray->end() && (*it1).cost <= m) {
//			profitSortedArray->insert((*it1++));
//		}
//		if (profitSortedArray->empty()) {
//			return m;
//		}
//		m += (*profitSortedArray->begin()).profit;
//		erase((*profitSortedArray->begin()).cost, (*profitSortedArray->begin()).profit, costSortedArray);
//		profitSortedArray->clear();
//	}
//	return m;
//}
//int main() {
//	program p1(1, 1);
//	program p2(2, 1);
//	program p3(2, 2);
//	program p4(3, 4);
//	program p5(3, 1);
//	program programs[5] = { p1,p2,p3,p4,p5 };
//	int prosize = sizeof(programs) / sizeof(programs[0]);
//	cout<<findMaximizedCapital(programs, prosize, 3, 1);
//	return 0;
//}

//n皇后

////colLim列的限制，1的位置不能放皇后，0的位置可以
////leftDiaLim左斜线的限制，1的位置不能放皇后，0可以
////rightDiaLim右斜线的限制，1的位置不能放皇后，0可以
//int process(int limit, int colLim, int leftDiaLim, int rightDiaLim) {
//	if (colLim == limit) {//base case
//		return 1;
//	}
//	//所有候选皇后的位置，都在pos上
//	int pos = limit & (~(colLim | leftDiaLim | rightDiaLim));
//	int mostRightOne = 0;
//	int res = 0;
//	while (pos != 0) {
//		mostRightOne = pos & (~pos + 1);
//		pos = pos - mostRightOne;
//		res += process(limit, colLim | mostRightOne, (leftDiaLim | mostRightOne) << 1, (rightDiaLim | mostRightOne) >> 1);
//	}
//	return res;
//}
//
//int num(int n) {
//	if (n < 1 || n>32) {
//		return 0;
//	}
//	int limit = n == 32 ? -1 : (1 << n) - 1;
//	return process(limit, 0, 0, 0);
//}
//
//
//
//int main() {
//	int n = 8;
//	cout << num(n);
//	return 0;
//}

//迪克斯特拉

///*
//本程序是使用Dijkstra算法实现求解最短路径的问题
//采用的邻接矩阵来存储图
//*/
////记录起点到每个顶点的最短路径的信息
//struct Dis {
//	string path;
//	int value;
//	bool visit;
//	Dis() {
//		visit = false;
//		value = 0;
//		path = "";
//	}
//};
//
//class Graph_DG {
//private:
//	int vexnum;   //图的顶点个数
//	int edge;     //图的边数
//	int** arc;   //邻接矩阵
//	Dis* dis;   //记录各个顶点最短路径的信息
//public:
//	//构造函数
//	Graph_DG(int vexnum, int edge);
//	//析构函数
//	~Graph_DG();
//	// 判断我们每次输入的的边的信息是否合法
//	//顶点从1开始编号
//	bool check_edge_value(int start, int end, int weight);
//	//创建图
//	void createGraph();
//	//打印邻接矩阵
//	void print();
//	//求最短路径
//	void Dijkstra(int begin);
//	//打印最短路径
//	void print_path(int);
//};
//
////构造函数
//Graph_DG::Graph_DG(int vexnum, int edge) {
//	//初始化顶点数和边数
//	this->vexnum = vexnum;
//	this->edge = edge;
//	//为邻接矩阵开辟空间和赋初值
//	arc = new int* [this->vexnum];
//	dis = new Dis[this->vexnum];
//	for (int i = 0; i < this->vexnum; i++) {
//		arc[i] = new int[this->vexnum];
//		for (int k = 0; k < this->vexnum; k++) {
//			//邻接矩阵初始化为无穷大
//			arc[i][k] = INT_MAX;
//		}
//	}
//}
////析构函数
//Graph_DG::~Graph_DG() {
//	delete[] dis;
//	for (int i = 0; i < this->vexnum; i++) {
//		delete this->arc[i];
//	}
//	delete arc;
//}
//
//// 判断我们每次输入的的边的信息是否合法
////顶点从1开始编号
//bool Graph_DG::check_edge_value(int start, int end, int weight) {
//	if (start<1 || end<1 || start>vexnum || end>vexnum || weight < 0) {
//		return false;
//	}
//	return true;
//}
//
//void Graph_DG::createGraph() {
//	cout << "请输入每条边的起点和终点（顶点编号从1开始）以及其权重" << endl;
//	int start;
//	int end;
//	int weight;
//	int count = 0;
//	while (count != this->edge) {
//		cin >> start >> end >> weight;
//		//首先判断边的信息是否合法
//		while (!this->check_edge_value(start, end, weight)) {
//			cout << "输入的边的信息不合法，请重新输入" << endl;
//			cin >> start >> end >> weight;
//		}
//		//对邻接矩阵对应上的点赋值
//		arc[start - 1][end - 1] = weight;
//		//无向图添加上这行代码
//		//arc[end - 1][start - 1] = weight;
//		++count;
//	}
//}
//
//void Graph_DG::print() {
//	cout << "图的邻接矩阵为：" << endl;
//	int count_row = 0; //打印行的标签
//	int count_col = 0; //打印列的标签
//	//开始打印
//	while (count_row != this->vexnum) {
//		count_col = 0;
//		while (count_col != this->vexnum) {
//			if (arc[count_row][count_col] == INT_MAX)
//				cout << "∞" << " ";
//			else
//				cout << arc[count_row][count_col] << " ";
//			++count_col;
//		}
//		cout << endl;
//		++count_row;
//	}
//}
//void Graph_DG::Dijkstra(int begin) {
//	//首先初始化我们的dis数组
//	int i;
//	for (i = 0; i < this->vexnum; i++) {
//		//设置当前的路径
//		dis[i].path = "v" + to_string(begin) + "-->v" + to_string(i + 1);
//		dis[i].value = arc[begin - 1][i];
//	}
//	//设置起点的到起点的路径为0
//	dis[begin - 1].value = 0;
//	dis[begin - 1].visit = true;
//
//	int count = 1;
//	//计算剩余的顶点的最短路径（剩余this->vexnum-1个顶点）
//	while (count != this->vexnum) {
//		//temp用于保存当前dis数组中最小的那个下标
//		//min记录的当前的最小值
//		int temp = 0;
//		int min = INT_MAX;
//		for (i = 0; i < this->vexnum; i++) {
//			if (!dis[i].visit && dis[i].value < min) {
//				min = dis[i].value;
//				temp = i;
//			}
//		}
//		//cout << temp + 1 << "  "<<min << endl;
//		//把temp对应的顶点加入到已经找到的最短路径的集合中
//		dis[temp].visit = true;
//		++count;
//		for (i = 0; i < this->vexnum; i++) {
//			//注意这里的条件arc[temp][i]!=INT_MAX必须加，不然会出现溢出，从而造成程序异常
//			if (!dis[i].visit && arc[temp][i] != INT_MAX && (dis[temp].value + arc[temp][i]) < dis[i].value) {
//				//如果新得到的边可以影响其他为访问的顶点，那就就更新它的最短路径和长度
//				dis[i].value = dis[temp].value + arc[temp][i];
//				dis[i].path = dis[temp].path + "-->v" + to_string(i + 1);
//			}
//		}
//	}
//
//}
//void Graph_DG::print_path(int begin) {
//	string str;
//	str = "v" + to_string(begin);
//	cout << "以" << str << "为起点的图的最短路径为：" << endl;
//	for (int i = 0; i != this->vexnum; i++) {
//		if (dis[i].value != INT_MAX)
//			cout << dis[i].path << "=" << dis[i].value << endl;
//		else {
//			cout << dis[i].path << "是无最短路径的" << endl;
//		}
//	}
//}
////检验输入边数和顶点数的值是否有效，可以自己推算为啥：
////顶点数和边数的关系是：((Vexnum*(Vexnum - 1)) / 2) < edge
//bool check(int Vexnum, int edge) {
//	if (Vexnum <= 0 || edge <= 0 || ((Vexnum * (Vexnum - 1)) / 2) < edge)
//		return false;
//	return true;
//}
//int main() {
//	int vexnum; int edge;
//
//	cout << "输入图的顶点个数和边的条数：" << endl;
//	cin >> vexnum >> edge;
//	while (!check(vexnum, edge)) {
//		cout << "输入的数值不合法，请重新输入" << endl;
//		cin >> vexnum >> edge;
//	}
//	Graph_DG graph(vexnum, edge);
//	graph.createGraph();
//	graph.print();
//	graph.Dijkstra(1);
//	graph.print_path(1);
//	system("pause");
//	return 0;
//}

//位图的创建

//int arr[10];//此时有320bit位
//int i;//想查看i个bit位置的状态
//int numIndex = i / 32;
//int bitIndex = i % 32;
////拿到i位置的状态
//int s = ((arr[numIndex] >> (bitIndex)) & 1);
////将i位置状态改为1
//arr[numIndex] = arr[numIndex] | (1 << (bitIndex));
////将i位置状态改为0
//arr[numIndex] = arr[numIndex] & (~(1 << bitIndex));

//布隆过滤器

//struct BKDRHash{
//	size_t operator()(const string& s){
//		size_t value = 0;
//		for (auto ch : s){
//			value = value * 131 + ch;
//		}
//		return value;
//	}
//};
//struct APHash{
//	size_t operator()(const string& s){
//		size_t value = 0;
//		for (size_t i = 0; i < s.size(); i++){
//			if ((i & 1) == 0){
//				value ^= ((value << 7) ^ s[i] ^ (value >> 3));
//			}
//			else{
//				value ^= (~((value << 11) ^ s[i] ^ (value >> 5)));
//			}
//		}
//		return value;
//	}
//};
//struct DJBHash{
//	size_t operator()(const string& s){
//		if (s.empty())
//			return 0;
//		size_t value = 5381;
//		for (auto ch : s){
//			value += (value << 5) + ch;
//		}
//		return value;
//	}
//};
//
//
//template<size_t N,
//	class K = string, class Hash1 = BKDRHash, class Hash2 = APHash, class Hash3 = DJBHash>
//class BloomFilter{
//public:
//	void Set(const K& key){
//		size_t hash1 = Hash1()(key) % N;
//		size_t hash2 = Hash2()(key) % N;
//		size_t hash3 = Hash3()(key) % N;
//
//		_bs.set(hash1);
//		_bs.set(hash2);
//		_bs.set(hash3);
//	}
//	bool Test(const K& key){
//		size_t hash1 = Hash1()(key) % N;
//		if (_bs.test(hash1) == false) {
//			return false;				// 准确
//		}
//		size_t hash2 = Hash2()(key) % N;
//		if (_bs.test(hash2) == false) {
//			return false;				// 准确
//		}
//		size_t hash3 = Hash3()(key) % N;
//		if (_bs.test(hash3) == false) {
//			return false;				// 准确
//		}
//		return true;					// 可能误判
//	}
//	// ...
//private:
//	bitset<N> _bs;
//};


//岛问题

//void infect(int** m, int i, int j, int N, int M) {
//	if (i < 0 || i >= N || j < 0 || j >= M || m[i][j] != 1) {
//		return;
//	}
//	//i.j没越界，并且当前位置值是1
//	m[i][j] = 2;
//	infect(m, i + 1, j, N, M);
//	infect(m, i - 1, j, N, M);
//	infect(m, i, j + 1, N, M);
//	infect(m, i, j - 1, N, M);
//}
//
//int countIslands(int** m, int M, int N) {//N为行数，M为列数
//	if (m == NULL || m[0] == NULL) {
//		return 0;
//	}
//	int res = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (m[i][j] == 1) {
//				res++;
//				infect(m, i, j, N, M);
//			}
//		}
//	}
//	return res;
//}
//
//int main() {
//	int m[][7] = { {0,0,0,1,0,1,1},
//				  {0,0,0,0,1,1,1},
//				  {1,1,0,0,0,0,0},
//				  {0,0,1,1,0,0,0}
//	};
//	int N = sizeof(m) / sizeof(m[0]);
//	int M = sizeof(m[0]) / sizeof(m[0][0]);
//	cout << countIslands(m,N,M);
//	return 0;
//}


//const int  N = 1005;		//指定并查集所能包含元素的个数（由题意决定）
//int pre[N];     					//存储每个结点的前驱结点 
//int my_rank[N];    					//树的高度 
//void init(int n)     				//初始化函数，对录入的 n个结点进行初始化 
//{
//	for (int i = 0; i < n; i++) {
//		pre[i] = i;     			//每个结点的上级都是自己 
//		my_rank[i] = 1;    			//每个结点构成的树的高度为 1 
//	}
//}
//int find(int x)     	 		    //查找结点 x的根结点 
//{
//	if (pre[x] == x) return x;  		//递归出口：x的上级为 x本身，则 x为根结点 
//	return find(pre[x]); 			//递归查找 
//}
//
//int find(int x)     				//改进查找算法：完成路径压缩，将 x的上级直接变为根结点，那么树的高度就会大大降低 
//{
//	if (pre[x] == x) return x;		//递归出口：x的上级为 x本身，即 x为根结点 
//	return pre[x] = find(pre[x]);   //此代码相当于先找到根结点 rootx，然后 pre[x]=rootx 
//}
//
//bool isSame(int x, int y)      		//判断两个结点是否连通 
//{
//	return find(x) == find(y);  	//判断两个结点的根结点（即代表元）是否相同 
//}
//
//bool join(int x, int y)
//{
//	x = find(x);						//寻找 x的代表元
//	y = find(y);						//寻找 y的代表元
//	if (x == y) return false;			//如果 x和 y的代表元一致，说明他们共属同一集合，则不需要合并，返回 false，表示合并失败；否则，执行下面的逻辑
//	if (my_rank[x] > my_rank[y]) pre[y] = x;		//如果 x的高度大于 y，则令 y的上级为 x
//	else								//否则
//	{
//		if (my_rank[x] == my_rank[y]) my_rank[y]++;	//如果 x的高度和 y的高度相同，则令 y的高度加1
//		pre[x] = y;						//让 x的上级为 y
//	}
//	return true;						//返回 true，表示合并成功
//}


//int KMP(int start, char S[], char T[])
//{
//	int i = start, j = 0;
//	while (S[i] != '\0' && T[j] != '\0')
//	{
//		if (j == -1 || S[i] == T[j])
//		{
//			i++;         //继续对下一个字符比较 
//			j++;         //模式串向右滑动 
//		}
//		else j = next[j];
//	}
//	if (T[j] == '\0') return (i - j);    //匹配成功返回下标 
//	else return -1;                 //匹配失败返回-1 
//}

//manacher

//#include<iostream>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
////算法主体
//int maxLcsplength(string str) {
//	//空字符串直接返回0
//	if (str.length() == 0) {
//		return 0;
//	}
//	//记录下manacher字符串的长度，方便后面使用
//	int len = (int)(str.length() * 2 + 1);
//	//开辟动态数组chaArr记录manacher化的字符串
//	//开辟动态数组pArr记录每个位置的回文半径
//	char* chaArr = new char[len];
//	int* pArr = new int[len];
//	int index = 0;
//	for (int i = 0; i < len; i++) {
//		chaArr[i] = (i & 1) == 0 ? '#' : str[index++];
//	}
//	//到此完成对原字符串的manacher化
//	//R是最右回文边界，C是R对应的最左回文中心，maxn是记录的最大回文半径
//	int R = -1;
//	int C = -1;
//	int maxn = 0;
//	//开始从左到右遍历
//	for (int i = 0; i < len; i++) {
//		//第一步直接取得可能的最短的回文半径，当i>R时，最短的回文半径是1，反之，最短的回文半径可能是i对应的i'的回文半径或者i到R的距离
//		pArr[i] = R > i ? min(R - i, pArr[2 * C - i]) : 1;
//		//取最小值后开始从边界暴力匹配，匹配失败就直接退出
//		while (i + pArr[i]<len && i - pArr[i]>-1) {
//			if (chaArr[i + pArr[i]] == chaArr[i - pArr[i]]) {
//				pArr[i]++;
//			}
//			else {
//				break;
//			}
//		}
//		//观察此时R和C是否能够更新
//		if (i + pArr[i] > R) {
//			R = i + pArr[i];
//			C = i;
//		}
//		//更新最大回文半径的值
//		maxn = max(maxn, pArr[i]);
//	}
//	//记得清空动态数组哦
//	delete[] chaArr;
//	delete[] pArr;
//	//这里解释一下为什么返回值是maxn-1，因为manacherstring的长度和原字符串不同，所以这里得到的最大回文半径其实是原字符串的最大回文子串长度加1，有兴趣的可以自己验证试试
//	return maxn - 1;
//}
//int main()
//{
//	string s1 = "";
//	cout << maxLcsplength(s1) << endl;
//	string s2 = "abbbca";
//	cout << maxLcsplength(s2) << endl;
//	return 0;
//}

//最大距离二叉树

//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//	Node(int data) {
//		this->value = data;
//	}
//};
////返回以x为头的整棵树的两个信息
//
//
//class Info {
//public:
//	int maxDistance;
//	int height;
//	Info(int dis, int h) {
//		this->maxDistance = dis;
//		this->height=h;
//	}
//};
//Info process(Node* x) {
//	if (&x == NULL) {
//		return Info(0, 0);
//	}
//	Info leftInfo = process(x->left);
//	Info rightInfo = process(x->right);
//	//info
//	int p1 = leftInfo.maxDistance;
//	int p2 = rightInfo.maxDistance;
//	int p3 = leftInfo.height + 1 + rightInfo.height;
//	int maxDistance = max(leftInfo.height, rightInfo.height) + 1;
//	int height = max(leftInfo.height, rightInfo.height) + 1;
//	return Info(maxDistance, height);
//}
//int maxDistance(Node* head) {
//	return process(head).maxDistance;
//}

//最大快乐值多叉树

//using::vector;
//class Employee {
//public:
//	int happy;//可带来的快乐值
//	vector<Employee> nexts;//直接下级
//};
//
//class Info {
//public:
//	int laiMaxhappy;
//	int buMaxhappy;
//	Info(int lai, int bu) {
//		laiMaxhappy = lai;
//		buMaxhappy = bu;
//	}
//};
//
//int maxHappy(Employee boss) {
//	Info headInfo = process(boss);
//	return max(headInfo.laiMaxhappy, headInfo.buMaxhappy);
//}
//
//Info process(Employee x) {
//	if (x.nexts.empty()) {
//		return Info(x.happy, 0);
//	}
//	int lai = x.happy;//x来的最大收益
//	int bu = 0;//x不来的最大收益
//	for (Employee next : x.nexts) {
//		Info nextInfo = process(next);
//		lai += nextInfo.buMaxhappy;
//		bu += max(nextInfo.laiMaxhappy, nextInfo.buMaxhappy);
//	}
//	return Info(lai, bu);
//}

//Morris遍历
//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//	Node(int data) {
//		this->value = data;
//	}
//};
//
////void process(Node* head) {
////	if (&head == NULL) {
////		return;
////	}
////	//1
////	process(head->left);
////	//2
////	process(head->right);
////	//3
////}
//
//void morris(Node* head) {
//	if (&head == NULL) {
//		return;
//	}
//	Node* cur = head;
//	Node* mostRight = NULL;
//	while (cur != NULL) {//过流程
//		mostRight = cur->left;//mostRight是cur左孩子
//		if (mostRight->right != NULL && mostRight->right != cur) {
//			mostRight = mostRight->right;
//		}
//		//mostRight变成了cur左子树上，最右的节点
//		if (mostRight->right == NULL) {//这是第一次来到cur
//			mostRight->right = cur;
//			cur = cur->left;
//			continue;
//		}
//		else {
//			//mostRight.right==cur
//			mostRight->right = NULL;
//		}
//		cur = cur->right;
//	}
//}
//
//void morrisPre(Node* head) {
//	if (&head == NULL) {
//		return;
//	}
//	Node* cur = head;
//	Node* mostRight = NULL;
//	while (cur != NULL) {//过流程
//		mostRight = cur->left;//mostRight是cur左孩子
//		if (mostRight != NULL) {//有左子树
//			while (mostRight->right != NULL && mostRight->right != cur) {
//				mostRight = mostRight->right;
//			}
//			//mostRight变成了cur左子树上，最右的节点
//			if (mostRight->right == NULL) {//这是第一次来到cur
//				cout << cur->value;
//				mostRight->right = cur;
//				cur = cur->left;
//				continue;
//			}
//			else {//mostRight.right=cur
//				mostRight->right = NULL;
//			}
//		}
//		else {//没有左子树的情况
//			cout << cur->value;
//		}
//		cur = cur->right;
//	}
//}
//
//void morrisIn(Node* head) {
//	if (&head == NULL) {
//		return;
//	}
//	Node* cur = head;
//	Node* mostRight = NULL;
//	while (cur != NULL) {//过流程
//		mostRight = cur->left;//mostRight是cur左孩子
//		if (mostRight != NULL) {//有左子树
//			while (mostRight->right != NULL && mostRight->right != cur) {
//				mostRight = mostRight->right;
//			}
//			//mostRight变成了cur左子树上，最右的节点
//			if (mostRight->right == NULL) {//这是第一次来到cur
//				mostRight->right = cur;
//				cur = cur->left;
//				continue;
//			}
//			else {//mostRight.right=cur
//				mostRight->right = NULL;
//			}
//		}
//		cout << cur->value;
//		cur = cur->right;
//	}
//}
//
//void morrisPos(Node* head) {
//	if (&head == NULL) {
//		return;
//	}
//	Node* cur = head;
//	Node* mostRight=NULL;
//	while (cur != NULL) {//过流程
//		mostRight = cur->left;//mostRight是cur左孩子
//		if (mostRight != NULL) {//有左子树
//			while (mostRight->right != NULL && mostRight->right != cur) {
//				mostRight = mostRight->right;
//			}
//			//mostRight变成了cur左子树上，最右的节点
//			if (mostRight->right == NULL) {//这是第一次来到cur
//				mostRight->right = cur;
//				cur = cur->left;
//				continue;
//			}else {
//				mostRight->right = NULL;
//				printEdge(cur->left);
//			}
//		}
//		cur = cur->right;
//	}
//	printEdge(head);
//	cout << endl;
//}
//
//Node* reverseEdge(Node* from) {
//	Node* pre = NULL;
//	Node* next = NULL;
//	while (from != NULL) {
//		next = from->right;
//		from->right = pre;
//		pre = from;
//		from = next;
//	}
//	return pre;
//}
////以X为头的树，逆序打印这棵树的右边界
//void printEdge(Node* X) {
//	Node* tail = reverseEdge(X);
//	Node* cur = tail;
//	while (cur != NULL) {
//		cout << cur->value << " ";
//		cur = cur->right;
//	}
//	reverseEdge(tail);
//}

//int flip(int n) {
//	return n ^ 1;
//}
//
//int sign(int n) {
//	return flip((n >> 31) & 1);
//}
//
//int  getMax(int a, int b) {
//	int c = a - b;
//	int sa = sign(a);
//	int sb = sign(b);
//	int sc = sign(c);
//	int disSab = sa ^ sb;
//	int sameSab = flip(difSab);
//	int returnA = difSab * sa + sameSab * sb;
//	int returnB = flip(returnA);
//	return a * returnA + b * returnB;
//}

//int add(int a, int b) {
//	int sum = a;
//	while (b != 0) {
//		sum = a ^ b;//无进位相加结果
//		b = (a & b )<< 1;//进位信息
//		a = sum;
//	}
//	return sum;
//}
//
//int negNum(int n) {
//	return add(~n, 1);
//}
//
//int my_minus(int a, int b) {
//	return add(a, negNum(b));
//}
//
//int multi(int a, int b) {
//	int res = 0;
//	unsigned int newb = (unsigned)b;
//	while (newb != 0) {
//		if ((b & 1) != 0) {
//			res = add(res, a);
//		}
//		a <<= 1;
//		newb >>= 1;
//	}
//	return res;
//}
//
//bool isNeg(int n) {
//	return n < 0;
//}
//
//int divide(int a, int b) {
//	int x = isNeg(a) ? negNum(a) : a;
//	int y = isNeg(b) ? negNum(b) : b;
//	int res = 0;
//	for (int i = 31; i > -1; i = my_minus(i, 1)) {
//		if ((x >> i) >= y) {
//			res |= (1 << i);
//			x =my_minus(x, y << i);
//		}
//	}
//	return isNeg(a) ^ isNeg(b) ? negNum(res) : res;
//}


//int f() {
//	return rand() % 5 + 1;
//}
//
//int get0or1() {
//	int res = 0;
//	do {
//		res = f();
//	} while (res == 3);
//	return res < 3 ? 0 : 1;
//}
//
//int g() {//1~7
//	int res = 0;
//	do {
//		res = (get0or1() << 2 + get0or1() << 1 + get0or1());
//	} while (res == 7);
//	return res + 1;
//}
//
//int main() {
//	srand((unsigned)time(NULL));
//}


////如果剩余苹果rest能够被六苹果袋子搞定，返回袋子数量
////不能搞定返回-1
//int minBagBase6(int rest) {
//	return rest % 6 == 0 ? (rest / 6) : -1;
//}
//int minBags(int apple) {
//	if (apple < 0||(apple%2)==1) {
//		return -1;
//	}
//	int bag6 = -1;
//	int bag8 = apple / 8;
//	int rest = apple - 8 * bag8;
//	while (bag8 >= 0 && rest < 24) {
//		int restUse6 = minBagBase6(rest);
//		if (restUse6 != -1) {
//			bag6 = restUse6;
//			break;
//		}
//		rest = apple - 8 * (--bag8);
//	}
//	return bag6 == -1 ? -1 : bag6 + bag8;
//}

//string winner(int n) {
//	if (n < 5) {
//		return (n == 0 || n == 2) ? "后手" : "先手";
//	}
//	int base = 1;
//	while (base <= n) {
//		if (!winner(n - base).compare("后手")) {
//			return "先手";
//		}
//		if (base > n / 4) {
//			break;
//		}
//		base *= 4;
//	}
//	return "后手";
//}
//string winner(int n) {
//	if (n % 5 == 0 || n % 5 == 2) {
//		return "后手";
//	}
//	else {
//		return "先手";
//	}
//}

//计n个数可以构成多少个不同结构的二叉树

//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//	Node(int data) {
//		this->value = data;
//	}
//};
//int process(int n) {
//	if (n < 0)return 0;
//	if (n == 0)return 1;
//	if (n == 2)return 2;
//	int res = 0;
//	for (int leftNum = 0; leftNum < n - 1; leftNum++) {
//		int leftWays = process(leftNum);
//		int rightWays = process(n - 1 - leftNum);
//		res += leftWays * rightWays;
//	}
//	return res;
//}
//
//int numTrees(int n) {
//	if (n < 2) {
//		return 1;
//	}
//	int* dp= new int[n + 1];
//	dp[0] = 1;
//	for (int i = 1; i < n + 1; i++) {
//		for (int j = 0; j = i + 1; j++) {
//			dp[i] += dp[j - 1] * dp[i - j];
//		}
//	}
//	return dp[n];
//}

//查找k为差值的数对

//bool set_find(set<int> set, int n) {
//	for (int cur : set) {
//		if (n == cur) {
//			return true;
//		}
//	}
//	return false;
//}
//
//using::vector;
//using::set;
//vector<vector<int>> allPair(int arr[], int size,int k) {
//	set<int> set;
//	for (int i = 0; i < size; i++) {
//		set.insert(arr[i]);
//	}
//	vector<vector<int>> res;
//	res.resize(size * size / 2);
//	for (int cur : set) {
//		if (set_find(set, cur + k)) {
//			res.push_back(vector<int>(cur, cur + k));
//		}
//	}
//	return res;
//}
//
//
//int main() {
//	int arr[] = { 0,2,4,5,6,7,8,3 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sizeof(allPair(arr, size, 2)).size(); i++)
//		cout << "("<<allPair(arr, size, 2)[i][0]<<","<< allPair(arr, size, 2)[i][1]<<")";
//	return 0;
//}


//未完成

//double avg(int arr[],int size) {
//	double sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum +=(double) arr[i];
//	}
//	double res = sum / size;
//	return res;
//}
//
//int maxOps(int arr1[],int sizearr1, int arr2[],int sizearr2) {
//	double sum1 = 0;
//	for (int i = 0; i < sizearr1; i++) {
//		sum1 += (double)arr1[i];
//	}
//	double sum2 = 0;
//	for (int i = 0; i < sizearr2; i++) {
//		sum2 += (double)arr2[i];
//	}
//	if (avg(arr1, sizearr1) == avg(arr2, sizearr2)) {
//		return 0;
//	}
//	int arrMore[] = ;
//}

//求树最大权重和

//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//	Node(int value) {
//		this->value = value;
//	}
//};
//
////全局变量，只有到达叶节点的时候，才有可能更新
//int maxSum = INT_MIN;
////从根节点出发到当前节点上方的节点，获得的路径和
//void p(Node* x, int pre) {
//	if (x->left == NULL && x->right == NULL) {//当前x是叶节点
//		maxSum = max(maxSum, pre + x->value);
//	}
//	if (x->left != NULL) {
//		p(x->left, pre + x->value);
//	}
//	if (x->right != NULL) {
//		p(x->right, pre + x->value);
//	}
//}
//int maxPath(Node* head) {
//	p(head, 0);
//	return maxSum;
//}
//
////x为头的整棵树上，最大路径和是多少，返回
////路径要求，一定从x出发，到叶节点，算作一个路径
//int process(Node* x) {
//	if (x->left == NULL && x->right == NULL) {
//		return x->value;
//	}
//	int next = INT_MIN;
//	if (x->left != NULL) {
//		next = process(x->left);
//	}
//	if (x->right != NULL) {
//		next = max(next, process(x->right));
//	}
//	return x->value + next;
//}
//
//int maxDis(Node* head) {
//	if (head == NULL) {
//		return 0;
//	}
//	return process(head);
//}



