//#include <iostream>
//
//using namespace std;
//
//struct node {
//    int val;
//    node* next;
//};
//
//node map[1000000];
//node head, tail;
//
//int N, ncnt;
//
//void result(int tc) {
//    cout << '#' << tc << ' ';
//    node* now = head.next;
//
//    for (int i = 0; i < 10 && now->next != NULL; i++) {
//        cout << now->val << ' ';
//        now = now->next;
//    }
//
//    cout << '\n';
//        
//}
//
//void solve() {
//    int cmd;
//    cin >> cmd;
//    for (int i = 0; i < cmd; i++) {
//        char ch;
//        cin >> ch;
//
//
//
//        if (ch == 'I') {
//            int x, y;
//            cin >> x >> y;
//
//            node tmp_head = { 0, NULL }, tmp_tail = { 0, NULL };
//            int now_val;
//
//            for (int j = 0; j < y; j++) {
//                node* now = &map[ncnt];
//                cin >> now_val;
//
//                if (tmp_head.next == NULL && tmp_tail.next == NULL) {
//                    now->val = now_val;
//                    tmp_head.next = tmp_tail.next = now;
//
//                    ncnt++;
//                }
//                else {
//                    now->val = now_val;
//                    tmp_tail.next->next = now;
//
//                    ncnt++;
//                }
//            }
//            node* now = &head;
//            for (int j = 0; j < x; j++) {
//                now = now->next;
//            }
//            tmp_tail.next->next = now->next;
//            now->next = tmp_head.next;
//        }
//        else if (ch == 'D') {
//            int x, y;
//            cin >> x >> y;
//            node* now = &head;
//
//            int flag = 0;
//            for (int j = 0; j < x; j++) {
//                now = now->next;
//            }
//            node* tmp = now;
//            for (int j = 0; j < y; j++) {
//                if (tmp->next == NULL){
//                    flag = 1;
//                    break;
//                }
//                tmp = tmp->next;
//            }
//            if (flag == 1) {
//                now->next = NULL;
//                tail.next = now;
//            }
//            else {
//            now->next = tmp->next;
//            }
//        }
//        else if (ch == 'A') {
//            int y;
//            cin >> y;
//
//            node tmp_head = { 0, NULL }, tmp_tail = { 0, NULL };
//            node* now = &map[ncnt];
//            ncnt++;
//            int now_val;
//            for (int j = 0; j < y; j++) {
//                cin >> now_val;
//                now = &map[ncnt];
//                if (tmp_head.next == NULL && tmp_tail.next == NULL) {
//                    now->val = now_val;
//                    tmp_head.next = tmp_tail.next = now;
//
//                    ncnt++;
//                }
//                else {
//                    now->val = now_val;
//                    tmp_tail.next->next = now;
//
//                    ncnt++;
//                }
//            }
//            tail.next->next = tmp_head.next->next;
//            tail.next = tmp_tail.next;
//        }
//    }
//}
//
//void input() {
//    cin >> N;
//    node* now = &head;
//
//    for (int i = 0; i < N; i++) {
//        int tmp_val;
//        cin >> tmp_val;
//        now = &map[ncnt];
//        if (head.next == NULL && tail.next == NULL) {
//            now->val = tmp_val;
//            head.next = tail.next = now;
//
//            ncnt++;
//        }
//        else {
//            now->val = tmp_val;
//            now->next = &tail;
//            tail.next->next = now;
//            tail.next = now;
//            
//            ncnt++;
//        }
//
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    for (int tc = 1; tc <= 10; tc++) {
//        head.next = NULL;
//        tail.next = NULL;
//        ncnt = 0;
//
//        input();
//        solve();
//        result(tc);
//    }
//
//    return 0;
//}


#include <iostream>

using namespace std;

int map[100][100];
int N, cnt;
struct point {
	int y, x;
};

void solve() {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (map[i][j] == 0)
				continue;
			
			cnt++;
		}
	}
}

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int y, x;
		cin >> y >> x;
		for (int a = y; a < y + 10; a++) {
			for (int b = x; b < x + 10; b++) {
				map[a][b] = 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	input();
	solve();

	cout << cnt;
	return 0;
}