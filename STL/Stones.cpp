#include <iostream>
#include <queue>
using namespace std;
struct node{    //�����˶��е����ȼ���ͬһλ�ò�����Ԫ��ʱ����С��pos���ȼ��ߣ�
    int pos;    //ͬһλ���ж��Ԫ��ʱ����С��dist���ȼ��ߡ�
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
        while(!myPQ.empty())    //ÿ�ν���ѭ��ʱ��������ա�
            myPQ.pop();
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int stone_pos, stone_dist;
            cin >> stone_pos >> stone_dist;
            myPQ.push(node(stone_pos, stone_dist));
        }
        int the_i_th_stone = 1; //��������ֵΪһ������һ����
        node stoneTemp;
        while(!myPQ.empty()){
            stoneTemp = myPQ.top();
            myPQ.pop();
            if((the_i_th_stone++) % 2){ //������ĳλ���ж��ʯͷ���ӣ��ͱ������ǣ�����������������������pos+dist���¼�����У��ӳ�ȥ������ż���������󼴺��ԡ�
                myPQ.push(node(stoneTemp.pos + stoneTemp.dist, stoneTemp.dist));
            }
        }   //���ʣ�µ�Ψһʯͷ�������ĵ��������������ӳ�ȥ���ٴ������ͳ�Ϊ�˵�ż�����������������к󼴺��ԣ���ʱ���п��ˣ����õ��˽����
        cout << stoneTemp.pos << endl;  //����Ǹ�ʯͷ���ڵ�λ�þ��������������������
    }

    return 0;
}
