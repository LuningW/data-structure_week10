# data-structure_week10-不相交集
解决等价问题、简单、快速、需要常数平均时间、分析困难
## 等价关系
- 关系R，S，等价类的总结
有R关系不代表一定是等价关系
对于a∈S，定义关系R，不代表S中的元素都和a有R关系，S中存放的是 准备看是否和a有关系R的元素。
- 等价关系R性质：
1.自反性 aRa
2.对称性 aRb当且仅当 bRa
3.传递性 若aRb且bRc，则aRc
- 常见的等价关系：
电气连接、两城市位于同一个国家、通过双向公路从城镇a到b，ab是等价关系
## 动态等价关系
- 基本数据结构
使用一个树来表示一个集合，用根结点来命名该合集（每个树的根节点是相同的）
树不必一定是二叉树，但二叉树表示最方便
树的集合叫森林，用数组来表示该森林
数组的每个成员P[i]来表示元素i的父亲
- 算法实现：
初始状态是每个树里只有根节点，之后的子节点唯一的信息就是父指针
union（X,Y）的运算：一个结点的根指针指向另一棵树的根结点，采纳执行union（X,Y）后的新根节点是X
find（X）的操作通过返回包含X的树的根完成
## 灵巧求并算法
- 按大小求并
让较小树成为较大树的子树
ps：按照任意的顺序进行并集 means：只单纯在Union（X，Y）中把X当作Y的根节点，这样子将会生成更深的树。可证明  按大小求并形成的树深度不超过 log N。
- 算法实现：
初始状态：节点的深度为0。
当求并时，该节点的深度随着Union的结果而增加，他被置于至少是他以前所在树的两倍大的树上
（这里的理解：当节点从未被求并时，深度为0，它可以置于的树的深度≥0，0仍是0d的2倍）

