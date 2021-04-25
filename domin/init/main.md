Cho 2 mảng toàn cục B và T dùng để lưu bản đồ mìn và trạng thái đóng/mở của các ô trong trò chơi MineSweeper.

#define M 5
#define N 5
#define MINE -1
/*Mảng B lưu bảng đồ mìn*/
int B[M][N];
/*Mảng T lưu trạng thái các ô*/
int T[M][N];
#### Hãy viết hàm init() để khởi tạo bản đồ mìn B như hình vẽ:
||0|1|2|3|4
|-|-|-|-|-|-|
|0|0|0|0|0|0|
|1|0|0|-1|0|0|
|2|0|0|0|0|0|
|3|0|-1|0|0|0|
|4|0|0|0|0|0|

Tất cả các ô đều có trạng thái 0 (chưa mở).

Khuôn dạng (prototype)

Tên hàm: init
Tham số: không
Kiểu trả về: void
Thân hàm:

Khởi tạo các giá trị cho mảng B và T theo yêu cầu.


Chú ý

Dữ liệu đầu vào luôn hợp lệ.
Chỉ viết HÀM, không viết TOÀN BỘ CHƯƠNG TRÌNH
## Giải
````
void init(){
    int i, j;
    for(i = 0; i < M; i ++){
        for(j = 0; j < N; j ++){
            B[i][j] = (i == 1 && j == 2) || (i == 3 && j == 1) ? MINE : 0;
            T[i][j] = 0;
        }
    }
}
````
