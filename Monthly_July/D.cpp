//#include <algorithm>
//#include <iostream>
//#include <cstdio>
////#define TEST
//using namespace std;
//int tot = 0, sample[30], N;
//void dfs(int now, int len, int cnt = 1){
//    if(cnt == len){
//        tot++;
//        return;
//    }
//    if(len == 1)
//        return;
//    int currVal = sample[now];
//    for(int i = now + 1; i < N; i++){//������ʹ˴�ѭ�����Ծ�����ֻ�ñȵ�ǰֵ���Ԫ�ؽ��бȽϡ�
//        int nextVal = sample[i];
//        if(nextVal - currVal > len){//��֦����nextVal�뵱ǰֵ�Ĳ���ڼ��ϳ���len�������������Ԫ�أ������еݹ顣
//            dfs(i, len, cnt + 1);
//        }
//    }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        cin >> N;
//        tot = 0;
//        for(int i = 0; i < N; i++){
//            cin >> sample[i];
//        }
//        sort(sample, sample + N);
//        for(int i = N; i > 1; i--){//iΪ���ϳ���len��
//            for(int j = 0; j < N; j++)//jΪ��㡣
//                dfs(j, i, 1);
//        }
//        cout << tot << endl;
//    }
//
//    return 0;
//}
