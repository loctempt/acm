#include <iostream>
#include <queue>
using namespace std;
struct node{    //调整了队列的优先级：同一位置不叠加元素时，较小的pos优先级高；
    int pos;    //同一位置有多个元素时，较小的dist优先级高。
    int dist;
    friend bool operator < (node a, node b){
        if(a.pos == b.pos)
            return a.dist > b.dist;
        return a.pos > b.pos;
    }
    node(int p, int d):pos(p), dist(d){}
    node(){}
};
priority_queue<node> myPQ;
int main(){

    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        while(!myPQ.empty())    //每次进入循环时将队列清空。
            myPQ.pop();
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int stone_pos, stone_dist;
            cin >> stone_pos >> stone_dist;
            myPQ.push(node(stone_pos, stone_dist));
        }
        int the_i_th_stone = 1; //步数：初值为一，即第一步。
        node stoneTemp;
        while(!myPQ.empty()){
            stoneTemp = myPQ.top();
            myPQ.pop();
            if((the_i_th_stone++) % 2){ //若碰到某位置有多个石头叠加，就遍历它们，将第奇数个弹出，并按照pos+dist从新加入队列（扔出去），第偶数个弹出后即忽略。
                myPQ.push(node(stoneTemp.pos + stoneTemp.dist, stoneTemp.dist));
            }
        }   //如果剩下的唯一石头是遇到的第奇数个，把它扔出去后再次遇到就成为了第偶数个，将它弹出队列后即忽略，此时队列空了，即得到了结果。
        cout << stoneTemp.pos << endl;  //最后那个石头所在的位置就是所求结果，将它输出。
    }

    return 0;
}
