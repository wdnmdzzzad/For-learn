#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
//˰���벹�����̻��ҿ����

//#define MAX (100000+100)
//int x, r, m, n, p, d[MAX];//r����ɱ���,x���������۸�d�����λ
//double Min = -1e9, Max = 1e9;//�����䣬��ʼ�����
//inline void read(int& a)
//{
//    register char c = getchar(); bool f = 0;
//    for (a = 0; c < '0' || '9' < c; c = getchar())
//        if (c == '-') f = 1;//Ҫд����ǵ��и�������-1
//    for (; '0' <= c && c <= '9'; c = getchar())
//        a = (a << 3) + (a << 1) + (c ^ 48);
//    if (f) a = -a;
//}
//int main()
//{
//    read(x); read(m); read(n); r = m;//��¼�ɱ���
//    while (m != -1 && n != -1)
//    {
//        d[m] = n;
//        for (int i = p + 1; i < m; i++)
//            d[i] = d[i - 1] + (n - d[p]) / (m - p);//�˴����ơ�δ֪�۸�������(n-d[p])/(m-p)�ǹ���
//        p = m;//��¼��һ�ε�m��
//        read(m); read(n);
//    }read(m);//��ʱm������������
//    while (d[p] > m)
//        p++, d[p] = d[p - 1] - m;//�������ƣ�������ɺ�p����d>0�ķ�Χ
//    for (register int i = r; i <= p; i++)//�ӳɱ���p�ĵ���
//    {
//        double ans = (d[x] * (x - r) - d[i] * (i - r)) * 1.0 / (d[i] - d[x]);
//        //��(x+d[i])*(i-r)<=��x+d[x_])+(x_-r)��ͨ�⣬x_�������۸�
//        double g = d[i] - d[x];//�жϽ�ķ���,gΪ����С�ڣ���֮Ϊ���ڡ�
//        if (g > 0) Max = min(Max, ans);//ȡ����"x<=..."�е���Сֵ
//        else Min = max(Min, ans);//ȡ����"x>=..."�е����ֵ
//    }
//    //��ʱ[Min,Max]���Ǵ𰸵ķ�Χ��ȡ����ֵ��С�������
//    if (Min > 0) printf("%d", (int)ceil(Min));//Max>Min>0����ΪMin��ȡ��
//    else if (Max < 0) printf("%d", (int)floor(Max));//Min<Max<0����ΪMax��ȡ��
//    else puts("0");//Min<0<Max����Ȼ��0����ֵ��С
//    //�˴�Ӧ��Min>Max�����"NO SOLUTION"�������������ʵ��û������㣬���Ծ�ʡ���ˡ�
//    return 0;
//}

//��������·

//int num1,num2, gene1[110], gene2[110], f[110][110];//״̬����
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
//	}//���ˣ��������
//
//	for(int i=1;i<=num1;i++)
//}
//int dp[100][100] = { 0 };
//
//int robot_ways_final(int N, int Start, int Aim, int K) //NΪ��������StartΪ��ʼλ�ã�AimΪĿ��λ�ã�KΪ����
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

//����ת�ַ�������

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

//�߾��ȼӷ�

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


//�߾��ȼ���

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


//��������ADTʵ��

//������ʵ��
template<class T> class BinaryTree;
template<class T>//���������ADT
class BinaryTreeNode {
	friend class BinaryTree<T>;//������������Ϊ��Ԫ��
public:
	T value;//���������������
	BinaryTreeNode<T>* left;//ָ����������ָ��
	BinaryTreeNode<T>* right;//ָ����������ָ��
	BinaryTreeNode<T>* parent;//ָ�򸸽���ָ��
	BinaryTreeNode(const T& data = T())
		: left(nullptr)
		, right(nullptr)
		, parent(nullptr)
		, value(data)
	{}
	//BinaryTreeNode();//ȱʡ���캯��
	//BinaryTreeNode(const T& ele);//�������ݵĹ���
	//BinaryTreeNode(const T& ele, BinaryTreeNode<T>* l, BinaryTreeNode<T>* r);//����������
	//T value()const;//���ص�ǰ�������
	//BinaryTreeNode<T>* leftchild()const;//����������
	//BinaryTreeNode<T>* rightchild()const;//����������
	//void setLeftchild(BinaryTreeNode<T>*);//����������
	//void setRightchild(BinaryTreeNode<T>*);//����������
	//void setValue(const T& val);//����������
	//bool isLeaf()const;//�ж��Ƿ�ΪҶ���
	BinaryTreeNode<T>& operator=(const BinaryTreeNode<T>& Node);//���ظ�ֵ������
};

template<class T>//������ADT
class BinaryTree {
	typedef BinaryTreeNode<T> Node;
public:
	BinaryTree() :root(nullptr) {}//���캯��
	~BinaryTree() { dele(); }//��������
	Node* Root() { return root; };//���ظ����
	BinaryTreeNode<T>* Parent(BinaryTreeNode<T>* root, BinaryTreeNode<T>* current)
	{
		BinaryTreeNode<T>* tmp;
		if (root == NULL)return(NULL);
		if (current == root->left || current == root->right)return root;//���������current�򷵻�parent
		if (Parent(root->left, current) != NULL)return Parent(root->left, current);
		if (Parent(root->right, current) != NULL)return Parent(root->right, current);
		return NULL;
	}
	BinaryTreeNode<T>* Parent(BinaryTreeNode<T>* current)
	{
		using std::stack;//ʹ��STL�е�ջ
		stack <BinaryTreeNode<T>*> aStack;
		BinaryTreeNode<T>* pointer = root;
		aStack.push(NULL);//ջ�׼�����
		while (pointer)//����!aStack.empty()
		{
			if (current == pointer->right || current == pointer->left)//���pointer�ĺ�����current�򷵻�parent
				return pointer;
			if (pointer->right != NULL)
				aStack.push(pointer->right);//�ǿ��Һ�����ջ
			if (pointer->left != NULL)
				pointer = pointer->left;//��·�½�
			else {//������������ϣ�ת�����������
				pointer = aStack.top();
				aStack.pop();//ջ��Ԫ����ջ
			}
		}
	}
	/*BinaryTreeNode<T>* LeftSibling(BinaryTreeNode<T>* current);//����
	BinaryTreeNode<T>* RightSibling(BinaryTreeNode<T>* current);//����
	void CreateTree(const T& info, BinaryTree<T>& leftTree, BinaryTree<T>& rightTree);//��������*/

	bool isEmpty()const;//�ж��������Ƿ�Ϊ����
	bool isBalanced(BinaryTreeNode<T> head) {//�Ƿ���ƽ�������
		return process1(head).isBalanced;
		//return process2(head).isBalanced;
	}
	bool isCBT(BinaryTreeNode<T> head) {//�Ƿ�Ϊ��ȫ������
		if (head == NULL) {
			return true;
		}
		using std::list;
		list<BinaryTreeNode<T>>test_list = new list<T>();
		//�Ƿ������������������Ӳ�˫ȫ�Ľ��
		bool leaf = false;
		Node l = NULL;
		Node r = NULL;
		test_list.push_back(head);
		while (!test_list.empty()) {
			head = test_list.pop_front();
			l = head.left;
			r = head.right;
			if ((leaf && (l != NULL || r != NULL)) || (l == NULL && r != NULL)) {
				//��������˲�˫ȫ�Ľ����ַ��ֵ�ǰ��㲻��Ҷ���
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
	bool checkBST(BinaryTreeNode<T> head) {//�Ƿ�Ϊ����������
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
	void PreOrder(BinaryTreeNode<T>* root);//ǰ�������������������
	void PostOrder(BinaryTreeNode<T>* root);//���������������������
	void LevelOrder()//�������
	{
		using std::queue;//ʹ��STL�Ķ���
		queue<BinaryTreeNode<T>*>aQueue;
		BinaryTreeNode<T>* pointer = root;//�����������
		if (pointer)
			aQueue.push(pointer);//����������
		while (!aQueue.empty())
		{//���зǿ�
			pointer = aQueue.front();//ȡ�����׽��
			aQueue.pop();//��ǰ��������
			Visit(pointer->value());//���ʵ�ǰ���
			if (pointer->leftchild())
				aQueue.push(pointer->leftchild());//������������
			if (pointer->rightchild())
				aQueue.push(pointer->rightchild());//������������
		}
	}
	void DepthOrder(BinaryTreeNode<T>* root)//������ȱ���
	{
		if (root != NULL) {
			//Visit(root);ǰ��
			DepthOrder(root->leftchild());//�ݹ����������
			//Visit(root);����
			DepthOrder(root->rightchild());//�ݹ����������
			//Visit(root);����
		}
	}
	void PreOrderWithoutRecusion() {//ǰ������޵ݹ�
		using std::stack;//ʹ��STL�е�stack
		stack<BinaryTreeNode<T>*>aStack;
		BinaryTreeNode<T>* pointer = root;
		aStack.push(NULL);//ջ�׼�����
		while (pointer)//���ߣ�aStack.empty()
		{
			Visit(pointer->value);//���ʵ�ǰ���
			if (pointer->right != NULL)//�Һ�����ջ
				aStack.push(pointer->right);
			if (pointer->left != NULL)
				pointer = pointer->left;//��·�½�
			else {//������������ϣ�ת�����������
				pointer = aStack.top();
				aStack.pop();//ջ��Ԫ����ջ
			}
		}
	}
	void InOrderWithoutRecusion(BinaryTreeNode<T>* root) {//��������޵ݹ�
		using std::stack;//ʹ��STL�е�stack
		stack < BinaryTreeNode<T>*>aStack;
		BinaryTreeNode<T>* pointer = root;
		while (!aStack.empty() || pointer)
		{
			if (pointer)
			{
				//Visit(pointer->value());//ǰ����ʵ�
				aStack.push(pointer);//��ǰ����ַ��ջ
				//��ǰ���ӽṹָ������
				pointer = pointer->left;
			}//end if
			else {//������������ϣ�ת�����������
				pointer = aStack.top();
				aStack.pop();//ջ��Ԫ����ջ
				cout << pointer->value << " ";//���ʵ�ǰ���
				//��ǰ���ӽṹָ���Һ���
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
	Node getSuccessorNode(Node node) {//Ѱ�Һ�̽��
		if (node == NULL) {
			return node;
		}
		if (node.right != NULL) {
			return LeftMost(node.right);
		}
		else {//��������
			Node parent = node.parent;
			while (parent != NULL && parent.left != node) {//��ǰ������丸����Һ���
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
	class StackElement {//ջԪ�صĶ���
	public:
		//����ö�����ͱ�־λ
		BinaryTreeNode<T>* pointer;//ָ�����������ָ��
		Tags tag;//��־λ
	};
	void PostOrderWithoutRecursion() {//��������޵ݹ�
		using std::stack;//ʹ��STL��ջ
		StackElement element;
		stack<StackElement> aStack;
		BinaryTreeNode<T>* pointer;
		pointer = root;
		while (!aStack.empty() || pointer)
		{
			while (pointer != NULL)//�طǿ�ָ��ѹջ������·�½�
			{
				element.pointer = pointer;
				element.tag = Left;
				aStack.push(element);//�ѱ�־λΪLeft�Ľ��ѹ��ջ
				pointer = pointer->left;
			}
			element = aStack.top();//���ջ��Ԫ�أ�����ջ
			aStack.pop();
			pointer = element.pointer;
			if (element.tag == Left)//���������������
			{
				element.tag = Right;//���ñ�־λΪRight
				aStack.push(element);
				pointer = pointer->right;
			}
			else {//���������������
				Visit(pointer->value);//���ʵ�ǰ���
				pointer = NULL;//����pointָ��Ϊ�գ��Լ�����ջ
			}
		}
	}
	void Visit(BinaryTreeNode<T> p) {//���ʺ�������ӡ��
		cout << p.value << " ";
	}
	bool Delete(const T& data) {//ɾ��
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
		if (!pCur)//û�ҵ�
			return false;
		if (pCur->left && pCur->right) {//���Һ��Ӷ���
			//��pCur������������С�ڵ㣬��pCur����ֵ��Ȼ��ɾ��
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
		else if (pCur->left) {//ֻ��������
			if (!pParent) {//ɾ���ڵ�Ϊ���ڵ�
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
		else {//ֻ�����������߿���
			if (!pParent) {//ɾ���ڵ�Ϊ���ڵ�
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
	bool Insert(const T& data) {//����
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
	Node* Find(const T& data) {//Ѱ��
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
	Node* LeftMost(BinaryTreeNode<T>* current) {//Ѱ����ײ�����
		if (!root)
			return nullptr;
		Node* ptr = root;
		while (ptr->left)
			ptr = ptr->left;
		return ptr;
	}
	Node* RightMost(BinaryTreeNode<T>* current) {//Ѱ����ײ�����
		if (!root)
			return nullptr;
		Node* ptr = root;
		while (ptr->right)
			ptr = ptr->right;
		return ptr;
	}
	void InOrder(BinaryTreeNode<T>* root) {//��������ݹ�
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

//���Զ���������

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

//����������ʵ��

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
//	T key;            // �ؼ���(��ֵ)
//	BSTNode* left;    // ����
//	BSTNode* right;    // �Һ���
//	BSTNode* parent;// �����
//	BSTNode(T value, BSTNode* p, BSTNode* l, BSTNode* r) :key(value), parent(), left(l), right(r) {}
//};
//
//template <class T>
//class BSTree {
//private:
//	BSTNode<T>* mRoot;    // �����
//
//public:
//	BSTree();
//	~BSTree();
//
//	// ǰ�����"������"
//	void preOrder();
//	// �������"������"
//	void inOrder();
//	// �������"������"
//	void postOrder();
//
//	// (�ݹ�ʵ��)����"������"�м�ֵΪkey�Ľڵ�
//	BSTNode<T>* search(T key);
//	// (�ǵݹ�ʵ��)����"������"�м�ֵΪkey�Ľڵ�
//	BSTNode<T>* iterativeSearch(T key);
//
//	// ������С��㣺������С���ļ�ֵ��
//	T minimum();
//	// ��������㣺���������ļ�ֵ��
//	T maximum();
//
//	// �ҽ��(x)�ĺ�̽�㡣��������"������������ֵ���ڸý��"��"��С���"��
//	BSTNode<T>* successor(BSTNode<T>* x);
//	// �ҽ��(x)��ǰ����㡣��������"������������ֵС�ڸý��"��"�����"��
//	BSTNode<T>* predecessor(BSTNode<T>* x);
//
//	// �����(keyΪ�ڵ��ֵ)���뵽��������
//	void insert(T key);
//
//	// ɾ�����(keyΪ�ڵ��ֵ)
//	void remove(T key);
//
//	// ���ٶ�����
//	void destroy();
//
//	// ��ӡ������
//	void print();
//private:
//	// ǰ�����"������"
//	void preOrder(BSTNode<T>* tree) const;
//	// �������"������"
//	void inOrder(BSTNode<T>* tree) const;
//	// �������"������"
//	void postOrder(BSTNode<T>* tree) const;
//
//	// (�ݹ�ʵ��)����"������x"�м�ֵΪkey�Ľڵ�
//	BSTNode<T>* search(BSTNode<T>* x, T key) const;
//	// (�ǵݹ�ʵ��)����"������x"�м�ֵΪkey�Ľڵ�
//	BSTNode<T>* iterativeSearch(BSTNode<T>* x, T key) const;
//
//	// ������С��㣺����treeΪ�����Ķ���������С��㡣
//	BSTNode<T>* minimum(BSTNode<T>* tree);
//	// ��������㣺����treeΪ�����Ķ�����������㡣
//	BSTNode<T>* maximum(BSTNode<T>* tree);
//
//	// �����(z)���뵽������(tree)��
//	void insert(BSTNode<T>*& tree, BSTNode<T>* z);
//
//	// ɾ��������(tree)�еĽ��(z)�������ر�ɾ���Ľ��
//	BSTNode<T>* remove(BSTNode<T>*& tree, BSTNode<T>* z);
//
//	// ���ٶ�����
//	void destroy(BSTNode<T>*& tree);
//
//	// ��ӡ������
//	void print(BSTNode<T>* tree, T key, int direction);
//};
//
///*
// * ���캯��
// */
//template <class T>
//BSTree<T>::BSTree() :mRoot(NULL)
//{
//}
//
///*
// * ��������
// */
//template <class T>
//BSTree<T>::~BSTree()
//{
//	destroy();
//}
//
///*
// * ǰ�����"������"
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
// * �������"������"
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
// * �������"������"
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
// * (�ݹ�ʵ��)����"������x"�м�ֵΪkey�Ľڵ�
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
// * (�ǵݹ�ʵ��)����"������x"�м�ֵΪkey�Ľڵ�
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
// * ������С��㣺����treeΪ�����Ķ���������С��㡣
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
// * ��������㣺����treeΪ�����Ķ�����������㡣
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
// * �ҽ��(x)�ĺ�̽�㡣��������"������������ֵ���ڸý��"��"��С���"��
// */
//template <class T>
//BSTNode<T>* BSTree<T>::successor(BSTNode<T>* x)
//{
//	// ���x�����Һ��ӣ���"x�ĺ�̽��"Ϊ "�����Һ���Ϊ������������С���"��
//	if (x->right != NULL)
//		return minimum(x->right);
//
//	// ���xû���Һ��ӡ���x���������ֿ��ܣ�
//	// (01) x��"һ������"����"x�ĺ�̽��"Ϊ "���ĸ����"��
//	// (02) x��"һ���Һ���"�������"x����͵ĸ���㣬���Ҹø����Ҫ��������"���ҵ������"��͵ĸ����"����"x�ĺ�̽��"��
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
// * �ҽ��(x)��ǰ����㡣��������"������������ֵС�ڸý��"��"�����"��
// */
//template <class T>
//BSTNode<T>* BSTree<T>::predecessor(BSTNode<T>* x)
//{
//	// ���x�������ӣ���"x��ǰ�����"Ϊ "��������Ϊ���������������"��
//	if (x->left != NULL)
//		return maximum(x->left);
//
//	// ���xû�����ӡ���x���������ֿ��ܣ�
//	// (01) x��"һ���Һ���"����"x��ǰ�����"Ϊ "���ĸ����"��
//	// (01) x��"һ������"�������"x����͵ĸ���㣬���Ҹø����Ҫ�����Һ���"���ҵ������"��͵ĸ����"����"x��ǰ�����"��
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
// * �������뵽��������
// *
// * ����˵����
// *     tree �������ĸ����
// *     z ����Ľ��
// */
//template <class T>
//void BSTree<T>::insert(BSTNode<T>*& tree, BSTNode<T>* z)
//{
//	BSTNode<T>* y = NULL;
//	BSTNode<T>* x = tree;
//
//	// ����z�Ĳ���λ��
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
// * �����(keyΪ�ڵ��ֵ)���뵽��������
// *
// * ����˵����
// *     tree �������ĸ����
// *     key ������ļ�ֵ
// */
//template <class T>
//void BSTree<T>::insert(T key)
//{
//	BSTNode<T>* z = NULL;
//
//	// ����½����ʧ�ܣ��򷵻ء�
//	if ((z = new BSTNode<T>(key, NULL, NULL, NULL)) == NULL)
//		return;
//
//	insert(mRoot, z);
//}
//
///*
// * ɾ�����(z)�������ر�ɾ���Ľ��
// *
// * ����˵����
// *     tree �������ĸ����
// *     z ɾ���Ľ��
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
// * ɾ�����(z)�������ر�ɾ���Ľ��
// *
// * ����˵����
// *     tree �������ĸ����
// *     z ɾ���Ľ��
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
// * ���ٶ�����
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
// * ��ӡ"���������"
// *
// * key        -- �ڵ�ļ�ֵ
// * direction  --  0����ʾ�ýڵ��Ǹ��ڵ�;
// *               -1����ʾ�ýڵ������ĸ���������;
// *                1����ʾ�ýڵ������ĸ������Һ��ӡ�
// */
//template <class T>
//void BSTree<T>::print(BSTNode<T>* tree, T key, int direction)
//{
//	if (tree != NULL)
//	{
//		if (direction == 0)    // tree�Ǹ��ڵ�
//			cout << setw(2) << tree->key << " is root" << endl;
//		else                // tree�Ƿ�֧�ڵ�
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


//ѡ������

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
//		for (int j = i + 1; j < length; j++) {//i~N-1������Сֵ�±�
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
//	//0~0����
//	//0~i������
//	for (int i = 1; i < length; i++) {//0~i��������
//		for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
//			swap(arr, j, j + 1);
//		}
//	}
//}
//int process(int arr[],int L,int R) {//L��ʼֵΪ0��R��ʼֵΪ���鳤��-1
//	if (L == R) {//arr[L...R]��Χ��ֻ��һ������ֱ�ӷ��أ�basecase
//		return arr[L];
//	}
//	int mid = L + ((R - L) >> 1);//�е�
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
//void process(int arr[], int L, int R) {//L��ʼֵΪ0��R��ʼֵΪ���鳤��-1
//	if (L == R) {//arr[L...R]��Χ��ֻ��һ������ֱ�ӷ��أ�basecase
//		return;
//	}
//	int mid = L + ((R - L) >> 1);//�е�
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

////����һ������arr[l...r]�ĺ���
////Ĭ����arr[r]�����֣�arr[r]->p <p =p >p
////���ص���������߽磬�ұ߽磩�����Է���һ������Ϊ2������res��res[0],res[1]
//int* partition(int arr[], int L, int R) {
//	int less = L - 1;//<���ұ߽�
//	int more = R;//>����߽�
//	while (L < more) {//L��ʾ��ǰ����λ�� arr[R]->����ֵ
//		if (arr[L] < arr[R]) {//��ǰ��<����ֵ
//			swap(arr, ++less, L++);
//		}
//		else if (arr[L] > arr[R]) {//��ǰ��>����ֵ
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
//		quickSort(arr, L, p[0]-1);//<��
//		quickSort(arr, p[1]+1, R);//>��
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
////ĳ�������ڴ���indexλ��,���ϼ����ƶ�
//void heapInsert(int arr[], int index) {
//	while (arr[index] > arr[(index - 1) / 2]) {
//		swap(arr, index, (index - 1) / 2);
//		index = (index - 1) / 2;
//	}
//}
//
////ĳ������indexλ�ã��ܷ������ƶ�
//void heapify(int arr[], int index, int heapSize) {
//	int left = index * 2 + 1;//���ӵ��±�
//	while (left < heapSize) {//�·����к���ʱ
//		//���������У�˭����˭���±��largest
//		int largest = (left + 1 < heapSize) && (arr[left + 1] > arr[left]) ? left + 1 : left;
//		//������֮��,˭����˭���±��largest
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
////arr[begin..end]����
//void radixSort2(int arr[], int L, int R, int digit) {
//	const int radix = 10;
//	int i = 0, j = 0;
//	//�ж��ٸ���׼�����ٸ������ռ�
//	int* bucket = new int[R - L + 1];
//	for (int d = 1; d <= digit; d++) {//�ж���λ�ͽ�������
//		//10���ռ�
//		//count[i]��ǰλ��(0~i)�������ж��ٸ�
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
////��Ϊ�Ǹ���
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

//�����㷨

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
//		eT = eT == NULL ? sT : eT;//��һ����˭ȥ����������ͷ��˭�ͱ��eT
//	}
//	if (eT != NULL) {//���С������͵������򣬲��Ƕ�û��
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
//	//n:����1���ȼ�ȥ����2���ȵ�ֵ
//	cur1 = n > 0 ? head1 : head2;//˭����˭��ͷ���cur1
//	cur2 = cur1 == head1 ? head2 : head1;//˭�̣�˭��ͷ���cur2
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

//��ӡ��͹��

////�ݹ���̣�������ĳһ���
////i�ǽ��Ĳ�����nһ���Ĳ�����down==true �� down=false ͹
//void printfProcess(int i, int n, bool down) {
//	if (i > n) {
//		return;
//	}
//	printfProcess(i + 1, n, true);
//	string a_or_t = down ? "��" : "͹";
//	cout << a_or_t;
//	printfProcess(i + 1, n, false);
//}
//
//void printfAllFolds(int n)
//{
//	printfProcess(1, n, true);
//}

//ͼ

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
//	int in; //���,�ж��ٸ���ָ��˽��
//	int out;	//���ȣ��ж��������ɴ˽�㷢ɢ
//	list<Node*> nexts;  //�˽����from������£��ھӽ��
//	list<Edge*> edges;	//�Ӵ˽���������ɢ���ߵļ���
//};
//class Graph {
//public:
//	map<int, Node*> nodes;// ����źͽ���ӳ�伯��
//	set<Edge*> edges;	//�ߵļ���
//};
//Graph* CreateGraph(int matrix[][3], int n){	//n��ʾ���� ��matrix.size()
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
////���(���)���ȱ���
//void bfs(Node* node){
//	if (node == NULL){
//		return;
//	}
//	deque<Node*> deq;
//	set<Node*> set;
//	deq.push_back(node);
//	set.insert(node);
//	while (deq.size() != 0){
//		Node* cur = deq.front();	//����deq������Ԫ
//		deq.pop_front();//�����д�ӡ
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
////ͼ��������ȱ���
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
//	//key:ĳһ��node
//	//value:ʣ������
//	map<Node, int>inMap;
//	//���Ϊ0�ĵ㣬���ܽ��������
//	queue<Node>zeroInquere;
//	for(Node node:graph.nodes.)
//}

//��ĸ����

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
//			flag = i;//flag���������һ�����ֵ��±�
//			while (input[flag + 1] >= '0' && input[flag + 1] <= '9')flag++;
//			sum = 0, for_math = 1, flag2 = flag;//flag2������i��ֵ��ʹ����������֮��ĵ�һ����ĸ��������ȥ
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

//ǰ׺��ʵ��

//#include <iostream>
//#include <string>
//#include <string.h>
//
//using namespace std;
//const int MaxBranchNum = 26;//������չ
//class TrieNode {
//public:
//    string word;
//    int path;  //���ַ����������ٴΣ�����ͳ���Ը��ַ�����Ϊǰ׺���ַ����ĸ���
//    int End; //�Ը��ַ���β���ַ���
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
//    //�����ַ���str
//    void insert(string str);
//    //��ѯ�ַ���str�Ƿ���ֹ�����������Ϊǰ׺����
//    int search(string str);
//    //ɾ���ַ���str
//    void Delete(string str);
//    void destory(TrieNode* root);
//    //��ӡ���е����нڵ�
//    void printAll();
//    //��ӡ��str��Ϊǰ׺�ĵ���
//    void printPre(string str);
//    //�����ֵ�˳�������rootΪ�������е���
//    void Print(TrieNode* root);
//    //������strΪǰ׺�ĵ��ʵĸ���
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
//        node->path++;//��һ��·����������ڵ�
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

//ǰ׺������main����

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

//ʱ���

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

//����Ǯ

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

//n�ʺ�

////colLim�е����ƣ�1��λ�ò��ܷŻʺ�0��λ�ÿ���
////leftDiaLim��б�ߵ����ƣ�1��λ�ò��ܷŻʺ�0����
////rightDiaLim��б�ߵ����ƣ�1��λ�ò��ܷŻʺ�0����
//int process(int limit, int colLim, int leftDiaLim, int rightDiaLim) {
//	if (colLim == limit) {//base case
//		return 1;
//	}
//	//���к�ѡ�ʺ��λ�ã�����pos��
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

//�Ͽ�˹����

///*
//��������ʹ��Dijkstra�㷨ʵ��������·��������
//���õ��ڽӾ������洢ͼ
//*/
////��¼��㵽ÿ����������·������Ϣ
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
//	int vexnum;   //ͼ�Ķ������
//	int edge;     //ͼ�ı���
//	int** arc;   //�ڽӾ���
//	Dis* dis;   //��¼�����������·������Ϣ
//public:
//	//���캯��
//	Graph_DG(int vexnum, int edge);
//	//��������
//	~Graph_DG();
//	// �ж�����ÿ������ĵıߵ���Ϣ�Ƿ�Ϸ�
//	//�����1��ʼ���
//	bool check_edge_value(int start, int end, int weight);
//	//����ͼ
//	void createGraph();
//	//��ӡ�ڽӾ���
//	void print();
//	//�����·��
//	void Dijkstra(int begin);
//	//��ӡ���·��
//	void print_path(int);
//};
//
////���캯��
//Graph_DG::Graph_DG(int vexnum, int edge) {
//	//��ʼ���������ͱ���
//	this->vexnum = vexnum;
//	this->edge = edge;
//	//Ϊ�ڽӾ��󿪱ٿռ�͸���ֵ
//	arc = new int* [this->vexnum];
//	dis = new Dis[this->vexnum];
//	for (int i = 0; i < this->vexnum; i++) {
//		arc[i] = new int[this->vexnum];
//		for (int k = 0; k < this->vexnum; k++) {
//			//�ڽӾ����ʼ��Ϊ�����
//			arc[i][k] = INT_MAX;
//		}
//	}
//}
////��������
//Graph_DG::~Graph_DG() {
//	delete[] dis;
//	for (int i = 0; i < this->vexnum; i++) {
//		delete this->arc[i];
//	}
//	delete arc;
//}
//
//// �ж�����ÿ������ĵıߵ���Ϣ�Ƿ�Ϸ�
////�����1��ʼ���
//bool Graph_DG::check_edge_value(int start, int end, int weight) {
//	if (start<1 || end<1 || start>vexnum || end>vexnum || weight < 0) {
//		return false;
//	}
//	return true;
//}
//
//void Graph_DG::createGraph() {
//	cout << "������ÿ���ߵ������յ㣨�����Ŵ�1��ʼ���Լ���Ȩ��" << endl;
//	int start;
//	int end;
//	int weight;
//	int count = 0;
//	while (count != this->edge) {
//		cin >> start >> end >> weight;
//		//�����жϱߵ���Ϣ�Ƿ�Ϸ�
//		while (!this->check_edge_value(start, end, weight)) {
//			cout << "����ıߵ���Ϣ���Ϸ�������������" << endl;
//			cin >> start >> end >> weight;
//		}
//		//���ڽӾ����Ӧ�ϵĵ㸳ֵ
//		arc[start - 1][end - 1] = weight;
//		//����ͼ��������д���
//		//arc[end - 1][start - 1] = weight;
//		++count;
//	}
//}
//
//void Graph_DG::print() {
//	cout << "ͼ���ڽӾ���Ϊ��" << endl;
//	int count_row = 0; //��ӡ�еı�ǩ
//	int count_col = 0; //��ӡ�еı�ǩ
//	//��ʼ��ӡ
//	while (count_row != this->vexnum) {
//		count_col = 0;
//		while (count_col != this->vexnum) {
//			if (arc[count_row][count_col] == INT_MAX)
//				cout << "��" << " ";
//			else
//				cout << arc[count_row][count_col] << " ";
//			++count_col;
//		}
//		cout << endl;
//		++count_row;
//	}
//}
//void Graph_DG::Dijkstra(int begin) {
//	//���ȳ�ʼ�����ǵ�dis����
//	int i;
//	for (i = 0; i < this->vexnum; i++) {
//		//���õ�ǰ��·��
//		dis[i].path = "v" + to_string(begin) + "-->v" + to_string(i + 1);
//		dis[i].value = arc[begin - 1][i];
//	}
//	//�������ĵ�����·��Ϊ0
//	dis[begin - 1].value = 0;
//	dis[begin - 1].visit = true;
//
//	int count = 1;
//	//����ʣ��Ķ�������·����ʣ��this->vexnum-1�����㣩
//	while (count != this->vexnum) {
//		//temp���ڱ��浱ǰdis��������С���Ǹ��±�
//		//min��¼�ĵ�ǰ����Сֵ
//		int temp = 0;
//		int min = INT_MAX;
//		for (i = 0; i < this->vexnum; i++) {
//			if (!dis[i].visit && dis[i].value < min) {
//				min = dis[i].value;
//				temp = i;
//			}
//		}
//		//cout << temp + 1 << "  "<<min << endl;
//		//��temp��Ӧ�Ķ�����뵽�Ѿ��ҵ������·���ļ�����
//		dis[temp].visit = true;
//		++count;
//		for (i = 0; i < this->vexnum; i++) {
//			//ע�����������arc[temp][i]!=INT_MAX����ӣ���Ȼ�����������Ӷ���ɳ����쳣
//			if (!dis[i].visit && arc[temp][i] != INT_MAX && (dis[temp].value + arc[temp][i]) < dis[i].value) {
//				//����µõ��ı߿���Ӱ������Ϊ���ʵĶ��㣬�Ǿ;͸����������·���ͳ���
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
//	cout << "��" << str << "Ϊ����ͼ�����·��Ϊ��" << endl;
//	for (int i = 0; i != this->vexnum; i++) {
//		if (dis[i].value != INT_MAX)
//			cout << dis[i].path << "=" << dis[i].value << endl;
//		else {
//			cout << dis[i].path << "�������·����" << endl;
//		}
//	}
//}
////������������Ͷ�������ֵ�Ƿ���Ч�������Լ�����Ϊɶ��
////�������ͱ����Ĺ�ϵ�ǣ�((Vexnum*(Vexnum - 1)) / 2) < edge
//bool check(int Vexnum, int edge) {
//	if (Vexnum <= 0 || edge <= 0 || ((Vexnum * (Vexnum - 1)) / 2) < edge)
//		return false;
//	return true;
//}
//int main() {
//	int vexnum; int edge;
//
//	cout << "����ͼ�Ķ�������ͱߵ�������" << endl;
//	cin >> vexnum >> edge;
//	while (!check(vexnum, edge)) {
//		cout << "�������ֵ���Ϸ�������������" << endl;
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

//λͼ�Ĵ���

//int arr[10];//��ʱ��320bitλ
//int i;//��鿴i��bitλ�õ�״̬
//int numIndex = i / 32;
//int bitIndex = i % 32;
////�õ�iλ�õ�״̬
//int s = ((arr[numIndex] >> (bitIndex)) & 1);
////��iλ��״̬��Ϊ1
//arr[numIndex] = arr[numIndex] | (1 << (bitIndex));
////��iλ��״̬��Ϊ0
//arr[numIndex] = arr[numIndex] & (~(1 << bitIndex));

//��¡������

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
//			return false;				// ׼ȷ
//		}
//		size_t hash2 = Hash2()(key) % N;
//		if (_bs.test(hash2) == false) {
//			return false;				// ׼ȷ
//		}
//		size_t hash3 = Hash3()(key) % N;
//		if (_bs.test(hash3) == false) {
//			return false;				// ׼ȷ
//		}
//		return true;					// ��������
//	}
//	// ...
//private:
//	bitset<N> _bs;
//};


//������

//void infect(int** m, int i, int j, int N, int M) {
//	if (i < 0 || i >= N || j < 0 || j >= M || m[i][j] != 1) {
//		return;
//	}
//	//i.jûԽ�磬���ҵ�ǰλ��ֵ��1
//	m[i][j] = 2;
//	infect(m, i + 1, j, N, M);
//	infect(m, i - 1, j, N, M);
//	infect(m, i, j + 1, N, M);
//	infect(m, i, j - 1, N, M);
//}
//
//int countIslands(int** m, int M, int N) {//NΪ������MΪ����
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


//const int  N = 1005;		//ָ�����鼯���ܰ���Ԫ�صĸ����������������
//int pre[N];     					//�洢ÿ������ǰ����� 
//int my_rank[N];    					//���ĸ߶� 
//void init(int n)     				//��ʼ����������¼��� n�������г�ʼ�� 
//{
//	for (int i = 0; i < n; i++) {
//		pre[i] = i;     			//ÿ�������ϼ������Լ� 
//		my_rank[i] = 1;    			//ÿ����㹹�ɵ����ĸ߶�Ϊ 1 
//	}
//}
//int find(int x)     	 		    //���ҽ�� x�ĸ���� 
//{
//	if (pre[x] == x) return x;  		//�ݹ���ڣ�x���ϼ�Ϊ x������ xΪ����� 
//	return find(pre[x]); 			//�ݹ���� 
//}
//
//int find(int x)     				//�Ľ������㷨�����·��ѹ������ x���ϼ�ֱ�ӱ�Ϊ����㣬��ô���ĸ߶Ⱦͻ��󽵵� 
//{
//	if (pre[x] == x) return x;		//�ݹ���ڣ�x���ϼ�Ϊ x������ xΪ����� 
//	return pre[x] = find(pre[x]);   //�˴����൱�����ҵ������ rootx��Ȼ�� pre[x]=rootx 
//}
//
//bool isSame(int x, int y)      		//�ж���������Ƿ���ͨ 
//{
//	return find(x) == find(y);  	//�ж��������ĸ���㣨������Ԫ���Ƿ���ͬ 
//}
//
//bool join(int x, int y)
//{
//	x = find(x);						//Ѱ�� x�Ĵ���Ԫ
//	y = find(y);						//Ѱ�� y�Ĵ���Ԫ
//	if (x == y) return false;			//��� x�� y�Ĵ���Ԫһ�£�˵�����ǹ���ͬһ���ϣ�����Ҫ�ϲ������� false����ʾ�ϲ�ʧ�ܣ�����ִ��������߼�
//	if (my_rank[x] > my_rank[y]) pre[y] = x;		//��� x�ĸ߶ȴ��� y������ y���ϼ�Ϊ x
//	else								//����
//	{
//		if (my_rank[x] == my_rank[y]) my_rank[y]++;	//��� x�ĸ߶Ⱥ� y�ĸ߶���ͬ������ y�ĸ߶ȼ�1
//		pre[x] = y;						//�� x���ϼ�Ϊ y
//	}
//	return true;						//���� true����ʾ�ϲ��ɹ�
//}


//int KMP(int start, char S[], char T[])
//{
//	int i = start, j = 0;
//	while (S[i] != '\0' && T[j] != '\0')
//	{
//		if (j == -1 || S[i] == T[j])
//		{
//			i++;         //��������һ���ַ��Ƚ� 
//			j++;         //ģʽ�����һ��� 
//		}
//		else j = next[j];
//	}
//	if (T[j] == '\0') return (i - j);    //ƥ��ɹ������±� 
//	else return -1;                 //ƥ��ʧ�ܷ���-1 
//}

//manacher

//#include<iostream>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
////�㷨����
//int maxLcsplength(string str) {
//	//���ַ���ֱ�ӷ���0
//	if (str.length() == 0) {
//		return 0;
//	}
//	//��¼��manacher�ַ����ĳ��ȣ��������ʹ��
//	int len = (int)(str.length() * 2 + 1);
//	//���ٶ�̬����chaArr��¼manacher�����ַ���
//	//���ٶ�̬����pArr��¼ÿ��λ�õĻ��İ뾶
//	char* chaArr = new char[len];
//	int* pArr = new int[len];
//	int index = 0;
//	for (int i = 0; i < len; i++) {
//		chaArr[i] = (i & 1) == 0 ? '#' : str[index++];
//	}
//	//������ɶ�ԭ�ַ�����manacher��
//	//R�����һ��ı߽磬C��R��Ӧ������������ģ�maxn�Ǽ�¼�������İ뾶
//	int R = -1;
//	int C = -1;
//	int maxn = 0;
//	//��ʼ�����ұ���
//	for (int i = 0; i < len; i++) {
//		//��һ��ֱ��ȡ�ÿ��ܵ���̵Ļ��İ뾶����i>Rʱ����̵Ļ��İ뾶��1����֮����̵Ļ��İ뾶������i��Ӧ��i'�Ļ��İ뾶����i��R�ľ���
//		pArr[i] = R > i ? min(R - i, pArr[2 * C - i]) : 1;
//		//ȡ��Сֵ��ʼ�ӱ߽籩��ƥ�䣬ƥ��ʧ�ܾ�ֱ���˳�
//		while (i + pArr[i]<len && i - pArr[i]>-1) {
//			if (chaArr[i + pArr[i]] == chaArr[i - pArr[i]]) {
//				pArr[i]++;
//			}
//			else {
//				break;
//			}
//		}
//		//�۲��ʱR��C�Ƿ��ܹ�����
//		if (i + pArr[i] > R) {
//			R = i + pArr[i];
//			C = i;
//		}
//		//���������İ뾶��ֵ
//		maxn = max(maxn, pArr[i]);
//	}
//	//�ǵ���ն�̬����Ŷ
//	delete[] chaArr;
//	delete[] pArr;
//	//�������һ��Ϊʲô����ֵ��maxn-1����Ϊmanacherstring�ĳ��Ⱥ�ԭ�ַ�����ͬ����������õ��������İ뾶��ʵ��ԭ�ַ������������Ӵ����ȼ�1������Ȥ�Ŀ����Լ���֤����
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

//�����������

//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//	Node(int data) {
//		this->value = data;
//	}
//};
////������xΪͷ����������������Ϣ
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

//������ֵ�����

//using::vector;
//class Employee {
//public:
//	int happy;//�ɴ����Ŀ���ֵ
//	vector<Employee> nexts;//ֱ���¼�
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
//	int lai = x.happy;//x�����������
//	int bu = 0;//x�������������
//	for (Employee next : x.nexts) {
//		Info nextInfo = process(next);
//		lai += nextInfo.buMaxhappy;
//		bu += max(nextInfo.laiMaxhappy, nextInfo.buMaxhappy);
//	}
//	return Info(lai, bu);
//}

//Morris����
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
//	while (cur != NULL) {//������
//		mostRight = cur->left;//mostRight��cur����
//		if (mostRight->right != NULL && mostRight->right != cur) {
//			mostRight = mostRight->right;
//		}
//		//mostRight�����cur�������ϣ����ҵĽڵ�
//		if (mostRight->right == NULL) {//���ǵ�һ������cur
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
//	while (cur != NULL) {//������
//		mostRight = cur->left;//mostRight��cur����
//		if (mostRight != NULL) {//��������
//			while (mostRight->right != NULL && mostRight->right != cur) {
//				mostRight = mostRight->right;
//			}
//			//mostRight�����cur�������ϣ����ҵĽڵ�
//			if (mostRight->right == NULL) {//���ǵ�һ������cur
//				cout << cur->value;
//				mostRight->right = cur;
//				cur = cur->left;
//				continue;
//			}
//			else {//mostRight.right=cur
//				mostRight->right = NULL;
//			}
//		}
//		else {//û�������������
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
//	while (cur != NULL) {//������
//		mostRight = cur->left;//mostRight��cur����
//		if (mostRight != NULL) {//��������
//			while (mostRight->right != NULL && mostRight->right != cur) {
//				mostRight = mostRight->right;
//			}
//			//mostRight�����cur�������ϣ����ҵĽڵ�
//			if (mostRight->right == NULL) {//���ǵ�һ������cur
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
//	while (cur != NULL) {//������
//		mostRight = cur->left;//mostRight��cur����
//		if (mostRight != NULL) {//��������
//			while (mostRight->right != NULL && mostRight->right != cur) {
//				mostRight = mostRight->right;
//			}
//			//mostRight�����cur�������ϣ����ҵĽڵ�
//			if (mostRight->right == NULL) {//���ǵ�һ������cur
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
////��XΪͷ�����������ӡ��������ұ߽�
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
//		sum = a ^ b;//�޽�λ��ӽ��
//		b = (a & b )<< 1;//��λ��Ϣ
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


////���ʣ��ƻ��rest�ܹ�����ƻ�����Ӹ㶨�����ش�������
////���ܸ㶨����-1
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
//		return (n == 0 || n == 2) ? "����" : "����";
//	}
//	int base = 1;
//	while (base <= n) {
//		if (!winner(n - base).compare("����")) {
//			return "����";
//		}
//		if (base > n / 4) {
//			break;
//		}
//		base *= 4;
//	}
//	return "����";
//}
//string winner(int n) {
//	if (n % 5 == 0 || n % 5 == 2) {
//		return "����";
//	}
//	else {
//		return "����";
//	}
//}

//��n�������Թ��ɶ��ٸ���ͬ�ṹ�Ķ�����

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

//����kΪ��ֵ������

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


//δ���

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

//�������Ȩ�غ�

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
////ȫ�ֱ�����ֻ�е���Ҷ�ڵ��ʱ�򣬲��п��ܸ���
//int maxSum = INT_MIN;
////�Ӹ��ڵ��������ǰ�ڵ��Ϸ��Ľڵ㣬��õ�·����
//void p(Node* x, int pre) {
//	if (x->left == NULL && x->right == NULL) {//��ǰx��Ҷ�ڵ�
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
////xΪͷ���������ϣ����·�����Ƕ��٣�����
////·��Ҫ��һ����x��������Ҷ�ڵ㣬����һ��·��
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



